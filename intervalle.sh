cd test/premier
for i in `seq 1 1 30`;
do
    echo "$i _________________"
    time ./../../charmrun +p15 ++remote-shell oarsh ./../../Main Makefile +isomalloc_sync
    rm list*
done
