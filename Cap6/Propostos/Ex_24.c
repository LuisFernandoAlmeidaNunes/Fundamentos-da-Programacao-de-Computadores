/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_24.c
 * Author: alunos
 *
 * Created on 2 de Junho de 2022, 19:18
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 15
/*
 * 
 */
int main(int argc, char** argv) {
    int a[TAM], p[TAM], prim = 0, div = 0, k = 0;
    for( int i = 0; i < TAM ; i++){
        printf(" Digite um valor para o vetor: ");
        scanf(" %d",&a[i]);
        for( int j = 1; j < a[i]; j++){
            if( (a[i] % j) == 0 ){
                div++;
            }
            if( div == 2 ){
                p[k] = a[i];
                k++;
                prim++;
            }
            div = 0;
        }
    }
    printf(" O vetor resultante é: \n|");
    for( int i = 0; i < prim; i++){
        printf(" %d |", p[i]);
    }
    return (EXIT_SUCCESS);
}

