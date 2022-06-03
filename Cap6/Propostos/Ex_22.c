/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_22.c
 * Author: alunos
 *
 * Created on 2 de Junho de 2022, 18:57
 */

#include <stdio.h>
#include <stdlib.h>
#define TAMV 10
/*
 * 
 */
int main(int argc, char** argv) {
    int a[TAMV], b[TAMV], corrigido = 0;
    for(int i = 0; i < TAMV; i++){
        printf(" Digite um valor para o vetor A: ");
        scanf(" %d", &a[i]);
    }
    for(int i = 0; i < TAMV; i++){
        //excluindo 0 e nulos
        if( a[i] != 0 && a[i] > 0){
            b[i] = a[i];
            corrigido++;
        }
    }
    printf(" O vetor a é: \n|");
    for( int i = 0; i < TAMV; i++){
        printf(" %d", a[i]);
    }
    printf(" O vetor b é: \n|");
    for( int i = 0; i < corrigido; i++){
        printf(" %d", b[i]);
    }
    return (EXIT_SUCCESS);
}

