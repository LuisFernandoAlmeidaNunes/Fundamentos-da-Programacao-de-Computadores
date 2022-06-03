/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_23.c
 * Author: alunos
 *
 * Created on 2 de Junho de 2022, 19:07
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 2
/*
 * 
 */
int main(int argc, char** argv) {
    int a[TAM], b[TAM], resultado;
    for(int i = 0; i < TAM; i++){
        printf(" Digite um valor para o vetor A: ");
        scanf(" %d", &a[i]);
        printf(" Digite um valor para o vetor B: ");
        scanf(" %d", &b[i]);
    }
    
        printf(" Realizando Subtrações:\n");
    for( int i = 0, j = (TAM - 1); i < TAM; i++, j--){
        resultado = a[i] - b[j];
        printf(" %d\n",resultado);
    }
    
    return (EXIT_SUCCESS);
}

