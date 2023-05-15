/**
 * Project Untitled
 */


#include "Ferreteria.h"

/**
 * Ferreteria implementation
 */



Ferreteria::Ferreteria(string Nombre) :nombre(Nombre) {
}


void Ferreteria::CartelAbiertoCerrado() {

    QDateTime dateTime = QDateTime::currentDateTime();

    int horarioDiaSem = dateTime.date().day();
    int horarioHora = dateTime.time().hour();
    int horarioMin = dateTime.time().minute(); //hora actual

    bool abierto = true;

    if(((horarioHora>=7 && horarioMin==30 ) && horarioHora<=13) || ( horarioHora>=17 && horarioHora<=20 )){
        if(horarioDiaSem>=1 && horarioDiaSem<=5)
            abierto = true;
        }

    else
        abierto = false;

    string mensaje = (abierto == true) ? "Estamos Abiertos" : "Estamos Cerrados";
    cout << mensaje << endl;

    return;
}


Ferreteria::~Ferreteria() {

}
