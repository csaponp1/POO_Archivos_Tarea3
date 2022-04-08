#include "Persona.cpp"
#include <iostream>


using namespace std;

class Estudiante : Persona{
    //atributos
    protected: int codigo;

    //constructor y herencia
    public: 
    Estudiante(){
    }
    Estudiante(char nom, char ape, char dir, int tel, int cod) : Persona(nom,ape,dir,tel){
        codigo=cod;
    }

    void mostrar(){
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"codigo"<<" | "<<"nombres"<<" | "<<"apellidos"<<" | "<<"direccion"<<" | "<<"telefono"<<" | "<<endl;
        cout<<codigo<<" | "<<p_nombres<<" | "<<p_apellidos<<" | "<<p_direccion<<" | "<<telefono<<endl;
    }

    void crear();


    void Estructura(char nom, char ape, char dir, int tel, int cod){
        struct Estudia{
        int codigo;
        char nombre[50];
        char apellido[50];
        char direccion[50];
        int telefono;
        }; Estudia estudia;
    }

    

};
