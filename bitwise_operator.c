#include<stdio.h>
#include<stdlib.h>
int main()

{  
   int n,k,a,b;
   scanf("%d %d",&n,&k);
   int and[2]={0,0},or[2]={0,0},xor[2]={0,0};
    for(a=1;a<n;a++)
    { for(b=a+1;b<=n;b++)
        {  and[0]=a&b;
            or[0]=a|b;
            xor[0]=a^b;
             if(and[0]>and[1] && and[0]<k)
               {
                  and[1]=and[0];     
                  and[0]=0;
                  }
               if(or[0]>or[1] && or[0]<k)
                 { or[1]=or[0];
                   or[0]=0;
                  }
                if(xor[0]>xor[1] && xor[0]<k)
              {  xor[1]=xor[0];
                 xor[0]=0;

                }
        }           

}   printf("%d\n%d\n%d",and[1],or[1],xor[1]);
   return 0;
 }
