#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100];
    int l,i;
    clrscr();
    scanf("%[^\t\n]s",a);
    l=strlen(a);
    a[0]=a[0]-32;
    for(i=0;i<l;i++)
    {
      if(a[i]==' ')
      {
          a[i+1]=a[i+1]-32;
      }
    }
    printf("%s",a);
	
	return 0;
}
