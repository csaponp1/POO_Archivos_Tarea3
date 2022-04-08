#include "Maquina.c++"
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

  struct Estudia{
        int codigo;
        char nombre[50];
        char apellido[50];
        char direccion[50];
        int telefono;
        }; Estudia estudia;

using namespace std;
const char *open="archivos.dat";
const char *close="temp.dat";

int main (){

    char nombres[50],apellidos[40],direccion[50];
    int id=0;
    int telefono, codigo;

    cout<<"ingrese codigo"<<endl;
    cin>>codigo;
    
    cout<<"ingrese nombres"<<endl;
    cin>>nombres;

    cout<<"ingrese apellidos"<<endl;
    cin>>apellidos;

    cout<<"ingrese direccion"<<endl;
    cin>>direccion;
    
    cout<<"ingrese telefono"<<endl;
    cin>>telefono;

     
    Maquina obj1 = Maquina(*nombres,*apellidos,*direccion,telefono,codigo,open,close,id);
    
    Estudiante obj2=Estudiante(*nombres,*apellidos,*direccion,telefono,codigo);
    obj2.Estructura(*nombres,*apellidos,*direccion,telefono,codigo);
    obj2.mostrar();

    //Estudiante obj2 = Estudiante(nombres.c_str(),apellidos.c_str(),direccion.c_str(),telefono,codigo);
   
    system("pause");


}
