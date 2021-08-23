#include <stdio.h>
int main()
{
   FILE * file;
   file = fopen("C:\\program.txt","r");
      
      char arr[20];
      fgets(arr,12,file);
      printf("%s\n",arr);
      printf("done");
  
      fclose(file);
   return 0;
}
