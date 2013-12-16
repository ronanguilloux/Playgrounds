/*
 * hello.c
 * Copyright (C) 2013 ronan <ronan@MacBook-Pro-de-Ronan.local>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>

int main(void)
{

    printf("Hello world!\n");
    const double pi = 3.141596;
    printf("pi = %f", pi);
    double flottant = 19.75;
    int nb1 = 2, nb2 = 10;
    char lettre = 'a';
    int c = 2+2;
    printf("\npi = %.2f, double = %f, int = %d,\nlettre = %c", pi, flottant, (nb1 + nb2) * c, lettre);
    puts("\nHello");
    puts("Donnez votre age : ");
    int age;
    scanf("%d", &age);
    printf("Vous avez %d an(s) !\n", age);
    int x,y;
    scanf("%d %d", &x, &y);
    printf("x= %d | y=%d\n", x ,y);
    return 0;
}
