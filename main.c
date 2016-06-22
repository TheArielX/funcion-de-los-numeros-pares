#include <stdio.h>
#include <stdlib.h>
int cdnp(int a, int b, int bb, int c, int cc, int d, int dd, int e, int x){
    if(a>=0 && a<=9 || a<=0 && a>=-9) {
        if (a%2==0){
            printf("El n%cmero %d es par\n", 163, a);
            x++;
        }
        else {
            printf("El n%cmero %d es impar\n", 163, a);
        }
        if(x==1){
            printf("El n%cmero tiene %d n%cmero par\n", 163, x, 163);
        }
        else{
        printf("El n%cmero tiene %d n%cmeros pares\n", 163, x, 163);
        }
    }
    if (a>=10 && a<=99 || a<=-10 && a>=-99) {
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
    if(x==1){
            printf("El n%cmero tiene %d n%cmero par\n", 163, x, 163);
        }
        else{
        printf("El n%cmero tiene %d n%cmeros pares\n", 163, x, 163);
        }
    }
    if(a>=100 && a<=999 || a<=-100 && a>=-999)    {
        c=a/100;
        if (c%2==0){
            printf("El n%cmero %d es par\n", 163, c);
            x++;
        }
        else {
            printf("El n%cmero %d es impar\n", 163, c);
        }
        bb=a%100;
        b=bb/10;
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
        if(x==1){
            printf("El n%cmero tiene %d n%cmero par\n", 163, x, 163);
        }
        else{
        printf("El n%cmero tiene %d n%cmeros pares\n", 163, x, 163);
        }
    }
    if(a>=1000 && a<=9999 || a<=-1000 && a>=-9999)    {
        d=a/1000;
        if (d%2==0){
            printf("El n%cmero %d es par\n", 163, d);
            x++;
        }
        else {
            printf("El n%cmero %d es impar\n", 163, d);
        }
        cc=a/100;
        c=cc%10;
        if (c%2==0){
            printf("El n%cmero %d es par\n", 163, c);
            x++;
        }
        else {
            printf("El n%cmero %d es impar\n", 163, c);
        }
        bb=a%100;
        b=bb/10;
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
        if(x==1){
            printf("El n%cmero tiene %d n%cmero par\n", 163, x, 163);
        }
        else{
        printf("El n%cmero tiene %d n%cmeros pares\n", 163, x, 163);
        }
    }
    if(a>=10000 && a<=99999 || a<=-10000 && a>=-99999)    {
        e=a/10000;
        if(e%2==0){
            printf("El n%cmero %d es par\n", 163, e);
            x++;
        }
        else{
            printf("El n%cmero %d es impar\n", 163, e);
        }
        dd=a/1000;
        d=dd%10;
        if (d%2==0){
            printf("El n%cmero %d es par\n", 163, d);
            x++;
        }
        else {
            printf("El n%cmero %d es impar\n", 163, d);
        }
        cc=a/100;
        c=cc%10;
        if (c%2==0){
            printf("El n%cmero %d es par\n", 163, c);
            x++;
        }
        else {
            printf("El n%cmero %d es impar\n", 163, c);
        }
        bb=a%100;
        b=bb/10;
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
        if(x==1){
            printf("El n%cmero tiene %d n%cmero par\n", 163, x, 163);
        }
        else{
        printf("El n%cmero tiene %d n%cmeros pares\n", 163, x, 163);
        }
    }
}
int a, b, bb, c, cc, d, dd, e, x;
int main()
{
    printf("Introduzca el n%cmero que desea consultar su cantidad de n%cmeros pares\nOjo: El n%cmero introducido no puede tener m%cs de 5 d%cgitos.\nIntroduzca el n%cmero: ", 163, 163, 163, 160, 161, 163);
        scanf("%d", &a);
            while (a>99999 || a<-99999) {
                printf("El n%cmero %d tiene m%cs de 5 d%cgitos\nPor favor, introduzca un n%cmero con 5 d%cgitos o menos\n\n", 163, a, 160, 161, 163, 161);
                    printf("Introduzca el n%cmero que desea consultar su cantidad de n%cmeros pares\nOjo: El n%cmero introducido no puede tener m%cs de 5 d%cgitos.\nIntroduzca el n%cmero: ", 163, 163, 163, 160, 161, 163);
                        scanf("%d", &a);
            }

            cdnp(a, b, bb, c, cc, d, dd, e, x);
}
