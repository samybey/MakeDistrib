#!/bin/bash

echo 'group main' > ~/.nodelist
cat $OAR_NODEFILE > ~/.nodelisttemp
while read p; do
    echo 'host '$p >> ~/.nodelist
done  < ~/.nodelisttemp
