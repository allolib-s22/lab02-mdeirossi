#ifndef INSTRUMENT_CELESTA_HPP
#define INSTRUMENT_CELESTA_HPP

#include "Gamma/Effects.h"
#include "Gamma/Envelope.h"
#include "Gamma/Oscillator.h"

#include "al/scene/al_PolySynth.hpp"

using namespace al;

class InstrumentCelesta : public SynthVoice
{
public:
    gam::Pan<> mPan;
    gam::Sine<> mOsc;
    gam::Sine<> mOsc2;
    gam::Sine<> mOsc4;
    gam::Env<4> mAmpEnv;

    void init() override;
    void onProcess(AudioIOData& io) override;
    
    void onTriggerOn() override { mAmpEnv.reset(); }
    void onTriggerOff() override { mAmpEnv.release(); }
};

#endif
