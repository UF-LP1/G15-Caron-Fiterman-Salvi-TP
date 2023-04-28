/**
 * Project Untitled
 */


#include "Cliente.h"

/**
 * Cliente implementation
 */


/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param bool
 * @param float
 */

Cliente::Cliente(string nombre, string dni, string direcc, bool foto,  list <string> quiero) :Persona(nombre,dni) {
    this->domicilio=direcc;
    this->TengoFoto_oArtRoto = foto;
    this->ListaQuiero = quiero;


}

void Cliente::pedirArticulo(Mercaderia queNecesito, bool foto) {
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

void Cliente::set_ListaQuerQuiero(list <string> quiero) {
    this->ListaQuiero = quiero;
    return;
}

const list<string> Cliente::get_ListaQueQuiero(){
    return this->ListaQuiero;
}




Cliente::~Cliente() {

}
