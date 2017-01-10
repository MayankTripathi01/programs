#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],temp[60],s[11],r[15],str1[100],s1[10],*p,*rp;
	int i,j=0;
	str[0]=' ';
	temp[0]='\0';
	printf("Enter the string: ");
	gets(str1);
	str1[strlen(str1)]=' ';
	strcat(str,str1);
	s[0]=' ';
	s[1]='\0';
	fflush(stdin);
	printf("\nEnter the word you want to replace: ");
	gets(s1);
	s1[strlen(s1)]=' ';
	s1[strlen(s1)+1]='\0';
	strcat(s,s1);
	fflush(stdin);
	printf("\nEnter the word you want to replace :");
	gets(r);
	while(p=strstr(str,s))
	{
		p=strstr(str,s);
		rp=p;
		rp+=strlen(s)-1;
		strcpy(temp,rp);
			for(i=0;i<strlen(r);i++)
			*(p+1+i)=r[i];
		*(p+1+strlen(r))='\0';
		strcat(str,temp);
	}
	while(str[j]!='\0')
	{
		str[j]=str[j+1];
		j++;
	}
	puts(str);
}
