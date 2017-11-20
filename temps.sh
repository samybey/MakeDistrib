cd test/makefiles/premier
for i in `seq 8 3 25`;
do
    touch time$i.log
    touch timesimple$i.txt
    time -o timesimple$i.txt ./../../../charmrun +p$i ++remote-shell oarsh ./../../../Main Makefile +isomalloc_sync +traceroot ../../../log
    ../../../log/Main.sts > time$i.log
    rm list*
done
