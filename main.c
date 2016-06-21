#include <stdio.h>
#include <stdlib.h>
//hay problemas
int cdnp(int a, int b, int c, int cc, int d, int e, int x){
    if(a>=0 && a<=9) {
        if (a%2==0){
            printf("El n%cmero %d es par\n", 163, a);
            x++;
        }
        else {
            printf("El n%cmero %d es impar\n", 163, a);
        }
        printf("El n%cmero tiene %d n%cmeros pares\n", 163, x, 163);
    }
    if (a>=10 || a<=99) {
        b=a/10;
        if (b%2==0){
            printf("El n%cmero %d es par\n", 163, b);
            x++;
        }
        else {
            printf("El n%cmero %d es impar\n", 163, b);
        }
        a=a%10;
        if (a%2==0){
            printf("El n%cmero %d es par\n", 163, a);
            x++;
        }
        else {
            printf("El n%cmero %d es impar\n", 163, a);
    }
    printf("El n%cmero tiene %d n%cmeros pares\n", 163, x, 163);
    }
    if(a>=100 && x<=999)    {
        cc=a/100;
        c=cc/10;
        if (c%2==0){
            printf("El n%cmero %d es par\n", 163, c);
            x++;
        }
        else {
            printf("El n%cmero %d es impar\n", 163, c);
        }
        b=a/10;
        if (b%2==0){
            printf("El n%cmero %d es par\n", 163, b);
            x++;
        }
        else {
            printf("El n%cmero %d es impar\n", 163, b);
        }
        a=a%10;
        if (a%2==0){
            printf("El n%cmero %d es par\n", 163, a);
            x++;
        }
        else {
            printf("El n%cmero %d es impar\n", 163, a);
        }
        printf("El n%cmero tiene %d n%cmeros pares\n", 163, x, 163);
    }
}
int a, b, c, cc, d, e, x;
int main()
{
    scanf("%d", &a);
    cdnp(a, b, c, cc, d, e, x);
}
