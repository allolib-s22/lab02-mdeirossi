# need to re-add the submodules into the index
rm -rf allolib
rm -rf al_ext
git submodule add -b devel https://github.com/AlloSphere-Research-Group/allolib.git
git submodule add -b devel https://github.com/AlloSphere-Research-Group/al_ext.git

git submodule update --recursive --init
