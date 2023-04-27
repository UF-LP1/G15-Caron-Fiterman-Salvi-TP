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
Mercaderia::Mercaderia(float tam, float valor, bool envoltorio, string nombreMerc) {
    this->Tamanyo = tam;
    this->Precio = valor;
    this->EnvoltorioArticulo = envoltorio;
    this->nombreMercaderia = nombreMerc;
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

void Mercaderia::set_nombreMerc(string nombreMerc){
    this->nombreMercaderia = nombreMerc;
    return;
}

const string Mercaderia::get_nombreMerc(){
   return this->nombreMercaderia;
}
Mercaderia::~Mercaderia() {

}
