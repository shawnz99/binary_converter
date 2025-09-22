/*
 *  convtobinary: Program to convert (ideally) strings from stdin to a binary output
 */

#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>

#define BYTES  4
#define BITS   8

void intToBinary(int n) {
  if (n == 0) { 
    return ;
  }

  char binaryArray[BYTES * BITS] = {0};
  
  int r;
  int i = 0;
  while (n != 1) {
    r = n % 2;
    n = n / 2;

    binaryArray[i] = r; 
    i++;
  }
  binaryArray[i] = n % 2; // Get that last 1 

  for (int j = i; j >= 0; j--) {
    printf("%d", binaryArray[j]);
  }
  printf("\n");

  return;
}


int main(int argc, char **argv){
  intToBinary(305);


 return 0;   
}

