#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("temp.txt","w"))==NULL)
	{
		printf("Cant open the file\n");
		exit(1);
	}
	printf("Enter the data: \n");
	while((ch=getchar())!=EOF)
	fputc(ch,fp);
	fclose(fp);
	fp=fopen("temp.txt","r");
	while((ch=fgetc(fp))!=EOF)
		putchar(ch);
	fclose(fp);
}
