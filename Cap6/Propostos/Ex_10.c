/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_10.c
 * Author: Alunos
 *
 * Created on 31 de Maio de 2022, 14:51
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int vet_M[10], vet_m[5], soma = 0, pares[10], j = 0, impares[10], k = 0, div = 0, vet_filho_1[10], vet_filho_2[10];
    //preenchendo o primeiro vetor
    for (int i = 0; i < 10; i++) {
        printf(" Digite um numero para o primeiro vetor: ");
        scanf(" %d", &vet_M[i]);
        //armazenando numeros pares
        if (vet_M[i] % 2 == 0) {
            pares[j] = vet_M[i];
        } else {
            //armazenando numeros impares
            impares[k] = vet_M[i];
            k++;
        }
    }
    //preenchendo o segundo vetor
    for (int i = 0; i < 5; i++) {
        printf(" Digite um numero para o primeiro vetor: ");
        scanf(" %d", &vet_m[i]);
        soma = soma + vet_m[i];
    }
    //preeenchendo o primeiro filho
    printf("primeiro vetor resultante:\n");
    for (int i = 0; i < j; i++) {
        vet_filho_1[i] = pares[i] + soma;
        printf(" %d |", vet_filho_1[i]);
    }
    //preeenchendo o primeiro filho
    printf("segundo vetor resultante:\n");
    for (int i = 0; i < k; i++) {
        for (int l = 1; l < impares[i]; l++) {
            if (impares % l == 0) {
                div++;
            }
        }
        vet_filho_2[i] = div - 1;
        printf(" %d |", vet_filho_2[i]);
    }
    return (EXIT_SUCCESS);
}

