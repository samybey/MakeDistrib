cd test/makefiles/premier
for i in `seq 1 3 40`;
do
    touch time$i.log
    time ./../../../charmrun +p$i ++remote-shell oarsh ./../../../Main Makefile +isomalloc_sync +traceroot ../../../log > time$i.log
done
