//
//  main.cpp
//  GrafoAdjacencia
//
//  Created by Martin Franzner on 09/08/17.
//  Copyright © 2017 Martin Franzner. All rights reserved.
//

#include <iostream>
#include "Grafo.hpp"
#include "No.hpp"


int main(int argc, const char * argv[]) {
    // insert code here...
    
    //achar a adjacencia eh introduzir a linha que deseja, e ver aonde tem valor nas colunas, e esses valores por num vetor V int x = adjacencia(grafo, linha, vetor);
    
    int tamanho;
    cout<<"Digite o tamanho da matriz adjacencia"<<endl;
    cin>>tamanho;
    
    float vet[tamanho];
    
    Grafo *g = new Grafo(tamanho);
    No *v = new No(tamanho);
    int quebra = 1;
    
    //cout<<"Digite a informacao dos nos"<<endl;
    v->setaInformacao();
    v->imprimeInformacao();
    
    int linha,coluna,valor = 0;
    while(quebra == 1){
        g->imprimeAdjacencia();
        
        cout<<"Digite a LINHA que quer inserir adjacencia"<<endl;
        cin>>linha;
        cout<<"Digite a COLUNA que quer inserir adjacencia"<<endl;
        cin>>coluna;
        cout<<"Digite o VALOR da adjacencia"<<endl;
        cin>>valor;
        cout<<"Digite 0 para sair ou 1 para continuar"<<endl;
        cin>>quebra;
        
        g->criaAdjacencia(linha, coluna, valor);
        
    }
    g->imprimeAdjacencia();
    
    cout<<"Digite a LINHA que quer ver o numero de adjacencias"<<endl;
    cin>>linha;
    int x = g->adjacentes(linha, vet);
    cout<<"Numero de adajacencias na linha "<<linha<< " = "<<x<<endl;
    
    
    
    return 0;
}
