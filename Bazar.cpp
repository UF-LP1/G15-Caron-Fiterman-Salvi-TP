/**
 * Project Untitled
 */


#include "Bazar.h"

/**
 * Bazar implementation
 */


 Bazar::Bazar(float tam, float valor, bool envoltorio, int cant, string nombreBazar) : Mercaderia(tam,valor,envoltorio,cant) {
     this->nombreMercaderia = nombreBazar;
}


void Bazar::set_nombreMerc(string &nombreBazar) {
     this->nombreMercaderia = nombreBazar;
     return;
}


const string Bazar::get_nombreMerc() {
   this->nombreMercaderia;
}




Bazar::~Bazar() {

}
