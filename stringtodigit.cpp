#include<stdio.h>
int main()
{
	int n[5],i;
	char a[5];
	printf("Enter a number");
	scanf("%s",&a);
	for(i=0;i<5;i++)
	{
		if(a[i]!=0){
		n[i]=int(a[i])-48;
		printf("%d\n",n[i]);
	}
	}
	
	
	
}
