#include <stdio.h>
#include<math.h>
void isPalindrome(int);
int main(void) 
{
    int n;
	scanf("%d",&n);
	fibonacciSeries(n);
	return 0;
}
void fibonacciSeries(int n)
{
    int f=0;
    int s=1;
    printf("%d\t",f);
    printf("%d\t",s);
    int sum=f+s;
    f=s;
    s=sum;
    for(int i=3;i<=n;i++)
    {
        printf("%d\t",sum);
        sum=f+s;
        f=s;
        s=sum;
    }
    
}



