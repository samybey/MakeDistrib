#!/bin/bash

oarsub -I -l nodes=2 walltime=0:30
git clone https://github.com/samybey/MakeDistrib.git
git clone http://charm.cs.illinois.edu/gerrit/charm.git
cd charm
./build charm++ netlrts-linux-x86_64 --with-production
cd ..
sudo-g5k apt-get install gradle
cd projections
make
cd ../MakeDistrib
git checkout cyrilTes
make
echo 'group main' > ~/.nodelist
cat $OAR_NODEFILE > ~/.nodelisttemp
while read p; do
    echo 'host ' >> ~/.nodelist
    echo $p >> ~/.nodelist
done
