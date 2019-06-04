#include <stdio.h>
#include<math.h>
void isPalindrome(int);
int main(void) 
{
    int n;
	scanf("%d",&n);
	isPalindrome(n);
	return 0;
}
void isPalindrome(int n)
{
    int sum=0;
    int p=n;
   while(n!=0)
   {
      sum=sum*10+n%10;
      n/=10;
   }
   (sum==p)?printf("yes"):printf("no");
}



