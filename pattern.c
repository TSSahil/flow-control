#include <stdio.h>

int main(void) 
{
    int n;
	scanf("%d",&n);
	printPattern(n);
	return 0;
}
void printPattern(int n)
{
    int m=(n*2-1)/2;
   for(int i=0;i<n;i++)
   {
        for(int j=0;j<m;j++)
       {
            printf(" ");
       }
       m-=1;
       for(int j=0;j<(2*i-1);j++)
       {
            printf("*");
       }
       printf("\n");
   }
}



