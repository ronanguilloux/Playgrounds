/*
 * exercice4.c
 * Copyright (C) 2013 ronan <ronan@MacBook-Pro-de-Ronan.local>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>

int main(void)
{
    int nombre, i = 2;
    puts("nombre = "); scanf("%d", &nombre);
    while ((i < nombre) && (nombre % i != 0))
    {
        ++i;
    }
    if (i == nombre)
    {

        puts("nombre est premier");
    }
    else
    {

        puts("nombre n'est pas premier");
    }
    return 0;
}

