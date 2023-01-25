#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p,q;
    int n;
    printf("\nc- character\nn- single digit number");
    printf("\nEnter c/n: ");
    scanf("%c",&p);
    if(p=='c'){
        fflush(stdin);
        printf("\nEnter character: ");
        scanf("%c",&q);
        printf("ASCII Value of %c: %d",q,q);
    }
    else{
        printf("\nEnter number: ");
        scanf("%d",&n);
        printf("ASCII Value of %d: %d",n,n);
    }
    return 0;
}
