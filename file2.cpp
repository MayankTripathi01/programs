#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	FILE *fp;
	int c=0,s=0,t=0,n=0;
	int ch;
	char cn;
	if((fp=fopen("temp.txt","r"))==NULL)
	{
		printf("cant open the required file");
		exit(1);
	}
	while((cn=fgetc(fp))!=EOF)
	{
	//	cn=(char)ch;
		printf("%c----%d\n",cn,cn);
		if((cn<91&&cn>64)||(cn<123||cn>96)){
			printf("\t%c\n",cn);
			c++;
		}
		if(cn==' ')
			s++;
		else if(cn=='\n')
			n++;
		else if(cn=='\t')
			t++;
	}
	printf("%d characters %d spaces %d new line\n",c,s,n);
	fclose(fp);
}
