//  José Antonio Hernández Hernández A01381334
//  SalaCine.h
//  tarea3salacine
//
//  Created by Jose Antonio on 01/02/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//

#ifndef SalaCine_h
#define SalaCine_h
using namespace std;
// definicion de la clase salacine...
class SalaCine{
public:
    // declaracion de metodos a utilizar en el encabezado...
    SalaCine();
    SalaCine(int lg, string pel);
    void setLugares(int lg);
    void setPelicula(string pel);
    int getLugares();
    string getPelicula();
    void compraBoleto(int bol);
private:
    // declaracion de atributos a utilizar en el encabezado...
    int lugares;
    string pelicula;
};
// constructores de clase...
SalaCine::SalaCine(){
    lugares=0;
    pelicula=" ";
}
SalaCine::SalaCine(int lg, string pel){
    lugares=lg;
    pelicula=pel;
}
// definir metodos...
void SalaCine::setLugares(int lg){
    lugares=lg; // metodo de acceso que recibe lg y da el valor lg a lugares...
}
void SalaCine::setPelicula(string pel){
    pelicula=pel; // metodo de acceso que recibe pel y da el valor pel a peliculas...
}
// metodo que resta los boletos que el usuario comprara y de no ser posible despliega que no hay suficientes...
void SalaCine::compraBoleto(int bol){
    // condicional para o restar los lugares o decir que no hay lugares suficientes...
    if (lugares>=bol)
        lugares-=bol;
    else
        cout << "no hay suficientes lugares" << endl;
}
// metodo que regresa los lugares disponibles...
int SalaCine::getLugares(){
    return lugares; // regresa lugares disponibles...
}
// metodo que regresa el nombre de la pelicula...
string SalaCine::getPelicula(){
    return pelicula; // regresa nombre de la pelicula...

}

#endif /* clasea_h */



