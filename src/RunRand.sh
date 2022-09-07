#!/bin/bash
#
#gcc rand.c -lm -o rand;
#
SIZE="$1";
SEED="$2";
CARDINALITY="$3";
#
./rand $SIZE $SEED $CARDINALITY > seq.txt; 
#
gzip -f -k seq.txt
bzip2 -f -k seq.txt
#
ls -la | grep seq | awk '{ print $5"\t"$9;}'
#
