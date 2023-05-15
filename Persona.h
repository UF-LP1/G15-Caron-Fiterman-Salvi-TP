/**
 * Project Untitled
 */


#ifndef _PERSONA_H
#define _PERSONA_H
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Persona {
public:

    Persona(string nombre, string dni);

    const string get_DNI();


    const string get_nombre();
    ~Persona();

protected: 
    const string Nombre;
    const string DNI;

};

#endif //_PERSONA_H
