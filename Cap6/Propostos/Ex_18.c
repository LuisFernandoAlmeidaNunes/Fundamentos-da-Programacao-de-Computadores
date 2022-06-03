/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_18.c
 * Author: Alunos
 *
 * Created on 2 de Junho de 2022, 17:16
 */

#include <stdio.h>
#include <stdlib.h>
#define TAMV 10
/*
 * 
 */
int main(int argc, char** argv) {
    int vet[TAMV], maior, maiorI, menor, menorI;
    // pega 15 numeros digitados e os compara com o maior
    for(int i = 0; i < 5; i++ ){
        printf(" Digite um valor: ");
        scanf(" %d", &vet[i]);
        if( i == 0 ){
            maior = vet[i];
            maiorI = i;
            menor = vet[i];
            menorI = i;
        } else {
            if( menor > vet[i] ){
                menor = vet[i];
                menorI = i;
            }
            if( maior < vet[i] ){
                maior = vet[i];
                maiorI = i;
            }
        }
    }
    printf(" O maior numero no vetor é %d e sua posição no vetor é %d\n", maior, maiorI);
    printf(" O menor numero no vetor é %d e sua posição no vetor é %d", menor, menorI);
    return (EXIT_SUCCESS);
}

