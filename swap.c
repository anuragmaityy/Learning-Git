#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,*b,n,m,temp;
    printf("Enter two numbers:")
    scanf("%d,%d",&n,&m);
    printf("before swap: %d %d",n,m);
    a=&n;
    b=&m;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("after swap: %d %d",n,m);
    return 0;
}
    