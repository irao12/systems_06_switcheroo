#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
//step 1
  int ints [10];
//step 2
  int i;
  int x;
  srand( time(NULL) );
  for (i = 0; i < 10; i++){
    ints[i] = rand();
  }
//step 3
  ints[9] = 0;
//step 4
  for (i = 0; i < 10; i++){
    printf("ints[%d]: %d\n", i, ints[i]);
  }
  printf("\n");
//step 5
  int more_ints[10];
//step 6
  int * ip = ints;
  int * mip = more_ints;
  for (i = 0; i < 10; i++){
    *(mip+i) = *(ip + 9 - i);
    printf("more_ints[%d]: %d\n", i, *(mip+i));
  }
}
