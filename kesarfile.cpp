#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        FILE *fp;
        int ch,c=0;
        if((fp=fopen("data.txt","w+"))==NULL)
        {
                printf("Error While Opening a file\n");
                exit(1);
        }
        printf("Press ctrl+d for terminating otherwise continue\n");
        while((ch=getchar())!=EOF)
				fputc(ch,fp);
        //fclose(fp);
       // if((fp=fopen("data.txt","r"))==NULL)
        //{ 
         //       printf("Error While Opening a file\n");
           //     exit(1);
       // }
        fseek(fp,0L,0);
       /// printf("Mayank Tripathi ",fp+1);
        while((ch=fgetc(fp))!=EOF)
                printf("%c",ch);
        fclose(fp);
        return 0;
}
