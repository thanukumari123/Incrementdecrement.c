#include<stdio.h>
int main()
{
int t=5;
int b=((t++)+(++t)+(t--));
printf("%d",t+b);
     return 0;
}