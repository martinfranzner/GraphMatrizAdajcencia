//
//  No.cpp
//  GrafoAdjacencia
//
//  Created by Martin Franzner on 09/08/17.
//  Copyright © 2017 Martin Franzner. All rights reserved.
//

#include "No.hpp"
#include <iostream>
using namespace std;
No::No(int tamanho){
    this->tam = tamanho;
    this->nome = new string[tam];

}

void No::setaInformacao(){
    for(int i=0; i<this->tam; ++i){
        cout<<"Digite a informacao do no"<<endl;
        cin>>this->nome[i];
    }
}
void No::imprimeInformacao(){
    for(int i=0; i<this->tam; ++i){
        cout<<i<<" - "<<this->nome[i]<<endl;
    }
}

