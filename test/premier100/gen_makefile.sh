echo 'list1.txt:' > MakefileTemp
echo '\t./premier 2 `echo 100*10000000/100-1 |bc` > list1.txt' >> MakefileTemp
echo -n 'list.txt:' > Makefile
echo -n ' list1.txt' > dependences
echo -n '\tcp list1.txt list.txt' > command

for i in `seq 2 1 100`;
do
    echo 'list'$i'.txt:' >> MakefileTemp
    echo '\t./premier `echo '$(($i-1))'*100*10000000/100 |bc` `echo '$i'*100*10000000/100-1 |bc` > list'$i'.txt' >> MakefileTemp
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
