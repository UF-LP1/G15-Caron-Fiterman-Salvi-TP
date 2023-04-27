/**
 * Project Untitled
 */


#ifndef _DUENYO_H
#define _DUENYO_H

#include "Persona.h"
#include "Cliente.h"
#include <Herramientas_Alquiler.h>
#include <Mercaderia.h>
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Duenyo: public Persona {
public: 
    
/**
 * @param string
 * @param string
 * @param string
 * @param bool
 * @param bool
 * @param float
 * @param float
 */
 Duenyo(string nombre, string dni, string art, bool cambioArt, float difArt, float TotCobrar, list <Mercaderia*> MisProductos);
    
/**
 * @param Cliente
 */
void AtenderCliente(Cliente);
    
/**
 * @param Cliente
 * @param Mercaderia
 */
string const IdentificarArticuloDeFoto( Cliente, Mercaderia);
    
/**
 * @param Empleado
 * @param Cliente
 */
void CobrarYDarVuelto (Cliente);
    
/**
 * @param Herramientas_Alquiler
 * @param Cliente
 */
bool AlquilerHerramienta (Herramientas_Alquiler martillo,  Cliente pepe);
    
/**
 * @param Mercaderia
 * @param Cliente
 */
bool Cambio(Mercaderia, Cliente);
    
/**
 * @param Mercaderia
 * @param Cliente
 */
float DiferenciaArticulo( Mercaderia,  Cliente);
    
/**
 * @param Mercaderia
 * @param Cliente
 */
float CalcularTotal( Mercaderia,  Cliente);
    
/**
 * @param string
 */
void set_queArt(string);
    
const string get_queArt();
    
/**
 * @param bool
 */
void set_cambArt( bool);
    
const bool get_cambArt();
    
/**
 * @param float
 */
void set_difArt( float);
    
const float get_difArt();
    
/**
 * @param float
 */
void set_cobrar( float);
    
const float get_cobrar();


void set_ListaProducts(list <Mercaderia*> MisProductos);

const list <Mercaderia*> get_ListaProducts();

float generarPresupuesto(list<string> ProductsQuiero);
    
 ~Duenyo();
private:
    string QueArticulo;
    bool CambioArticulo;
    float DiferenciaArt;
    float totalACobrar;
    list <Mercaderia*> *ListaProductos;

};

#endif //_DUENYO_H
