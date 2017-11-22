#!/bin/bash

mkdir build
cd ..
git clone http://charm.cs.illinois.edu/gerrit/charm.git
cd charm
./build charm++ netlrts-linux-x86_64
cd ..
sudo-g5k apt-get --assume-yes install gradle
git clone http://charm.cs.uiuc.edu/gerrit/projections
cd projections
make
cd ../MakeDistrib
git checkout cyrilTes
make
echo 'group main' > ~/.nodelist
cat $OAR_NODEFILE > ~/.nodelisttemp
while read p; do
    echo 'host '$p >> ~/.nodelist
done  < ~/.nodelisttemp
