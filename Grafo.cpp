//
//  Grafo.cpp
//  GrafoAdjacencia
//
//  Created by Martin Franzner on 09/08/17.
//  Copyright © 2017 Martin Franzner. All rights reserved.
//

#include "Grafo.hpp"
#include <iostream>
using namespace std;
Grafo::Grafo(int tamanho) {
    this->tamanho = tamanho;
    
    this->matrizAdj = new float*[tamanho];
    for(int i = 0; i < tamanho; ++i) {
        this->matrizAdj[i] = new float[tamanho];
    }
    
    
    
    
    /*
    int **ary = new int*[sizeY];
    for(int i = 0; i < sizeY; ++i) {
        ary[i] = new int[sizeX];
    }
    
    for(int i = 0; i < sizeY; ++i) {
        delete [] ary[i];
    }
    delete [] ary;
     */
    
}
void Grafo::criaAdjacencia(int lin, int col, float peso){
    this->matrizAdj[lin][col] = peso;
}
void Grafo::removeAdjacencia(int lin, int col){
    this->matrizAdj[lin][col] = NULL;
}

void Grafo::imprimeAdjacencia(){
    cout<<"-----------------------------------"<<endl;
    for(int i = 0; i < tamanho; ++i) {
        for(int j=0;j<tamanho;++j){
            cout<<this->matrizAdj[i][j] << "    ";
        }
        cout<<"\n";
    }
}

int Grafo::adjacentes(int linha, float v[]){
    int count = 0;
    for(int j=0; j<this->tamanho; ++j){
        if(this->matrizAdj[linha][j] != 0){
            v[j] = this->matrizAdj[linha][j];
            count++;
        }
    }
    return count;
}

