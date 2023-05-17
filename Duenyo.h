/**
 * Project Untitled
 */


#ifndef _DUENYO_H
#define _DUENYO_H

#include "Persona.h"
#include "Cliente.h"
#include "Herramientas_Alquiler.h"
#include "Ferreteria.h"
#include "Mercaderia.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
#include <ctime>
#include <cstdlib>
using namespace std;

class Cliente; // Declaración anticipada de la clase Cliente
class Duenyo: public Persona {
public:
    

    Duenyo(string nombre, string dni, string art, bool cambioArt, float difArt, float dinero, list <Mercaderia*> MisProductos);
    

    void AtenderCliente(Cliente Client, Herramientas_Alquiler HerrAlquilo);

    bool const IdentificarArticuloDeFoto(Cliente Cli);

    bool CobrarYDarVuelto (Cliente Cli, Herramientas_Alquiler HerrAlq);

    float AlquilerHerramienta (Herramientas_Alquiler HerrAlq, Cliente Cli);


    float DiferenciaArticulo(Cliente Cli);


    void set_queArt(string art);
    const string get_queArt();


    void set_cambArt( bool);
    const bool get_cambArt();


    void set_difArt(float);
    const float get_difArt();


    void set_dinero(float);
    const float get_dinero();


    void set_ListaProducts(list <Mercaderia*> MisProductos);
    const list <Mercaderia*> get_ListaProducts();


    float generarPresupuesto(Cliente Cli);

    static void imprimirStock(list <Mercaderia*> MisProductos);

    friend class Cliente;
    friend bool Ferreteria::CartelAbiertoCerrado();




    ~Duenyo();
private:
    string QueArticulo;
    bool CambioArticulo;
    float DiferenciaArt;
    float Dinero;
    list <Mercaderia*> ListaProductos;

};


#endif //_DUENYO_H
