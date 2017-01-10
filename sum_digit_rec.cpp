#include<stdio.h>
int sum(int,int);
int main(){
	int n,s;
	printf("Enter a number : ");
	scanf("%d",&n);
	s=sum(n,0);
	printf("%d",s);
}
int sum(int n,int s){
	s+=n%10;
	n=n/10;
	if(n>0)
		sum(n,s);
	else
		return s;
}
