/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_11.c
 * Author: user
 *
 * Created on 1 de Junho de 2022, 08:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int vet[5], soma = 0;
    for( int i = 0; i < 5; i++){
        printf(" Digite um valor: ");
        scanf(" %d", &vet[i]);
        soma += vet[i];
    }
        printf(" Os numeros digitados são: ");
        printf("%d + %d + %d + %d + %d = %d", vet[0], vet[1], vet[2], vet[3], vet[4], soma);
    return (EXIT_SUCCESS);
}

