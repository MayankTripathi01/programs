#include<stdio.h>
int main()
{
	int a=5,b[5]={1,2,3,4,5};
	int *p[5];
	p=b;
	printf("%p",p);
}
