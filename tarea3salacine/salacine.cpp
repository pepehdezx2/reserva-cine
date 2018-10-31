//  José Antonio Hernández Hernández A01381334
//  main.cpp
//  tarea3salacine
//
//  Created by Jose Antonio on 01/02/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//  algoritmo
//  declarar dos objetos tipo salacine
//  declarar variables
//  preguntar y recibir titulos de las peliculas y lugares disponibles
//  definirlos con los metodos de definicion
//  ciclo do while que siga hasta que no se quiera continuar
//  preguntar que sala se quiere comprar boletos y hacer un switch que reciba sala 1 o 2
//  y pregunte la cantidad de boletos que se desee comprar, de no ser sala 1 o 2
//  definir default como opcion no valida
//  preguntar y recbir si se quiere continuar o no
//  usar los metodos get para saber cuantos lugares quedan disponibles
//  desplegar el nombre de la pelicula con los lugares disponibles
//  casos de prueba
//  sala 1: el señir de los anillos, 200 lugares sala 2: shrek, 30 lugares
//  sala 1, 20 boletos, continuar, sala 2, 50 desplegara no hay suficientes, continuar, sala 2, 20 boletos
//  continuar, sala 1, 1 boleto
// desplegara el señor de los anillos 179 y shrek 10

#include <iostream>
#include <string>
#include "SalaCine.h"
using namespace std;
int main() {
    // crear objetos tipo salacine...
    SalaCine sala1, sala2;
    // declaracion de las variables...
    int lugares1, lugares2, sala, boletos, boletos1, boletos2;
    string pelicula1, pelicula2, continua;
    // preguntar y recibir los datos de las salas...
    cout << "pelicula que se presenta en la sala 1" << endl;
    getline(cin, pelicula1);
    cout << "pelicula que se presenta en la sala 2" << endl;
    getline(cin, pelicula2);
    cout << "lugares en la sala 1" << endl;
    cin >> lugares1;
    cout << "lugares en la sala 2" << endl;
    cin >> lugares2;
    // definir los datos de la sala...
    sala1.setLugares(lugares1);
    sala2.setLugares(lugares2);
    sala1.setPelicula(pelicula1);
    sala2.setPelicula(pelicula2);
    // ciclo que se hace hasta que el usuario teclea no...
    do{
        // pregunta y recibe que sala se quiere comprar boletos...
        cout << "sala para comprar boletos" << endl;
        cin >> sala;
        // switch que usa el metodo compraBoleto depende la sala...
        switch (sala)
        {
            case 1:
                // pregunta y recibe cuantos boletos se compraran...
                cout << "boletos que quieres comprar" << endl;
                cin >> boletos;
                // metodo que resta boletos o dice si no hay suficientes...
                sala1.compraBoleto(boletos);
                break;
            case 2:
                // pregunta y recibe cuantos boletos se compraran...
                cout << "boletos que quieres comprar" << endl;
                cin >> boletos;
                // metodo que resta boletos o dice si no hay suficientes...
                sala2.compraBoleto(boletos);
                break;
                // default de switch que se activa si no se dio una sala valida...
            default:
                cout << "sala no valida" << endl;
        }
        // pregunta al usuario si desea continuar...
        cout << "quieres continuar" << endl;
        cin >> continua;
    }while (continua=="si");
    // metodos para conseguir lugares restantes...
    boletos1=sala1.getLugares();
    boletos2=sala2.getLugares();
    // despliega nombre de la pelicula y lugares restantes...
    cout << "quedan " << boletos1 << " lugares disponibles para la pelicula " << pelicula1 << endl;
    cout << "quedan " << boletos2 << " lugares disponibles para la pelicula " << pelicula2 << endl;
    return 0;
}

