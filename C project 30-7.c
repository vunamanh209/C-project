#include <stdio.h>
int main()
{
   int* pc, c;
   
   c = 209;
   pc = &c;
   
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  
   
   return 0;
}
