/**
 * Project Untitled
 */


#ifndef _BAZAR_H
#define _BAZAR_H

#include "Mercaderia.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Bazar: public Mercaderia {
public:

    Bazar(float tam, float valor, bool envoltorio,int cant, string nombreBazar);


    void set_nombreMerc(string &nombreBazar);

    const string get_nombreMerc();

    
    ~Bazar();

private: 
    string tipo_bazar;
};

#endif //_BAZAR_H
