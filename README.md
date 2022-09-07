# DSRand

Simulation of DNA sequences based on LCG

Install and prepare tools:
<pre>
sudo apt-get install gzip -y
sudo apt-get install bzip2 -y
cd src/
gcc rand.c -lm -o rand
chmod +x RunRand.sh
</pre>

Run demo:
<pre>
./RunRand.sh 10000 11 2 > sequence.txt
</pre>
