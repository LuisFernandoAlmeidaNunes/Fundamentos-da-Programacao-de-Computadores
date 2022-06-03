/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_19.c
 * Author: Alunos
 *
 * Created on 2 de Junho de 2022, 17:27
 */

#include <stdio.h>
#include <stdlib.h>
#define TAMV 10

/*
 * 
 */
int main(int argc, char** argv) {
    int vet1[TAMV], vet2[TAMV], vet3[TAMV];
    // preenche os dois vetores
    for (int i = 0; i < TAMV; i++) {
        printf(" Digite um valor para o primeiro vetor: ");
        scanf(" %d", &vet1[i]);
        printf(" Digite um valor para o segundo vetor: ");
        scanf(" %d", &vet2[i]);
        vet3[i] = vet1[i] * vet2[i];
    }
        printf(" Terceiro vetor: \n|");
    for (int i = 0; i < TAMV; i++) {
        printf(" %d |", vet3[i]);
    }
    return (EXIT_SUCCESS);
}

