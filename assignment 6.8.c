
#include <stdio.h>

int main()
{
    int n,i,count=0;
    printf("enter a number:");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       if(n%i==0)
       count=count+1;   
       
       
   }
   if(count>2)
   printf("not prime");
   else
    printf("prime");
    return 0;
}
