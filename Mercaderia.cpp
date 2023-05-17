/**
 * Project Untitled
 */


#include "Mercaderia.h"

/**
 * Mercaderia implementation
 */


/**
 * @param float
 * @param float
 * @param bool
 */
Mercaderia::Mercaderia(float tam, float valor, bool envoltorio, int cant) {
    this->Tamanyo = tam;
    this->Precio = valor;
    this->EnvoltorioArticulo = envoltorio;
    this->nombreMercaderia = "0"; //mercaderia es una clase astracta
    this->stock = cant;
}

/**
 * @param float tamanyo
 * @return void
 */
void Mercaderia::set_Tamanyo(float tam) {
    this->Tamanyo = tam;
    return;
}

/**
 * @param float tamanyo
 * @return const float
 */
const float Mercaderia::get_Tamanyo() {
    return this->Tamanyo;
}

/**
 * @param float precio
 * @return void
 */
void Mercaderia::set_Precio(float valor) {
    this->Precio = valor;
    return;
}

/**
 * @param float precio
 * @return const float
 */
const float Mercaderia::get_Precio() {
    return this->Precio;
}

/**
 * @param bool
 * @return void
 */
void Mercaderia::set_Envoltorio(bool envoltorio) {
    this->EnvoltorioArticulo = envoltorio;
    return;
}

/**
 * @return const bool
 */
const bool Mercaderia::get_Envoltorio() {
    return this->EnvoltorioArticulo;
}

void Mercaderia::set_nombreMerc(){
    this->nombreMercaderia = "0";
    return;
}

const string Mercaderia::get_nombreMerc(){
    return this->nombreMercaderia;
}


void Mercaderia::set_Stock(int cant) {
   this->stock = cant;
   return;
}

const int Mercaderia::get_Stock() {
   return this->stock;
}

ostream& operator<<(ostream& os, const Mercaderia& mercaderia) {
   os << "Nombre: " << mercaderia.nombreMercaderia << std::endl;
   os << "Tamaño: " << mercaderia.Tamanyo << std::endl;
   os << "Precio: " << mercaderia.Precio << std::endl;
   os << "Envoltorio: " << (mercaderia.EnvoltorioArticulo ? "Sí" : "No") << std::endl;
   os << "Stock: " << mercaderia.stock << std::endl;
   return os;
}

Mercaderia::~Mercaderia() {

}



