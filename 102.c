#include<stdio.h>

int main() {
   int num;
   scanf("%d",&num);
   if(num<=10)
   {
   if(num%2==0)
   {
       num=num/2;
       printf("%d\n",num);
   }
   else
   {
       printf("%d\n",num);
}}
   return 0;
}
