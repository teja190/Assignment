#include<stdio.h>
int main()
{
   int num,rev_num;

   printf("\nEnter any number:");
   scanf("%d",&num);

   rev_num=rev_fn(num);
   printf("\nAfter reverse the no is :%d",rev_num);
   return 0;
}
int sum=0,rem;
rev_fn(int num)
{
   if(num)
   {
      rem=num%10;
      sum=sum*10+rem;
      rev_fn(num/10);
   }
   else
      return sum;
   
}

//Enter any number:1234

//After reverse the no is :4321
