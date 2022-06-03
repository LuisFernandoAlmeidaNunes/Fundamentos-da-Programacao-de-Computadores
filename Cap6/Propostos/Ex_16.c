/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_16.c
 * Author: alunos
 *
 * Created on 1 de Junho de 2022, 19:44
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5
/*
 * 
 */
int main(int argc, char** argv) {
    int codigo[TAM], preco[TAM], inf50 = 0, sup100 = 0, preco50a100[TAM], j = 0;
    // coleta de dados dos 5 produtos
    for (int i = 0; i < 5; i++) {
        printf(" Digite o codigo do produto: ");
        scanf(" %d", &codigo[i]);
        printf(" Digite o preço do produto: ");
        scanf(" %d", &preco[i]);
        // casos com os preços
        if (preco[i] < 50) {
            inf50++;
        } else {
            if (preco[1] > 50 && preco[i] < 100) {
                preco50a100[j] = codigo[i];
                j++;
            } else {
                sup100++;
            }
        }
    }
    // porcentagem de produtos com preço maior que 100
    sup100 = (sup100 * 100.0) / TAM;
    // mostrando resultados]
    printf(" Existem %d produtos com preço inferior a 50\n", inf50);
    printf(" Os produtos que tem preço entre 50 e 100 são:");
    // mostrando produtos com preco de 50 a 100
    for (int i = 0; i < j; i++) {
        printf(" %d, ",preco50a100[i]);
    }
    printf("\n Existem %d%% produtos com preço superior a 100", sup100);
    return (EXIT_SUCCESS);
}

