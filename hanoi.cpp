#include<stdio.h>
void myk(int,char,char,char);
int main()
{
	char source='A', temp='B',dest='C';
	int ndisk;
	printf("Enter the number of disk: ");
	scanf("%d",&ndisk);
	printf("Sequence is \n");
	myk(ndisk,source,temp,dest);
	return 0;
}
void myk(int ndisk, char source, char temp, char dest)
{
	if(ndisk==1){
		printf("Move Disk %d From %c----%c\n",ndisk,source,dest);
		return;
	}
	myk(ndisk-1,source,dest,temp);
	printf("Move Disk %d From %c----%c\n",ndisk,source,dest);
	myk(ndisk-1,temp,source,dest);
	
}
