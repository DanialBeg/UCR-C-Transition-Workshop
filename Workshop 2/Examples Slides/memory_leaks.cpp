/* Function with memory leak */
#include <stdlib.h>

void f()
{
  int *ptr = (int *) malloc(sizeof(int));
  
  /* Do some work */
  
  return; /* Return without freeing ptr*/
}

int main()
{
  f();
  return 0;
}
