//
//  No.hpp
//  GrafoAdjacencia
//
//  Created by Martin Franzner on 09/08/17.
//  Copyright © 2017 Martin Franzner. All rights reserved.
//

#ifndef No_hpp
#define No_hpp

#include <stdio.h>
#include <string>
using namespace std;
class No {
private:
    string* nome;
    int tam;
    
public:
    No(int tamanho);
    void setaInformacao();
    void imprimeInformacao();
};

#endif /* No_hpp */
