/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_10.c
 * Author: user
 *
 * Created on 1 de Junho de 2022, 08:45
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int vet[10], vet_par[10], vet_impar[10], j = 0, k = 0, par = 0, impar = 0;
    for(int i = 0; i < 10; i++){
        printf(" Digite um numero inteiro: ");
        scanf(" %d", &vet[i]);
        // caso de par
        if( vet[i] % 2 == 0 ) {
            vet_par[par] = vet[i];
            par++;
        } else {
            vet_impar[impar] = vet[i];
            impar++;
        }
    }
        printf(" O vetor de numeros pares é:");
    for( int i = 0; i < par; i++){
        printf(" %d |", vet_par[i]);
    }
        printf(" O vetor de numeros impares é:");
    for( int i = 0; i < impar; i++){
        printf(" %d |", vet_impar[i]);
    }
    return (EXIT_SUCCESS);
}

