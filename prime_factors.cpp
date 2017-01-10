#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,p,k,c;
start:printf("Enter the number: ");
	scanf("%d",&n);
	k=n;
	 p=2;
	 while(p<n+1){
		if(n%p==0){
			n=n/p;
			if(p+1>n&&p!=n)
				printf(" %d",p);
			else
				printf(" %d x",p);
		}
		else{
			p++;
			for(i=2;i<p/2;i++){
				if(p%i==0){
					p++;
					continue;
				}
			}
		}
	}
	printf(" = %d\n",k);
	fflush(stdin);
	printf("Do you want to continue: Y/N  ");
	scanf("%c",&c);
	if(c=='Y'||c=='y')
		goto start;
	else
		exit(0);
}
