#include<stdio.h>
#include<string.h>
void sort(char *);
int main()
{
	char st[50],str[50];
	int c2,c1,flag=0,i=0;
	printf("Enter a string: ");
	gets(st);
	printf("\nEnter the second:");
	gets(str);
	sort(st);
	sort(str);
	if((c1=strcmp(st,str))==0)
	printf("Anagram");
	else
	printf("No");
}
void sort(char *s)
{
	int i=0,j=0;
	char temp;
	for(i=0;i<strlen(s);i++)
	for(j=i+1;j<strlen(s);j++)
	{
		if(*(s+i)>*(s+j))
		{
			temp=*(s+i);
			*(s+i)=*(s+j);
			*(s+j)=temp;
		}
	}
}

