/**
 * Project Untitled
 */


#include "Duenyo.h"
#include <Herramientas_Alquiler.h>

/**
 * Duenyo implementation
 */


/**
 * @param string
 * @param string
 * @param string
 * @param bool
 * @param bool
 * @param float
 * @param float
 */

Duenyo::Duenyo(string nombre, string dni, string art, bool cambioArt, float difArt, float TotCobrar, list <Mercaderia> MisProductos) :Persona(nombre,dni) {
    this->QueArticulo = art;
    this->CambioArticulo = cambioArt;
    this->DiferenciaArt = difArt;
    this->totalACobrar = TotCobrar;
    this->ListaProductos = &MisProductos;


}

/**
 * @param Cliente
 * @return void
 */
void Duenyo::AtenderCliente (Cliente) {
    return;
}

/**
 * @param Cliente
 * @param Mercaderia
 * @return string
 */
const string Duenyo:: IdentificarArticuloDeFoto(Cliente, Mercaderia) {
    return "";
}

/**
 * @param Empleado
 * @param Cliente
 * @return void
 */
void Duenyo::CobrarYDarVuelto(Cliente) {
    return;
}

/**
 * @param Herramientas_Alquiler
 * @param Cliente
 * @return bool
 */
bool Duenyo::AlquilerHerramienta( Herramientas_Alquiler, Cliente) {
    return false;
}

/**
 * @param Mercaderia
 * @param Cliente
 * @return bool
 */
bool Duenyo::Cambio(Mercaderia, Cliente) {
    return false;
}

/**
 * @param Mercaderia
 * @param Cliente
 * @return float
 */
float Duenyo::DiferenciaArticulo(Mercaderia, Cliente) {
    return 0.0;
}

/**
 * @param Mercaderia
 * @param Cliente
 * @return float
 */
float Duenyo::CalcularTotal(Mercaderia, Cliente) {
    return 0.0;
}

/**
 * @param string
 * @return void
 */
void Duenyo::set_queArt(string art) {
    this->QueArticulo = art;
    return;

}

/**
 * @return const string
 */
const string Duenyo::get_queArt() {
    return this->QueArticulo;
}

/**
 * @param bool
 * @return void
 */
void Duenyo::set_cambArt(bool cambioArt) {
    this->CambioArticulo = cambioArt;
    return;
}

/**
 * @return const bool
 */
const bool Duenyo::get_cambArt() {
    return this->CambioArticulo;
}

/**
 * @param float
 * @return void
 */
void Duenyo::set_difArt(float difArt) {
    this->DiferenciaArt = difArt;
    return;

 }

/**
 * @return const float
 */
const float Duenyo::get_difArt() {
    return this->DiferenciaArt;
}

/**
 * @param float
 * @return void
 */
void Duenyo::set_cobrar(float TotCobrar) {
    this->totalACobrar = TotCobrar;
    return;
}

/**
 * @return const float
 */
const float Duenyo::get_cobrar() {
    return this->totalACobrar;
}

float Duenyo::generarPresupuesto(list<string> ProductsQuiero){
//recorro la lista y voy sumando los valores

    //for()
    //set y get
   //acceder con *
   //ir sumando

    float presup = 0.0; //creo contador del presupuesto y lo inicializo

    list<Mercaderia>::iterator it;
    list <string>:: iterator it2;

    for(it = ListaProductos->begin(); it !=ListaProductos->end(); it++){ //recorro la lista de productos de la ferreteria
        for(it2 = ProductsQuiero.begin(); it2 !=ProductsQuiero.end(); it2++){ //recorro la lista de productos que quiere el cliente
            if(it->get_nombreMerc() == *it2){
               presup = presup + it->get_Precio();
            }
        }

   }


    return 0.0; //devuelvo presup
}


Duenyo::~Duenyo() {

}
