#!?bin/bash
echo "what is your name"
read a;
mkdir $a
cd $a

for i in 1 2 3 4 5
do
touch $a$i.cpp
done
