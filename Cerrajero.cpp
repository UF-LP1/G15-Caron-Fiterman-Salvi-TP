/**
 * Project Untitled
 */


#include "Cerrajero.h"


/**
 * Cerrajero implementation
 */

 Cerrajero::Cerrajero( string nombre, string dni, list <Llaves*> Llaves) :Persona(nombre,dni) {

}



void Cerrajero::set_ListaLlaves(list <Llaves*> Llaves){
    this->ListaLlaves = Llaves;
    return;
}

const list <Llaves*> Cerrajero::get_ListaLlaves(){
    return this->ListaLlaves;
}

bool Cerrajero::HacerCopiaLlave(Cliente Cli) {

    list<Llaves*>::iterator it;
    bool copia = false;

    for(it = ListaLlaves.begin(); it != ListaLlaves.end(); it++){
        if((*it)->get_nombreMerc() == Cli.get_tipoLlave()){
            if(Cli.get_tipoLlave() == "Llave Magnetica" && (*it)->get_TengoPermisoLlave()){
                copia = true;
            }

            else if(Cli.get_tipoLlave() != "Llave Magnetica"){
                copia = true;
            }
        }
    }


    return copia;
}


Cerrajero::~Cerrajero() {

}
