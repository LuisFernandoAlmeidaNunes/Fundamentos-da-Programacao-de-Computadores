/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_20.c
 * Author: Alunos
 *
 * Created on 2 de Junho de 2022, 17:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int vet[10], positivo[10], pose = 0;
    for(int i = 0; i < 10; i++){
        printf(" Digite um numero inteiro: ");
        scanf(" %d", &vet[i]);
        if( vet[i] > 0 ){
            positivo[i] = vet[i];
            pose++;
        }
    }
        printf(" Os numeros positivos no vetor são: \n|");
    for( int i = 0; i < pose; i++ ){
        printf(" %d |", positivo[i]);
    }
    return (EXIT_SUCCESS);
}

