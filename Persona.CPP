#include<iostream>

using namespace std;

class Persona{
    protected: char *p_nombres, *p_apellidos, *p_direccion;
                int telefono;

    protected: Persona(){
    }
    Persona(char nom, char ape,char dir,int tel){
        p_nombres=&nom;
        p_apellidos=&ape;
        p_direccion=&dir;
        telefono=tel;
    }

    void mostrar();


};