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
    
/**
 * @param float
 * @param float
 * @param bool
 * @param string
 */
Electricidad(float tam, float valor, bool envoltorio, string nombreMercaderia, string item);
    
/**
 * @param string
 */
void set_tipoElectri(string item);
    
const string get_tipoElectri();
protected:
    
 ~Electricidad();
private: 
    string tipo_electri;
};

#endif //_ELECTRICIDAD_H
