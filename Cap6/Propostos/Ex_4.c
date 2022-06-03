/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_4.c
 * Author: user
 *
 * Created on 29 de Maio de 2022, 17:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor = 0, vetor[15], j = 0, vet_salvo[15], k = 0, acerto = 0;
    for (int i = 0; i < 15; i++) {
        printf(" Digite um valor: ");
        scanf(" %d", &valor);
        vetor[j] = valor;
        if (valor == 30) {
            vet_salvo[k] = i;
            k++;
            acerto++;
        }
        j++;
    }
    printf(" Os vetores com valores iguais a 30 são: ");
    for (int i = 0; i < acerto; i++) {
        printf(" %d,", vet_salvo[i]);
    }
    return (EXIT_SUCCESS);
}

