/**
 * Project Untitled
 */


#ifndef _RUBRO_H
#define _RUBRO_H

#include "Mercaderia.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Rubro: public Mercaderia {
public: 
    
/**
 * @param float
 * @param float
 * @param bool
 * @param string
 */
Rubro(float tam, float valor, bool envoltorio, string nombreMercaderia, int cant, string item);
    
/**
 * @param string
 */
void set_tipoRubro( string item);
    
const string get_tipoRubro();
    
~Rubro();
private: 
    string tipo_rubro;
};

#endif //_RUBRO_H
