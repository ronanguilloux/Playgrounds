/*
 * exercice1.c
 * Copyright (C) 2013 ronan <ronan@MacBook-Pro-de-Ronan.local>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>

int main(void)
{

    printf("\nBonjour !");
    int premier, deuxieme;
    printf("\n\nVeuillez saisir le premier nombre : ");
    scanf("%d", &premier);
    printf("Veuillez saisir le deuxieme nombre : ");
    scanf("%d", &deuxieme);
    puts("Calculs :i\n");
    printf("\t%d + %d = %d", premier, deuxieme, (premier + deuxieme));
    printf("\n\t%d - %d = %d", premier, deuxieme, (premier - deuxieme));
    printf("\n\t%d * %d = %d", premier, deuxieme, (premier * deuxieme));
    printf("\n\t%d / %d = %d", premier, deuxieme, (premier / deuxieme));
    printf("\n\nAu revoir !\n");
    return 0;
}
