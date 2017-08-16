//
//  Grafo.cpp
//  GrafoAdjacencia
//
//  Created by Martin Franzner on 09/08/17.
//  Copyright © 2017 Martin Franzner. All rights reserved.
//

#include "Grafo.hpp"
#include "No.hpp"
#include <iostream>
using namespace std;
Grafo::Grafo(int tamanho) {
    this->tamanho = tamanho;
    
    this->matrizAdj = new float*[tamanho];
    for(int i = 0; i < tamanho; ++i) {
        this->matrizAdj[i] = new float[tamanho];
    }
    for(int i = 0; i < tamanho; ++i) {
        for(int j=0;j<tamanho;++j){
            this->matrizAdj[i][j] = 0;
        }
    }
     this->vertice[tamanho];
    for(int i = 0; i < tamanho; ++i) {
        this->vertice[i] = *new No();
    }
    
}
void Grafo::setaInformacao(){
    string nom = "";
    for(int i=0; i<tamanho; ++i){
        cout<<"Digite a informacao do no"<<endl;
        cin>>nom;
        this->vertice[i].addNome(nom);
    }
}
void Grafo::imprimeInformacao(){
    for(int i=0; i<tamanho; ++i){
        cout<<i<<" - "<<this->vertice[i].getNome()<<endl;
    }
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
    for(int j=0; j<this->tamanho; j++){
        if(this->matrizAdj[linha][j] != 0){
            v[count] = j;
            count++;
        }
    }
    return count;
}

