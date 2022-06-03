/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_7.c
 * Author: user
 *
 * Created on 31 de Maio de 2022, 08:00
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num[10], j = 0, soma = 0, negativo = 0;
    for ( int i = 0; i < 10; i++){
        printf(" Digite um numero: ");
        scanf(" %d", &num[j]);
        // é positivo
        if( num[j] > 0){
            soma = soma + num[j];
        } else {
            //é negativo
            negativo++;
        }
        j++;
    }
    printf(" A soma dos numeros positivos é %d\n a quantidade de numeros negativos é %d", soma, negativo);
    return (EXIT_SUCCESS);
}

