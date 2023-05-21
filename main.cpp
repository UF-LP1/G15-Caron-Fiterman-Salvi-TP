#include <QCoreApplication>
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
#include <QDateTime>
#include <algorithm>
#include <ostream>


#include "Bazar.h"
#include "Banyo.h"
#include "Cerrajero.h"
#include "Cliente.h"
#include "Despachante.h"
#include "Duenyo.h"
#include "Electricidad.h"
#include "Ferreteria.h"
#include "Herramientas_Alquiler.h"
#include "Llaves.h"
#include "Mercaderia.h"
#include "Persona.h"
#include "Plomero.h"
#include "Rubro.h"
#include "customExceptions.h"

using namespace std;


int main()
{

    cout<<"estan abiertos?"<<endl;
    bool estado = Ferreteria::CartelAbiertoCerrado();
    string mensaje = (estado == true) ? "Estamos Abiertos" : "Estamos Cerrados";
    cout << mensaje << endl;


    list<string> listaPrimCli; //creo la lista que va a llevar el primer cliente

    listaPrimCli.push_back("tornillo"); //primer elemento que tiene el cliente en su lista
    listaPrimCli.push_back("lampara");
    listaPrimCli.push_back("cable");
    listaPrimCli.push_back("virulana");
    listaPrimCli.push_back("soga");
    listaPrimCli.push_back("cepillo");

    cout<<"First element lista cliente: "<< listaPrimCli.front() << endl; //chequeo
    cout<<"Last element lista cliente: "<< listaPrimCli.back() << endl;

    Cliente PrimerCliente("pablo", "234763357", "Palermo", false, listaPrimCli, 2000000, false, "amoladora", true, 150, "martillo", true, "Llave Magnetica",false, false); //creo cliente, le paso la lista


    //creo mi segundo cliente

    list<string> listaSegCli; //creo la lista que va a llevar el segundo cliente
    listaSegCli.push_back("tornillo"); //primer elemento que tiene el cliente en su lista
    listaSegCli.push_back("lampara");
    listaSegCli.push_back("cable");
    listaSegCli.push_back("portalámparas");
    listaSegCli.push_back("enchufe");
    listaSegCli.push_back("tarugo");
    listaSegCli.push_back("mecha");


    Cliente SegundoCliente("Juana", "36843346", "villa Crespo", true, listaSegCli, 240, true, "sierra", false, 0, "null", true,"Llave Simple", true, false);//creo al cliente, le paso la lista

    //creo mi tercer cliente

    list<string> listaTerCli;
    listaTerCli.push_back("lampara");
    listaTerCli.push_back("cable");
    listaTerCli.push_back("portalámparas");
    listaTerCli.push_back("tender");


    Cliente TercerCliente("Abril", "368644679", "Recoleta", false, listaTerCli, 10000000000000, false, "perforadora", false, 50, "tornillo", false,"null", false, true);//creo al cliente, le paso la lista

    list<Mercaderia*> MiMercaderia; //creo una lista de mercaderia

    Bazar Soga(30.0,600.0,true, 0,"soga");//creo los articulos de mercaderia
    Bazar Tender(30.0,1999.0,true, 15,"tender");
    Banyo Virulana(15.0,150.0,true, 5,"virulana");
    Banyo Cepillo(20.0,189.50,false, 4,"cepillo");
    Electricidad Lampara(10.0,300.0,true, 7, "lampara");
    Electricidad Cable(30.0,600.0,true, 2, "cable");
    Rubro Martillo(30.0,600.0,true,20, "martillo");
    Rubro Tornillo(2.0,100.0,true, 5, "tornillo");
    Rubro Portalamparas(2.0,1000.0,true, 5, "portalámparas");
    Rubro Enchufe(2.0,130.0,true, 5, "enchufe");
    Rubro Tarugo(2.0,30.0,true, 5, "tarugo");
    Rubro Mecha(2.0,340.0,true, 5, "mecha");

    MiMercaderia.push_front(&Soga); //añadimos a MiMercaderia los articulos
    MiMercaderia.push_front(&Tender);// (sabemos que podriamos haberlos creado aca directamente pero nos es mas comodo asi :) )
    MiMercaderia.push_front(&Virulana);
    MiMercaderia.push_front(&Cepillo);
    MiMercaderia.push_front(&Lampara);
    MiMercaderia.push_front(&Cable);
    MiMercaderia.push_front(&Martillo);
    MiMercaderia.push_front(&Tornillo);
    MiMercaderia.push_front(&Portalamparas);
    MiMercaderia.push_front(&Enchufe);
    MiMercaderia.push_front(&Tarugo);
    MiMercaderia.push_front(&Mecha);


    cout<<"First element lista mercaderia: "<< MiMercaderia.front()->get_nombreMerc() << endl; //chequeo
    cout<<"Last element lista mercaderia: "<< MiMercaderia.back()->get_nombreMerc() << endl;

    cout<<"Imprimir Stock"<<endl;
    Duenyo::imprimirStock(MiMercaderia);


    list<Herramientas_Alquiler*> HerrAql; //creo una lista de herramientas de alquiler

    Herramientas_Alquiler Amoladora(true, "amoladora",true, 1500.0, 3.0, 450.0);
    Herramientas_Alquiler Lijadora(true, "lijadora",true, 1500.0, 3.0, 450.0);
    Herramientas_Alquiler Perforadora(true, "perforadora",true, 1500.0, 3.0, 450.0);
    Herramientas_Alquiler Sierra(true, "sierra",true, 1500.0, 3.0, 450.0);


    HerrAql.push_front(&Amoladora);
    HerrAql.push_front(&Lijadora);
    HerrAql.push_front(&Perforadora);
    HerrAql.push_front(&Sierra);


    list<Llaves*> listaDeLlaves; //creo una lista de llaves
    Llaves LlaveSimple(20,250,false,6,false,"Llave Simple");
    Llaves DobleTambor(20,250,true,6,true,"Llave Doble Tambor");
    Llaves Codificada(20,250,true,6,true,"Llave Codificada");
    Llaves Magnetica(20,250,true,6,true,"Llave Magnetica");

    listaDeLlaves.push_front(&LlaveSimple);
    listaDeLlaves.push_front(&DobleTambor);
    listaDeLlaves.push_front(&Codificada);
    listaDeLlaves.push_front(&Magnetica);



    Despachante Despache ("Raul", "36863357", false);
    Plomero plomero ("Juan Carlos", "46824468", true);
    Cerrajero cerrajero("Diego", "36872496", listaDeLlaves);

    Duenyo Cindy("Cindy", "36741248", "clavo", false, false, 0.0, MiMercaderia, HerrAql);  //creo dueño, le paso la lista de MiMercaderia

    //pruebo todo:
    Cindy.AtenderCliente(PrimerCliente, cerrajero, plomero, Despache);
    Cindy.AtenderCliente(SegundoCliente, cerrajero, plomero, Despache);
    Cindy.AtenderCliente(TercerCliente, cerrajero, plomero, Despache);

    //Cliente Client, Cerrajero Cerra, Plomero plomo, Despachante despache




    return 0;
}
