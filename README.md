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

Run simple simulation and visualize as a DNA sequence (inside src/ folder):
<pre>
./rand 200 7 4 | tr 'abcd' 'ACGT'
<pre>

Run proof of incompressibility from common data compressors (inside src/ folder):
<pre>
./RunRand.sh 20000 11 2 
</pre>

From the proof size of the compressed files we are able to notice that although a simple program created the sequence, the used data compressors are not able to efficiently minimize the sequence size without loss of information.
