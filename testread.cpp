#include<stdio.h>
#include<stdlib.h>
struct student
	{
		char name[20];
		float marks; 
	}stu;
int main()
{
	FILE *fp;
	if((fp=fopen("test1.txt","r"))==NULL)
	{
		printf("Error\n");
		exit(1);
	}
	printf("NAME\tMARKS\n");
	while(fscanf(fp,"%s  %f",stu.name,&stu.marks)!=EOF)
		printf("%s\t%f\n",stu.name,stu.marks);
	fclose(fp);
	return 0;
}
