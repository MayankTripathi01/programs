#include<stdio.h>
int main()
{
	int n1,n2,n3,i,j,k,l;
	printf("Enter the size of first array second array and third: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	int a1[n1],a2[n2],a3[n3];
	printf("Now enter the values of first array");
	for(i=0;i<n1;i++)
		scanf("%d",&a1[i]);
	printf("Now enter the values of second array");
	for(i=0;i<n2;i++)
		scanf("%d",&a2[i]);
	printf("Now enter the values of third array");
	for(i=0;i<n3;i++)
		scanf("%d",&a3[i]);

	for(j=0;j<n1;j++)
		for(k=0;k<n2;k++)
			if(a1[j]==a2[k])
				for(l=0;l<n3;l++)
					if(a1[j]==a3[l])
						printf("%d\n",a1[j]);
	search(5,a3[],n3);				
	return 0;
}
int search(int a, int b[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a==b[i])
		printf("%d",a);
	}
	
}
