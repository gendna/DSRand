#include <stdlib.h>
#include <stdio.h>
#include <math.h>

unsigned long int next = 1;

int Rand()
  {
  next = next * 1103515245 + 12345;
  return ((unsigned int)(next / 65536) % 32768);
  }

void srand(unsigned int seed)
  {
  next = seed;
  }

int main(int argc, char *argv[])
  {
  if(argc < 4)
    {
    fprintf(stderr, "Arguments: ./rand <size> <seed> <cardinality>\n");
    return 1;
    }

  unsigned long size = atol(argv[1]);
  unsigned seed = atol(argv[2]);
  unsigned cardinality = atoi(argv[3]);

  srand(seed);

  for(unsigned long x = 0 ; x < size ; ++x)
    {
    fprintf(stdout, "%c", Rand() % cardinality + 'a');
    }

  double max = (double) size * log2(cardinality);
  fprintf(stderr, "Bits: %.0lf (%.0lf bytes)\n", max, max / 8.0);  

  return 0;
  }
