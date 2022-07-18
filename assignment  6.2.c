#include <stdio.h>

int main()
{
    int i,n,s=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+ (2*i);
        
    }
        printf("%d",s);
        printf("\n");
    return 0;
}