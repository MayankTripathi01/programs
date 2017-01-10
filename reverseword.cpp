#include<stdio.h>
#include<string.h>
void rev(char *,int,int);
int main()
{
	char st[100];
	int s=0,e=0,i;
	printf("enter any strng: ");
	fgets(st,100,stdin);
	for(i=0;i<strlen(st);i++)
	{
		
		 if((st[i]==' ')||(st[i]=='\n'))
		{
			e=e-1;
			rev(st,s,e);
			e+=2;
			s=e;
		
		}
		else
			e++;
	}
	printf("%s",st);
}
void rev(char *str,int s,int e)
{
	char temp;
	while(s<e)
	{
		temp=*(str+s);
		*(str+s)=*(str+e);
		*(str+e)=temp;
		s++;
		e--;
	}
}
