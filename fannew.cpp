#include<stdio.h>
#include<time.h>
#include<windows.h>
#define t 1000
void fun1();
void fun2();
int main()
{
	while(1)
	{
		fun1();
		Sleep(t);
		system("cls");
	

	}
}
void fun2(){
	
	int i,j,k,l;
	for(i=0;i<10;i++)
	{
		if(i<5)
		{
			for(j=0;j<5;j++)
				printf(" ");
			printf("*\n");
		}
		else
		{
			for(j=0;j<9-i;j++)
				printf(" ");
			printf("*");
			for(k=0;k<2*i-10;k++)
				printf(" ");
			printf("*");
			printf("\n");	
		}
	}
} 	 
void fun1(){
	int i,j,k,l;
	for(i=0;i<10;i++)
	{
		if(i<5)
		{
				for(j=0;j<i;j++)
				printf(" ");
			printf("*");
			for(k=0;k<(10-2*i);k++)
			printf(" ");
			printf("*");
			printf("\n");
		}
		else
		{
				for(l=0;l<6;l++)
				printf(" ");
			printf("*\n");	
		}
	}
}       
