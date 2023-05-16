/**
 * Project Untitled
 */


#include "Ferreteria.h"

/**
 * Ferreteria implementation
 */



Ferreteria::Ferreteria(string Nombre) :nombre(Nombre) {
}


bool Ferreteria::CartelAbiertoCerrado() {

    QDateTime dateTime = QDateTime::currentDateTime();//hora actual


    int horarioDiaSem = dateTime.date().day();
    int horarioHora = dateTime.time().hour();
    bool abierto = true;

    if((horarioHora>=7 && horarioHora<=13) || ( horarioHora>=17 && horarioHora<=20 )){
        if(horarioDiaSem>=1 && horarioDiaSem<=5)
            abierto = true;
        }

    else
        abierto = false;


    return abierto;
}


Ferreteria::~Ferreteria() {

}
