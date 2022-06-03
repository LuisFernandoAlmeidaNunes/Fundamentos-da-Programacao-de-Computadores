/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_25.c
 * Author: alunos
 *
 * Created on 2 de Junho de 2022, 19:39
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 15

/*
 * 
 */
int main(int argc, char** argv) {
    int a[TAM], maior = 0;
    float b[TAM];
    for (int i = 0; i < TAM; i++) {
        printf(" Digite um valor para o vetor: ");
        scanf(" %d", &a[i]);
        if (maior < a[i]) {
            maior = a[i];
        }
        b[i] = a[i] / maior;
    }
    printf(" O vetor resultante é:\n|");
    for (int i = 0; i < TAM; i++) {
        printf(" %f |", b[i]);
    }
    return (EXIT_SUCCESS);
}

