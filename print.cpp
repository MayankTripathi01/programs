#include<stdio.h>
#include<stdlib.h>
int print(char *ptr,void *vp);
int main()
{
	int a=130;
	print("Mayank %d tripathi ",a);
	return 0;
}
int print(char *ptr,void *vp)
{
	int b,count=0,temp=0,i=0;
	b=a;
	while(b!=0)
	{
		count++;
		b=b/10;
	}
	char num[count];
	b=a;
	for(i=0;i<count;i++)
	{
		temp=b%10;
		num[count-(i+1)]=temp+'0';
		b=b/10;
	}
/*	while(a!=0)
	{
		temp=a%10;
		a=a/10;
		b=b*10;
		b+=temp;
		
	}
printf("%d",b);*/
		while(*ptr!='\0')
	{
		if(*ptr=='%')
		{
			ptr++;
			for(i=0;i<count;i++)
				putchar(num[i]);
		}
		else
		putchar(*ptr);
		ptr++;	
}
}
