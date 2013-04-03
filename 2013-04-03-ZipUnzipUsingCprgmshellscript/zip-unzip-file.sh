#!/bin/bash
echo "Good morning, world."
#bzip2 test.txt
FILE=./test.txt

if [ -f $FILE ];
then
   bzip2 test.txt
   echo "zip file"
else
   bunzip2 test.txt.bz2
   echo "unzip file"
fi
