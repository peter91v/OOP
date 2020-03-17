#include<stdio.h>
int main()
{
    //
    char arr[16];
    int hex=0, rest=0;
    int i=0, j=0;

    printf("Geben Sie eine Hexadezimalzahl ein:\n");
    scanf("%d",&hex);

    int x = hex;
    while (x != 0){
        rest = x % 16;
        if (rest < 10)
            arr[j++] = 48 + rest;
        else
            arr[j++] = 55 + rest;
        x = x / 16;
    }

    for (i=j; i >= 0; i--)
        printf("%c", arr[i]);



    return 0;
}