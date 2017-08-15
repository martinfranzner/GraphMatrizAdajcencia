//
//  Grafo.hpp
//  GrafoAdjacencia
//
//  Created by Martin Franzner on 09/08/17.
//  Copyright © 2017 Martin Franzner. All rights reserved.
//

#ifndef Grafo_hpp
#define Grafo_hpp
#include "No.hpp"
#include <stdio.h>
class Grafo {
private:
    int tamanho;
    float** matrizAdj;
    
public:
    Grafo(int tamanho);//ja cria a matriz
    void criaAdjacencia(int lin, int col, float peso);//bota valor na matriz
    void removeAdjacencia(int lin, int col);// bota valor como NULL
    void imprimeAdjacencia();//imprime a matriz
    int adjacentes(int linha, float v[]); //mostra o numero de adjacencias em cada linha
};


#endif /* Grafo_hpp */
