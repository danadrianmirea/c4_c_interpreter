#include <stdio.h>

void f()
{
	printf("in f\n");
}


int main()
{
  int i;
  i = 0;
  
  while(i<100)
  {
	  printf("%d ", i);
	  ++i;
  }
  return 0;
}
