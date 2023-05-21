/**
 * Project Untitled
 */


#include "Plomero.h"

/**
 * Plomero implementation
 */


Plomero::Plomero(string nombre, string dni, bool estado) :Persona(nombre,dni) {
    this->estadoProblema = estado;
}

const bool Plomero::get_estadoProblema() {
    return this->estadoProblema;
}


void Plomero::set_estadoProblema(bool estado) {
    this->estadoProblema = estado;
    return;
}

void Plomero::resolverProblema(){
    bool resuelto = false; //se puedo arreglar el problema?
    resuelto = rand()% (0-1)+1;
    if(resuelto == true){
        cout<<"Problema Resuelto"<<endl;
        this->estadoProblema = true;
    }
    else{
        this->estadoProblema = false;
        cout<<"Problema No Resuelto"<<endl;
    }

    return;
}


 Plomero::~Plomero() {

}
