/**
 * Project Untitled
 */


#include "Duenyo.h"
#include <Herramientas_Alquiler.h>

/**
 * Duenyo implementation
 */


Duenyo::Duenyo(string nombre, string dni, string art, bool cambioArt, float difArt, float TotCobrar, list <Mercaderia*> MisProductos) :Persona(nombre,dni) {
    this->QueArticulo = art;
    this->CambioArticulo = cambioArt;
    this->DiferenciaArt = difArt;
    this->totalACobrar = TotCobrar;
    this->ListaProductos = MisProductos;


}

void Duenyo::AtenderCliente (Cliente) {
    return;
}


const bool Duenyo:: IdentificarArticuloDeFoto(Cliente Cli) {
    bool tengo = false;
    if(Cli.get_fotoArt() == true){
        tengo = rand()% (0-1)+1;
    }
    return tengo;

    // si el cliente trajo foto: cliente le muestra la foto al duenyo y el mismo dice si tiene el acticulo o no
}

void Duenyo::CobrarYDarVuelto(Cliente) {

    return;
}

bool Duenyo::AlquilerHerramienta(Herramientas_Alquiler, Cliente) {

    }

bool Duenyo::Cambio(Mercaderia, Cliente) {
    return false;
}


float Duenyo::DiferenciaArticulo(Mercaderia, Cliente) {
    return 0.0;
}


void Duenyo::set_queArt(string art) {
    this->QueArticulo = art;
    return;

}


const string Duenyo::get_queArt() {
    return this->QueArticulo;
}


void Duenyo::set_cambArt(bool cambioArt) {
    this->CambioArticulo = cambioArt;
    return;
}


const bool Duenyo::get_cambArt() {
    return this->CambioArticulo;
}


void Duenyo::set_difArt(float difArt) {
    this->DiferenciaArt = difArt;
    return;

 }


const float Duenyo::get_difArt() {
    return this->DiferenciaArt;
}


void Duenyo::set_cobrar(float TotCobrar) {
    this->totalACobrar = TotCobrar;
    return;
}


const float Duenyo::get_cobrar() {
    return this->totalACobrar;
}

void Duenyo:: set_ListaProducts(list <Mercaderia*> MisProductos){
    this->ListaProductos = MisProductos;
    return;
}

const list <Mercaderia*> Duenyo:: get_ListaProducts(){
    return this->ListaProductos;
}

float Duenyo::generarPresupuesto(list<string> ProductsQuiero) {
    float presup = 0.0; // Creo contador del presupuesto y lo inicializo

    list<Mercaderia*>::iterator it;
    list<string>::iterator it2;

    for (it = ListaProductos.begin(); it != ListaProductos.end(); it++) { // Recorro la lista de productos de la ferreteria
        for (it2 = ProductsQuiero.begin(); it2 != ProductsQuiero.end(); it2++) { // Recorro la lista de productos que quiere el cliente
            if ((*it)->get_nombreMerc() == *it2) { // Si son el mismo producto, sumo el precio al total
                presup += (*it)->get_Precio();
            }
        }
    }

    return presup; // Devuelvo presup
}


Duenyo::~Duenyo() {

}
