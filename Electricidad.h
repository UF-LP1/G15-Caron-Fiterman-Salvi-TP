/**
 * Project Untitled
 */


#ifndef _ELECTRICIDAD_H
#define _ELECTRICIDAD_H

#include "Mercaderia.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Electricidad: public Mercaderia {
public:
    
Electricidad(float tam, float valor, bool envoltorio,int cant, string nombreElectricidad);
    
    void set_nombreMerc(string &nombreElectricidad);

    const string get_nombreMerc();


    
 ~Electricidad();


};

#endif //_ELECTRICIDAD_H
