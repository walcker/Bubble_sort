#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 9

using namespace std;

void imprimeVetor(int vetor[]){
    int i;
    cout << "\n";
    for(i = 0; i < TAM; i++){
        cout << " |" << vetor[i] << "| ";
    }
}

void bubble_sort(int vetor[TAM]){

    //Auxiliares
    int x, y, aux;

    //Valor da esquerda sendo analisado
    for(x = 0; x < TAM; x++){

        //Valor da direita sendo analisado
        for(y = x + 1; y < TAM; y++){

            imprimeVetor(vetor);

            //Confere se precisa fazer a troca
            if(vetor[x] > vetor[y]){
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }

        }

    }

}

int main(){

    int vetor[TAM] = {9, 7, 1, 3, 8, 6, 4, 5, 2};

    bubble_sort(vetor);

    imprimeVetor(vetor);

    return 0;
}
