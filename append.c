#include <stdio.h>
int main()
{
   FILE * file;
   file = fopen("C:\\program.txt","a");
      
      char arr[]="\nthis is sai";
      fputs(arr,file);
      printf("done");
  
      fclose(file);
   return 0;
}
