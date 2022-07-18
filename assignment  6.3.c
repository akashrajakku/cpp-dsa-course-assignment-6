#include <stdio.h>

int main()
{
    int i,n,s=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s=s+ (2*i)+1;
        
    }
        printf("%d",s);
        printf("\n");
    return 0;
}