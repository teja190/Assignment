#include <stdio.h>
int main(){
   FILE * file;
   file = fopen("C:\\program.txt","w");
      
      fputs("hello world",file);
      printf("done\n");
  
      fclose(file);
   return 0;
}
