#!/bin/bash

oarsub -I -l nodes=2 walltime=0:30
mkdir make_distrib
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
