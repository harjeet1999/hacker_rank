#include<stdio.h>
void main()
{ int n;
  scanf("%d",&n);
  char a[][9]={"one","two","three","four","five","six","seven","eight","nine"};
  if(n<=9)
   { printf("%s\n",a[n-1]);
     }
  else
   { printf("Greater than 9");
    }
 }
