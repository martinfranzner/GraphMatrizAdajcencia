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
    string nome = "";
    
    
    
public:
    No();
    void addNome(string nm){this->nome = nm;};
    string getNome(){return this->nome;};
};

#endif /* No_hpp */
