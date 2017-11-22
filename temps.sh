#!/bin/bash


######## Script permettant d executer premier sur un nombre de coeurs qui varie, place les temps dans time.txt avec le nombre de coeurs. Ceci pour permettre de plot directement les résultats obtenus #######

#### format attendu pour les resultats:
#nombre de coeurs    temps (sec)
#5                   245.15
#7                   214.78


cd test/makefiles/premier
#Format pour n avoir que le temps real
TIMEFORMAT=%R
#SUPPRESSION DES FICHIERS TEMPORAIRES
rm time*
touch time.txt
rm list*

#essai sans boucle, simplement pour huit processeurs
touch time8.txt
echo -n "8  " > time8.txt
(time ./../../../charmrun +p8 ++remote-shell oarsh ./../../../Main Makefile +isomalloc_sync) 2>> time.txt
rm time8.txt
rm list*



#essai avec boucle
for i in `seq 5 3 25`;
do
    touch time$i.txt
    touch temp
    echo -n "$i   " > time$i.txt
    (time ./../../../charmrun +p$i ++remote-shell oarsh ./../../../Main Makefile +isomalloc_sync) 2>> temp
    tail -n 1 temp >> time$i.txt
    cat time$i.txt >> time.txt
    rm temp
    rm time$i.txt
    rm list*
done
