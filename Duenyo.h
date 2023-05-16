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
    

    Duenyo(string nombre, string dni, string art, bool cambioArt, float difArt, float TotCobrar, list <Mercaderia*> MisProductos);
    

    void AtenderCliente(Cliente Cli);

    bool const IdentificarArticuloDeFoto(Cliente Cli);

    void CobrarYDarVuelto (Cliente Cli);

    float AlquilerHerramienta (Herramientas_Alquiler HerrAlq);

    bool Cambio(Mercaderia merc, Cliente Cli);

    float DiferenciaArticulo(Mercaderia merc, Cliente Cli);


    void set_queArt(string art);

    const string get_queArt();


    void set_cambArt( bool);
    const bool get_cambArt();


    void set_difArt(float);
    const float get_difArt();


    void set_cobrar(float);
    const float get_cobrar();


    void set_ListaProducts(list <Mercaderia*> MisProductos);
    const list <Mercaderia*> get_ListaProducts();

    float generarPresupuesto(Cliente Cli);

    friend class Cliente;
    friend bool Ferreteria::CartelAbiertoCerrado();




    ~Duenyo();
private:
    string QueArticulo;
    bool CambioArticulo;
    float DiferenciaArt;
    float totalACobrar;
    list <Mercaderia*> ListaProductos;

};

#endif //_DUENYO_H
