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

Run simple simulation:
<pre>
./rand 200 7 4
</pre>

Run simple simulation and visualize as a DNA sequence:
<pre>
./rand 200 7 4 | tr 'abcd' 'ACGT'
<pre>


Run demo:
<pre>
./RunRand.sh 20000 11 2 
</pre>
