#include <stdio.h>
#include <math.h>
#include<string.h>

void isArmstrongNumber(int);
int noOfDigits(int);
int main(void) 
{
    int n;
	scanf("%d",&n);
	isArmstrongNumber(n);
	return 0;
}
void isArmstrongNumber(int n)
{
    int p=n;
    int count=noOfDigits(n);
    char flag[10];
    int sum=0;
    while((n/10)!=0)
    {
        sum+=pow(n%10,count);
        n/=10;
    }
    sum+=pow(n%10,count);
    (sum==p)?strcpy(flag,"TRUE"):strcpy(flag,"FALSE");
    printf(flag);
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
   
   return f;
}
