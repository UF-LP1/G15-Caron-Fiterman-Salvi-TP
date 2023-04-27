/**
 * Project Untitled
 */


#ifndef _BANYO_H
#define _BANYO_H

#include "Mercaderia.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Banyo: public Mercaderia {
public: 
    
/**
 * @param float
 * @param float
 * @param bool
 * @param string
 */
Banyo(float tam, float valor, bool envoltorio, string nombreMercaderia, string item);
    
/**
 * @param string
 */
void set_tipoBanyo(string item);
    
const string get_tipoBanyo();
protected:
    
 ~Banyo();
private: 
    string tipo_banyo;
};

#endif //_BANYO_H
