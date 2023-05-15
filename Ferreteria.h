/**
 * Project Untitled
 */


#ifndef _FERRETERIA_H
#define _FERRETERIA_H
#include <iostream>
#include <string>
#include <ctime>
#include <QDateTime>
using namespace std;

class Ferreteria {
public:
    
    Ferreteria(string nombre);

    static void CartelAbiertoCerrado();

    ~Ferreteria();

private: 
    const string nombre;

};

#endif //_FERRETERIA_H
