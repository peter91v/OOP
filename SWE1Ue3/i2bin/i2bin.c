#include<stdio.h>
int main()
{
    //
    int arr[32],dez,i;

    printf("Geben Sie eine Dezimalzahl ein:\n");
    scanf("%d",&dez);
    for ( i=0; 0< dez; i++)
    {
        arr[i]=dez%2;
        dez=dez/2;
    }

    for (; i > 0; i--)
    {
        printf("%d",arr[i-1]);

    }

    return 0;
}