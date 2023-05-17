/**
 * Project Untitled
 */


#include "Ferreteria.h"

/**
 * Ferreteria implementation
 */



Ferreteria::Ferreteria(string Nombre) :nombre(Nombre) {
}


Ferreteria::~Ferreteria() {

}


bool Ferreteria::CartelAbiertoCerrado() {

    QDateTime dateTime = QDateTime::currentDateTime();//hora actual


    int horarioDiaSem = dateTime.date().day();
    int horarioHora = dateTime.time().hour();

    bool abierto = false;

    if(horarioDiaSem>=1 && horarioDiaSem<=5){
        if((horarioHora>=7 && horarioHora<=13) || (horarioHora>=17 && horarioHora<=20))
            abierto = true;
    } //abre los dias de semana de 7-13hs y de 17-20hs

    if(horarioDiaSem==6){
        if(horarioHora>=8 && horarioHora<=13)
            abierto = true;
    } //abre los sabados de 8-13hs


    return abierto;
}
