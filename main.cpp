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
    //No *vet = new No(tamanho);
    
    Grafo *g = new Grafo(tamanho);
    
    //No *v = new No(tamanho);
    //int quebra = 1;
    
    //cout<<"Digite a informacao dos nos"<<endl;
    g->setaInformacao();
    g->imprimeInformacao();
    
    //int linha,coluna,valor = 0;
    /*while(quebra == 1){
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
     */
    g->imprimeAdjacencia();
    
    g->criaAdjacencia(0, 1, 22);
    g->criaAdjacencia(1, 2, 4);
    g->criaAdjacencia(0, 1, 12);
    g->criaAdjacencia(2, 3, 13);
    g->criaAdjacencia(2, 4, 17);
    g->criaAdjacencia(4, 3, 12);
    g->criaAdjacencia(2, 1, 8);
    
    g->imprimeAdjacencia();
    
    //cout<<"Digite a LINHA que quer ver o numero de adjacencias"<<endl;
    //cin>>linha;
    int x = g->adjacentes(2, vet);
    cout<<"Numero de adajacencias na linha "<< " = "<<x<<endl;
    
    cout<<"vetor = [";
    for(int i=0; i < x; ++i){
        cout<<vet[i]<< ", ";
    }
    cout<<"]"<<endl;
    g->removeAdjacencia(2, 1);
    g->imprimeAdjacencia();
    
    x = g->adjacentes(2, vet);
    cout<<"Numero de adajacencias na linha "<< " = "<<x<<endl;
    
    cout<<"vetor = [";
    for(int i=0; i < x; ++i){
        cout<<vet[i]<< ", ";
    }
    cout<<"]"<<endl;

    
    
    
    return 0;
}
