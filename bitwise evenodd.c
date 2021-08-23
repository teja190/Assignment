#include<stdio.h>
 
int main()
{
   unsigned int n;
   int evv, even, odd;
 
   printf("Enter an integer:");
   scanf("%d",&n);
   
   if ( n & 1 == 1)
   {
      
      printf("Odd:%d\n",n<<1);
   }
   else
   {
      printf("Even:%d\n",n>>1);
      
   }
 
   return 0;
}
