/**
 * Project Untitled
 */


#include "Cerrajero.h"


/**
 * Cerrajero implementation
 */

 Cerrajero::Cerrajero( string nombre, string dni, string llave) :Persona(nombre,dni) {
    this->tipoDeLlave= llave;
}


const string Cerrajero::get_tipoDeLlave() {
    return  this->tipoDeLlave;
}


void Cerrajero::set_tipoDeLlave(string llave) {
    this->tipoDeLlave= llave;
    return;
}

bool Cerrajero::HacerCopiaLlave(Llaves llave, Cliente Cli) {
    bool estadoFerreteria = Ferreteria::CartelAbiertoCerrado();
    string mensaje = (estadoFerreteria == true) ? "Estamos Abiertos" : "Estamos Cerrados";
    cout << mensaje << endl;
    bool copia = false;

    if(estadoFerreteria == true){ //si estamos abiertos
        if(llave.get_nombreMerc() == "Llave Codificada"){
            if(llave.get_TengoPermisoLlave() == true){
                copia = true;
                cout << "Aqui tienes la copia <3" << endl;
            }

            else
               cout << "No tengo permiso para hacer la copia" << endl;
        }

        else if (llave.get_nombreMerc() != "Llave Codificada")
            copia = true;
            cout << "Aqui tienes la copia <3" << endl;
    }




    return copia;
}


Cerrajero::~Cerrajero() {

}
