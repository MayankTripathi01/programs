#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[200],*p;
	int i=0,l,j;
	printf("enter the sentance : ");
	scanf("%[^\n]s",a);
	l=strlen(a);
	for(i=l;i>=0;i--)
	{
	//	a[i]=NULL;
		printf("%c\n",a[i]);
	}
	printf("%d      m\n",a[15]);
	p=a;
	for(i=l;i>=0;i--)
	{
		if((*(p+i)==' ')||i==0)
		{
			if(i!=0)
			j=i+1;
			else
			j=i;
			while(a[j]!=' ')
			{
				printf("%c",a[j]);
				j++;
			}
			printf(" ");
			
		}
	}
}	
