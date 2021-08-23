#include <stdio.h>
int main()
{
   FILE * fp1=fopen("C:\\program.txt","r");
   FILE * fp2=fopen("C:\\program1.txt","a");

  
       char arr[100];
       fgets(arr,50,fp1);
       fputs(arr,fp2);
       printf("done\n");
       fclose(fp1);
       fclose(fp2);
   
   
   return 0;
}
