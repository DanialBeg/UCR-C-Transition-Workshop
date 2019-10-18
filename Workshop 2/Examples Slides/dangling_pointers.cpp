// Deallocating a memory pointed by ptr causes
// dangling pointer
#include <stdlib.h>
#include <stdio.h>

int main()
{
  int* ptr = (int *)malloc(sizeof(int));
  
  // After below free call, ptr becomes a
  // dangling pointer
  free(ptr);
  
  //No more a dangling pointer
  ptr = NULL;
}
