#include<stdio.h>
int cop(int,int);
int main()
{
	int c;
	if(cop(2,3)==1)
	printf("%d",cop(2,3));
}
int cop(int a,int b)
{
	if(b==0)
		return a;
	else
		return cop(b,a%b);
}
