#include<stdio.h>

int main() {
   char a[100];
   scanf("%s",a);
   int k,i,l=0;
   scanf("%d",&k);
   for(i=0;a[i]!='\0';i++)
   {
       l++;
   }
   for(i=l-k;i<l;i++)
   {
       printf("%c",\na[i]);
   }
   return 0;
}
