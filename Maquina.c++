#include "Estudiante.cpp"
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>



using namespace std;


class Maquina : Estudiante{

    public: const char *nom_archivo;
            const char *nom_temp;
            int id_fisico;
            int cod_estudiante;

            struct Estudia{
	        int codigo;
	        char nombre[50];
	        char apellido[50];
	        char direccion[50];
	        int telefono;
            };
    public: 
    Maquina(){
    }
    Maquina(char nom, char ape, char dir, int tel,int cod,const char *nombre,const char *nombre2, int id): Estudiante(nom,ape,dir,tel,cod){
        nom_archivo=nombre;
        nom_temp=nombre2;
        id_fisico=id;
        cod_estudiante=cod;
        Estudia estudia;
    }

    void NoNull(int id){
        id_fisico++;
    }

    void crear(){
        fflush(stdin);
        FILE *archivo = fopen(nom_archivo,"ab");
        Estudia estudia;
        char continuar;
        fwrite(&estudia,sizeof(Estudiante),1,archivo);
        fclose(archivo);        
    }

    void leer(){
        //FILE *archivo = fopen(nom_archivo,"rb");
        //if(!archivo){
          //  archivo=fopen(nom_archivo,"wb");
        //}        
        //Estudia estudia;
        //fread(&e,sizeof(cod),1,archivo);
        //cout<<"id"<<"|"<<"Codigo"<<"|"<<"Nombres"<<"|"<<"Apellidos"<<"|"<<"Direccion"<<"|"<<"Telefono"<<endl;
        //do
        //{
          //  cout<<id_fisico<<" | "<<estudia.codigo<<" | "<<estudia.nombre<<" | "<<estudia.apellido<<" | "<<estudia.direccion<<" | "<<estudia.telefono<<endl;
            //fread(&cod,sizeof(cod),1,archivo);

        //} while (feof(archivo)==0);

        //fclose(archivo);        

    }

    void actualizar(){


    }

    void eliminar(){


    }
    };
