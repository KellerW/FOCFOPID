# FOCFIOPID
FOCFIOPID is a example of Fractional Order PID control for BLDC Motor application is written in C++ and built with CMake.

## Pre Requiriments
# Get root lib: https://root.cern/install/#build-from-source
# For build and install:

# The latest stable branch gets updated automatically on each release.
# You may update your local copy by issuing a `git pull` command from within `root_src/`.

$ git clone --branch latest-stable --depth=1 https://github.com/root-project/root.git root_src
$ mkdir root_build root_install && cd root_build
$ cmake -DCMAKE_INSTALL_PREFIX=../root_install ../root_src # && check cmake configuration output for warnings or errors
$ cmake --build . -- install -j4 # if you have 4 cores available for compilation
$ source ../root_install/bin/thisroot.sh # or thisroot.{fish,csh


## More information
- Installation instructions are in the INSTALL file
- License is in the LICENSE file
