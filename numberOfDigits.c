#include <stdio.h>

int main(void) 
{
    int a;
    scanf("%d",&a);
    int result=noOfDigits(a);
    printf("%d\t",result);
	return 0;
}
int noOfDigits(int n)
{
    int x=n;
    int f;
   while(x/10!=0)
   {
       f++;
       x/=10;
   }
   f+=1;
   return f;
}

