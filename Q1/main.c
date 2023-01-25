#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i,flag=1;
    printf("Enter 1st number: ");
    scanf("%d",&n1);
    //Checking if prime/composite
    for(i=2;i<=n1/2;i++){
        if(n1%i==0){
            flag=0;
            break;
        }
    }
    if(flag==0)
        printf("Composite number\n\n");
    else
        printf("Prime number\n\n");
    //Checking if co-prime
    printf("Enter 2nd number: ");
    scanf("%d",&n2);
    int hcf=n1>n2?n2:n1;
    for(hcf;hcf>0;hcf--){
        if(n1%hcf==0 && n2%hcf==0)
            break;
    }
    if(hcf==1)
        printf("Co-prime numbers");
    else
        printf("Not Co-prime numbers");
    return 0;

    //Check if circular prime
}
