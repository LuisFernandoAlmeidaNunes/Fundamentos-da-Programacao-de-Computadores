/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_2.c
 * Author: alunos
 *
 * Created on 27 de Maio de 2022, 09:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor = 0, mult_2[7], j = 0, mult_3[7], k = 0, mult_23[7], l = 0;
    //pedindo 7 numeros
    for (int i = 0; i < 7; i++) {
        printf(" Digite um numero: ");
        scanf(" %d", &valor);
        // é um multiplo de 2
        if (valor % 2 == 0) {
            mult_2[j] = valor;
            j++;
        }
        // caso de divisavel por 3
        if (valor % 3 == 0) {
            mult_3[k] = valor;
            k++;
        }
        //divisivel por 2 e 3
        if( valor % 2 == 0 ){
            mult_23[l];
            l++;
        }
    }
    // mostrando todos o multiplos de 2
    printf("\n São multplos de 2:");
    for ( int i = 0; i < j ; i++ ){
        printf(" %d,",mult_2[i]);
    }
    // mostrando todos o multiplos de 3
    printf("\n São multplos de 3:");
    for ( int i = 0; i < k ; i++ ){
        printf(" %d,",mult_3[i]);
    }
    // mostrando todos o multiplos de 2 e 3
    printf("\n São multplos de 2 e 3:");
    for ( int i = 0; i < l ; i++ ){
        printf(" %d,",mult_23[i]);
    }
    return (EXIT_SUCCESS);
}

