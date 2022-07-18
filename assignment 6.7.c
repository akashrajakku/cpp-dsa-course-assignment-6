
#include <stdio.h>

int main()
{
    int n,s=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        s=s+1;
    }
    printf("\nnumber of digit is %d",s);

    return 0;
}
