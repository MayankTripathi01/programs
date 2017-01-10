#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fact(int);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,n1,i=0,r,n[100];
    char temp[100];
    scanf("%d",&t);
    //printf("\n%d",t);
    //scanf("%d",n[0]);
   for(i=0;i<t;i++)
    {
    	scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++)
    printf("%d,%d",n[i],i);

    /*for(i=0;i<t;i++)
    {
        n1=n[i];
        r=0;
        printf("\n");
        while(r<=n1)
        {
            printf("%d ",(fact(n1)/(fact(r)*fact(n1-r))));
        }
    }
    return 0;*/
}
int fact(int n)
{
    if(n==1||n==0)
        return 1;
    else
    {
        return (n*fact(n-1));
    }
}

