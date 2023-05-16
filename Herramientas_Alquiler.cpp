/**
 * Project Untitled
 */


#include "Herramientas_Alquiler.h"

/**
 * Herramientas_Alquiler implementation
 */

Herramientas_Alquiler::Herramientas_Alquiler(bool condicion, string tipoHerr, bool DevSeg, float precio, float TiempoUso, float PrecioSeguro) {
    this->CondicionArticulo = condicion;
    this->tipo_HerrAlq= tipoHerr;
    this->DevuelvoSeguro = DevSeg;
    this->Precio = precio;
    this->tiempoUso = TiempoUso;
    this->PrecioSeguro = PrecioSeguro;


}


const string Herramientas_Alquiler::get_tipoHerrAlq() {
    return  this->tipo_HerrAlq;
}

void Herramientas_Alquiler::set_tipoHerrAlq(string tipoHerr) {
    this->tipo_HerrAlq= tipoHerr;
    return;
}

const bool Herramientas_Alquiler::get_condicionArt() {
    return this->CondicionArticulo;
}

void Herramientas_Alquiler::set_condicionArt(bool condicion) {
    this->CondicionArticulo = condicion;
    return;
}

void Herramientas_Alquiler::set_precio(float precio) {
    this->Precio = precio;
    return;
}

const float Herramientas_Alquiler::get_precio() {
    return  this->Precio;
}

void Herramientas_Alquiler::set_devSeg(bool DevSeg) {
    this->DevuelvoSeguro = DevSeg;
    return;
}

const bool Herramientas_Alquiler::get_devSeg() {
    return  this->DevuelvoSeguro;
}

const float Herramientas_Alquiler::get_tiempoUso(){
    return this->tiempoUso;
}

void Herramientas_Alquiler:: set_tiempoUso(float TiempoUso){
    this->tiempoUso = TiempoUso;
    return;
}

const float Herramientas_Alquiler::get_PrecioSeg(){
    return this->PrecioSeguro;

}
void Herramientas_Alquiler::set_PrecioSeg(float PrecioSeguro){
    this->PrecioSeguro = PrecioSeguro;
    return;
}

Herramientas_Alquiler::~Herramientas_Alquiler() {
}
