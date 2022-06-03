/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_21.c
 * Author: alunos
 *
 * Created on 2 de Junho de 2022, 18:39
 */

#include <stdio.h>
#include <stdlib.h>
#define TAMV 3
/*
 * 
 */
int main(int argc, char** argv) {
    int vet1[TAMV]={ -5, -5, -5, -5, -5, -5, -5, -5, -5, -5}, vet2[TAMV];
    for( int i = 0; i < TAMV; i++){
        printf(" Digite um numero inteiro: ");
        scanf(" %d", &vet1[i]);
    }
    for( int i = 0; i < TAMV; i++){
        if( vet1[i] == -5 ){
            vet2[i] = 1;
        } else {
            vet2[i] = vet1[i];
        }
    }
        printf(" O vetor 1 é: \n|");
    for( int i = 0; i < TAMV; i++){
        printf(" %d |", vet1[i]);
    }
        printf(" O vetor 2 é: \n|");
    for( int i = 0; i < TAMV; i++){
        printf(" %d |", vet2[i]);
    }
    return (EXIT_SUCCESS);
}

