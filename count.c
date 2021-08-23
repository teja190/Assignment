#include <stdio.h>
int main()
{
    int c=0,w=0,l=0;
    char ch;
   FILE * file;
   (file = fopen("C:\\program.txt","r"));
   
      
      while((ch = fgetc(file))!=EOF)
      {
          c++;
          if(ch=='\n'||ch=='\0')
          l++;

          if(ch==' '||ch=='\t'||ch=='\n'||ch=='\0')
          w++;

      }
      
      
      printf("done\n");
   
   
   fclose(file);

   printf("no.of characters = %d\n",c-(w));
    printf("no.of lines = %d\n",l+1);
     printf("no.of words = %d\n",w+1);
   return 0;
}
