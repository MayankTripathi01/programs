#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter the number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d ",i);
		k=i;
		for(j=1;j<i;j++){
			printf(" %d",k+n-j);
			k=k+n-j;
		}
		printf("\n");
	}
}
