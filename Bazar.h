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
    
/**
 * @param float
 * @param float
 * @param bool
 * @param string
 */
 Bazar(float tam, float valor, bool envoltorio, string nombreMercaderia, int cant, string item);
    
/**
 * @param string
 */
void set_tipoBazar(string item);
    
const string get_tipoBazar();

    
 ~Bazar();

private: 
    string tipo_bazar;
};

#endif //_BAZAR_H
