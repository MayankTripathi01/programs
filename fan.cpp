#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
#define t 20
void fun1();
void fun2();
void fun3();
void fun4();
int main()
{
	while(1)
	{
		fun1();
		Sleep(t);
		system("cls");
		fun2();
		Sleep(t);
		system("cls");	
		fun3();
		Sleep(t);
		system("cls");
	
		
		fun4();
		Sleep(t);
		system("cls");
		
	
	
	
	
	}
}


void fun1()
{
	int i,j;
	for(i=0;i<19;i++){
		printf("  ");
		for(j=0;j<11;j++)
			printf(" ");
		if(i==9)
			printf("@\n");
		else
		printf("*\n");
		
	}
}
void fun2()
{
	int i,j;
	for(i=0;i<19;i++)
	{
		printf("  ");
		for(j=0;j<20-i;j++)
			printf(" ");
		if(i==9)
			printf("@\n");
		else
		printf("*\n");
	}
}
void fun3()
{
	int i,j;
	for(j=0;j<9;j++)
		printf("\n");
	for(i=0;i<27;i++)
	{
		if(i==13)
			printf("@");
		else
		printf("*");
	}
}
void fun4()
{
	int i,j;
	for(i=0;i<19;i++)
	{
		printf("    ");
		for(j=0;j<i;j++)
			printf(" ");
		if(i==9)
		printf("@");
		else
		printf("*");
		printf("\n");
	}
}
