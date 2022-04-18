#include "InstrumentCelesta.hpp"


// Initialize voice. This function will only be called once per voice when
// it is created. Voices will be reused if they are idle.
void InstrumentCelesta::init()
{
    // Intialize envelope
    mAmpEnv.curve(0); // make segments lines
    mAmpEnv.levels(0, 1.0, 0.8, 0.1, 0);
    mAmpEnv.sustainPoint(3); // Make point 2 sustain until a release is issued

    // This is a quick way to create parameters for the voice. Trigger
    // parameters are meant to be set only when the voice starts, i.e. they
    // are expected to be constant within a voice instance. (You can actually
    // change them while you are prototyping, but their changes will only be
    // stored and aplied when a note is triggered.)

    createInternalTriggerParameter("amp", 0.3, 0.0, 1.0);
    createInternalTriggerParameter("freq", 60, 20, 5000);
    createInternalTriggerParameter("pan", 0.0, -1.0, 1.0);

    mAmpEnv.lengths()[0] = 0.01; // attack
    mAmpEnv.lengths()[1] = 0.02; // decay
    mAmpEnv.lengths()[2] = 1.0; // sustain decay
    mAmpEnv.lengths()[3] = 0.1; // release
}

// The audio processing function
void InstrumentCelesta::onProcess(AudioIOData& io)
{
    // Get the values from the parameters and apply them to the corresponding
    // unit generators. You could place these lines in the onTrigger() function,
    // but placing them here allows for realtime prototyping on a running
    // voice, rather than having to trigger a new voice to hear the changes.
    // Parameters will update values once per audio callback because they
    // are outside the sample processing loop.
    float f = getInternalParameterValue("freq");
    mOsc.freq(f);
    mOsc2.freq(f * 2);
    mOsc4.freq(f * 4);

    float a = getInternalParameterValue("amp");

    mPan.pos(getInternalParameterValue("pan"));
    while (io())
    {
        float s1 = mAmpEnv() * (mOsc() * a + mOsc2() * (a / 2.0f) + mOsc4() * (a / 4.0f));
        float s2;
        mPan(s1, s1, s2);
        io.out(0) += s1;
        io.out(1) += s2;
    }
    // We need to let the synth know that this voice is done
    // by calling the free(). This takes the voice out of the
    // rendering chain
    if (mAmpEnv.done())
        free();
}
