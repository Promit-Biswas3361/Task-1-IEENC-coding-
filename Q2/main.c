#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,cpy,i,rev=0,x;
    printf("Enter number: ");
    scanf("%d",&n);
    cpy=n;
    while(n>0){
        x=n%10;
        n/=10;
        rev=rev*10+x;
    }
    printf("Reverse of %d is:- %d",cpy,rev);
    return 0;
}
