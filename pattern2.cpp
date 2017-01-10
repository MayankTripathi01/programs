#include<stdio.h>
int main()
{
	int n,i,j,p=1,k;
	printf("Enter the no of rows : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=1;j<n-i;j++)
			printf("   ");
		for(k=0;k<i+1;k++){
			if(p<10)
			printf("%d  ",p);
			else
			printf("%d ",p);
			p++;
		}
		printf("\n");
	}
}
