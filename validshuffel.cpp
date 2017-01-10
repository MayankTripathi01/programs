#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void shift(char *);
int main()
{
	char *s1,*s2,fl[40];
	int i,l,l1,l2;
	s1=(char *)malloc(20);
	s2=(char *)malloc(20);
	for(i=0;i<40;i++)
	fl[i]=NULL;
	printf("Enter the strings :");
	scanf("%s%s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	l=(l1>l2?l1:l2);
	for(i=0;i<l;i++)
	{
		strncat(fl,s1,1);
		strncat(fl,s2,1);
		shift(s1);
		shift(s2);
		
	}
	printf("%s",fl);
}
void shift(char *s)
{
	int i=0,l=strlen(s);
	while(*(s+i)!='\0'){
		*(s+i)=*(s+i+1);
		i++;
	}
	*(s+l-1)='\0';
}
