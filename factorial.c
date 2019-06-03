#include <stdio.h>

int main(void) 
{
    int a;
    scanf("%d",&a);
    int result=fact(a);
    printf("%d\t",result);
	return 0;
}
int fact(int n)
{
    int f=1;
    if(n<=0)
    {
        f=1;
    }
    else
    {
        for(int i=2;i<n+1;i++)
        {
            f*=i;
        }
    }
    return f;
}
