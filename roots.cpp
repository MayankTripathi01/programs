#include<stdio.h>
int main()
{   int n,x;
    printf("Enter no");
    scanf("%d",&n);
    printf("Generic root: %d",(1+(n-1)%9));
    return 0;
}
