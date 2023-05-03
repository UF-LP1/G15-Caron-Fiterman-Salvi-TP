/**
 * Project Untitled
 */


#ifndef _LLAVES_H
#define _LLAVES_H

#include "Mercaderia.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Llaves: public Mercaderia {
public: 
    
/**
 * @param float
 * @param float
 * @param bool
 * @param bool
 * @param sting
 */

    Llaves(float tam, float valor, bool envoltorio, string nombreMercaderia, bool permiso, string item);
    
const bool get_TengoPermisoLlave();
    
const string get_tipoLlave();
    
/**
 * @param string
 */
void set_tipoLlave( string item);
    
 ~Llaves();
private:
    const bool TengoPermisoLlave;
    string tipo_llave;
};

#endif //_LLAVES_H
