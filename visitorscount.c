#include <stdio.h>
int main()
{
   int visitors = 0;
   visitors++;
   visitors++;
   visitors++;
   visitors++;
   visitors--;
   printf("Current Visitors in Mall: %d", visitors);
   return 0;
}