#!/bin/bash
make
cd test/premier
for i in `seq 5 3 25`;
do
    touch time$i.txt
    (time ./../../charmrun +p$i ++remote-shell oarsh ./../../Main Makefile +isomalloc_sync) 2>> time$i.txt
    rm list*
done
