// Escreva uma função que receba um número inteiro n e um número real x. A
//função deve retornar o número real correspondente ao n-ésimo termo da sequência abaixo.
//Não é necessário escrever o programa principal que chama a função.
 
#include <stdio.h>

float MostraTermo(int n ,int x)
{
    float resultado = x / 2 * n;
    return resultado;
}