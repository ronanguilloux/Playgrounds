/*
 * exercice1.c
 * Copyright (C) 2013 ronan <ronan@MacBook-Pro-de-Ronan.local>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>

int main(void)
{

    printf("\nIndiquez votre score : ");
    int score;
    scanf("%d", &score);
    printf("Vous avez marqué %d point%c\n", score, (1<score) ? 's' : ' ');

    return 0;
}
