/**
 * Project Untitled
 */


#ifndef _PLOMERO_H
#define _PLOMERO_H

#include "Persona.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Plomero: public Persona {
public: 
    
/**
 * @param string
 * @param string
 * @param bool
 */
Plomero( string,  string,  bool);
    
const bool get_estadoProblema();
    
/**
 * @param bool status
 */
void set_estadoProblema( bool status);
    
 ~Plomero();
private: 
    bool estadoProblema;
};

#endif //_PLOMERO_H
