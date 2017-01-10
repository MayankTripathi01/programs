#include<stdio.h>
int add(int,int,int);
int v;
int main()
{
	int n,s,i=1;
	printf("Enter the number of values you want to sum : ");
	scanf("%d",&v);
	printf("Entre the values: ");
	scanf("%d",&n);
	s=add(n,i,0);
	printf("sum is %d",s);	
}
int add(int n,int i,int s){
	s+=n;
	i++;
	if(i<v+1){
		scanf("%d",&n);
		add(n,i,s);
	}
	else
		return s;
}
