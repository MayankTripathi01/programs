#include<stdio.h>
int main()
{
	int n,i,j,k,l,m;
	printf("Enter the no.of rows : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i<=n/2){
			for(j=0;j<i;j++)
				printf(" ");
			printf("%d",2*n-i);
			for(k=0;k<n-2*i;k++)
				printf(" ");
			printf("%d",n-i);
		}
	
		else{
			for(l=0;l<j-1;l++)
				printf(" ");
			j--;
			printf("%d",2*n-i);
			k+=2;
			for(m=0;m<k;m++)
				printf(" ");
			printf("%d",n-i);
		}
			printf("\n");
	}
}

