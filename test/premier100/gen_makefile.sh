echo 'list1.txt:' > MakefileTemp
echo '\t./premier 2 `echo 100*10000000/100-1 |bc` > list1.txt' >> MakefileTemp
echo -n 'list.txt:\t' > Makefile
echo -n ' list1.txt' > dependences
echo -n '\tcp list1.txt list.txt' > command

for i in `seq 2 1 20`;
do
    echo '' >> MakefileTemp
    echo 'list'$i'.txt:' >> MakefileTemp
<<<<<<< HEAD:test/premier/gen_makefile.sh
    echo '\t./premier `echo '$i'-1*20*10000000/100 |bc` `echo '$i'*20*10000000/100-1 |bc` > list'$i'.txt' >> MakefileTemp
=======
    echo '\t./premier `echo ('$i'-1)*100*10000000/100 |bc` `echo '$i'*100*10000000/100-1 |bc` > list'$i'.txt' >> MakefileTemp
>>>>>>> 982d46ee33d72427fca9180d711c800608c594e8:test/premier100/gen_makefile.sh
    echo -n ' list'$i'.txt' >> dependences
    echo -n '; cat list'$i'.txt >> list.txt' >> command
done

cat dependences >> Makefile
echo "\t" >> Makefile
cat command >> Makefile
echo "" >> Makefile
cat MakefileTemp >> Makefile
rm dependences
rm command
rm MakefileTemp
