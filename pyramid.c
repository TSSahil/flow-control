#include <stdio.h>

int main(void) 
{
    int a;
    scanf("%d",&a);
    pyramid(a);
	return 0;
}
int pyramid(int n)
{
   for(int i=1;i<=n;i++)
   {
       for(int j=0;j<i;j++)
       {
           printf("*");
       }
       printf("\n");
   }
}

