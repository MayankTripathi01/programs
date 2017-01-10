-#include<stdio.h>
int main()
{
	int m,n,k,i,j,l,s=0;
	printf("Enter the number of rows and columns : ");
	scanf("%d%d",&m,&n);
	int a[m][n],b[m][n],add[m][n],mul[m][n];
	printf("Enter the entries alternatively i.e. one for matrix A and another for Matrix B: ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("A[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
			printf("B[%d][%d]= ",i,j);
				scanf("%d",&b[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<m;i++){
		for(l=0;l<n;l++){
			add[i][l]=a[i][l]+b[i][l];
		for(k=0;k<n;k++){
			for(j=0;j<n;j++){
				s+=a[i][j]*b[j][k];
			}
			mul[i][k]=s;
			s=0;
		}
		
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	}
	printf("Addition is\n ");
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
			printf("%d ",add[i][j]);
		}
		printf("\n");
	}
	
}
