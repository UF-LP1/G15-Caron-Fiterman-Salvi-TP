/**
 * Project Untitled
 */


#include "Cliente.h"

/**
 * Cliente implementation
 */


Cliente::Cliente(string nombre, string dni, string direcc, bool foto, list <string> quiero, float plata, bool AlqHerr, string herrAlq, bool Cambio, float precioViejoArtic, string ArtViejo, bool cerrajero, string TipoLlave, bool despachante, bool plomero) :Persona(nombre,dni) {
    this->domicilio=direcc;
    this->TengoFoto_oArtRoto = foto;
    this->ListaQuiero = quiero;
    this->dinero = plata;
    this->alquiler = AlqHerr;
    this->HerrAlq = herrAlq;
    this->cambio = Cambio;
    this->precioViejoArt = precioViejoArtic;
    this->artViejo = ArtViejo;
    this->NecesitoCerrajero = cerrajero;
    this->tipoLlave = TipoLlave;
    this->NecesitoDespachante = despachante;
    this->NecesitoPlomero = plomero;

}

void Cliente::pedirArticulo(bool foto) {
    return;
}


void Cliente::set_domicilio(string direcc) {
    this->domicilio=direcc;
    return;
}


const string Cliente::get_domicilio() {
    return this->domicilio;
}


void Cliente::set_fotoArt(bool foto) {
    this->TengoFoto_oArtRoto = foto;
    return;
}

const bool Cliente::get_fotoArt() {
    return this->TengoFoto_oArtRoto;
}

void Cliente::set_ListaQueQuiero(list <string> quiero) {
    this->ListaQuiero = quiero;
    return;
}


const list<string>& Cliente::get_ListaQueQuiero() {
    return this->ListaQuiero;
}


void Cliente::set_dinero(float plata){
    this->dinero = plata;
    return;
}

const float Cliente:: get_dinero(){
    return this->dinero;
}


void Cliente::set_Alquilo(bool AlqHerr){
    this->alquiler = AlqHerr;
    return;
}

const bool Cliente:: get_Alquilo(){
    return this->alquiler;
}


void Cliente::set_HerrAlq(string herrAlq) {
    this->HerrAlq=herrAlq;
    return;
}


const string Cliente::get_HerrAlq() {
    return this->HerrAlq;
}



void Cliente::set_Cambio(bool Cambio){
    this->cambio = Cambio;
    return;
}

const bool Cliente:: get_Cambio(){
    return this->cambio;
}


void Cliente::set_PrecioArtViejo(float precioViejoArtic){
    this->precioViejoArt = precioViejoArtic;
    return;
}

const float Cliente:: get_PrecioArtViejo(){
    return this->precioViejoArt;
}


void Cliente::set_ArtViejo(string ArtViejo){
    this->artViejo = ArtViejo;
    return;
}

const string Cliente:: get_ArtViejo(){
    return this->artViejo;

}

void Cliente::set_cerrajero(bool cerrajero){
    this->NecesitoCerrajero = cerrajero;
    return;
}

const bool Cliente:: get_cerrajero(){
    return this->NecesitoCerrajero;
}

void Cliente::set_despachante(bool despachante){
    this->NecesitoDespachante = despachante;
    return;
}

const bool Cliente:: get_despachante(){
    return this->NecesitoDespachante;
}

void Cliente::set_plomero(bool plomero){
    this->NecesitoPlomero = plomero;
    return;
}

const bool Cliente:: get_plomero(){
    return this->NecesitoPlomero;
}

void Cliente::set_tipoLlave(string Llavecita){
    this->tipoLlave = Llavecita;
    return;
}
const string Cliente::get_tipoLlave(){
    return this->tipoLlave;
}

Cliente::~Cliente() {

}
