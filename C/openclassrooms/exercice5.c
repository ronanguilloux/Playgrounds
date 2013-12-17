/*
 * exercice4.c
 * Copyright (C) 2013 ronan <ronan@MacBook-Pro-de-Ronan.local>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>

int main(void)
{
    int nombre;
    puts("nombre = ");
    scanf("%d", &nombre);
    unsigned int i = 0;
    unsigned int somme = 0;

    for(i=0;i<nombre;i++)
    {
        somme +=i;
    }
    printf("\nsomme = %d\n", somme);
    return 0;
}

