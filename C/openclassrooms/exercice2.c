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
    if(score < 2000) {
        printf("\n C'est la catastrophe");
    } else if( score >= 2000 && score < 5000) {
        printf("\n Tu peux faire mieux");
    } else if( score >= 5000 && score < 9000) {
        printf("\n Tu es sur la bonne voie");
    } else {
        printf("\n Tu es le meilleur");
    }

    return 0;
}
