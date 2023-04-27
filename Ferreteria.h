/**
 * Project Untitled
 */


#ifndef _FERRETERIA_H
#define _FERRETERIA_H
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
#include <ctime>
using namespace std;

class Ferreteria {
public: 
    
/**
 * @param string
 * @param date
 * @param date
 */

 Ferreteria(string nombre, tm horario, tm dia);
    
/**
 * @param date horarios
 * @param date hoy
 */
bool CartelAbiertoCerrado(tm horarios, tm dia);
    
/**
 * @param date horarios
 */
void set_horario (tm horarios);
    
/**
 * @param date horarios
 */
const tm get_horario();
    
/**
 * @param date hoy
 */
void set_hoy(tm dia);
    
/**
 * @param date hoy
 */
const tm get_hoy();
protected:
    
 ~Ferreteria();
private: 
    const string nombre;
    tm horarios;
    tm hoy;
};

#endif //_FERRETERIA_H
