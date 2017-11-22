#!/bin/bash

#### A executer une fois dans le dossier git du projet ####

mkdir build
mkdir log
cd ..
git clone http://charm.cs.illinois.edu/gerrit/charm.git
cd charm
./build charm++ netlrts-linux-x86_64
cd ..
sudo-g5k apt-get --assume-yes install gradle
git clone http://charm.cs.uiuc.edu/gerrit/projections
cd projections
make clean
make
cd ../MakeDistrib
make
echo 'group main' > ~/.nodelist
cat $OAR_NODEFILE > ~/.nodelisttemp
while read p; do
    echo 'host '$p >> ~/.nodelist
done  < ~/.nodelisttemp


### apres l execution, il devrait y avoir a la racine, un dossier MakeDistrib, un dossier charm et un dossier projections ###
