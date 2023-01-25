#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("How many elements: ");
    scanf("%d",&n);
    int x[n];
    printf("\nEnter numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int min=x[0],max=x[0];
    for(i=1;i<n;i++){
        if(x[i]>max)
            max=x[i];
        if(x[i]<min)
            min=x[i];
    }
    printf("Maximum value in list = %d\n",max);
    printf("Minimum value in list = %d",min);
    return 0;
}
