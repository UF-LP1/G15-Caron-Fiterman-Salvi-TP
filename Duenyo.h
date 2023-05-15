/**
 * Project Untitled
 */


#ifndef _DUENYO_H
#define _DUENYO_H

#include "Persona.h"
#include "Cliente.h"
#include "Herramientas_Alquiler.h"
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

class Duenyo: public Persona {
public:
    

    Duenyo(string nombre, string dni, string art, bool cambioArt, float difArt, float TotCobrar, list <Mercaderia> MisProductos);
    

    void AtenderCliente(Cliente);

    bool const IdentificarArticuloDeFoto(Cliente);

    void CobrarYDarVuelto (Cliente);

    bool AlquilerHerramienta (Herramientas_Alquiler martillo, Cliente pepe);

    bool Cambio(Mercaderia, Cliente);

    float DiferenciaArticulo(Mercaderia, Cliente);


    void set_queArt(string);

    const string get_queArt();


    void set_cambArt( bool);
    const bool get_cambArt();


    void set_difArt(float);
    const float get_difArt();


    void set_cobrar(float);
    const float get_cobrar();


    void set_ListaProducts(list <Mercaderia> MisProductos);
    const list <Mercaderia> get_ListaProducts();

    float generarPresupuesto(list<string> ProductsQuiero);

    friend class Cliente;



    ~Duenyo();
private:
    string QueArticulo;
    bool CambioArticulo;
    float DiferenciaArt;
    float totalACobrar;
    list <Mercaderia> ListaProductos;

};

#endif //_DUENYO_H
