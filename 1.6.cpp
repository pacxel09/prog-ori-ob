#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
using namespace std;//para usar cout y cin
//definicion de funcion portada
void portada ()
{
std::cout<<"\n\n                    INSTITUTO POLITECNICO NACIONAL "<<std::endl;
std::cout<<"\n\n           Escuela Superior de Ingeniería Mecánica y eléctrica"<<std::endl;
std::cout<<"\n\n                            ESIME Zacatenco"<<std::endl;
std::cout<<"\n\n              Ingenieria en control y automatización"<<std::endl;
std::cout<<"\n\n                       Programacion orientada a objetos\n"<<std::endl;
std::cout<<"                            2AV8\n"<<std::endl;
std::cout<<"                Nombre:Tinoco Martinez Axel Javier\n"<<std::endl;
cout<<"----------------------------------------\n";
cout<<"|  struct <Nombre de la clase>         |\n";
cout<<"----------------------------------------\n";
cout<<"|	+var1   : char [30]	          |\n";
cout<<"|	+var2  :  int	                  |\n";
cout<<"|	+var3  :  float	                  |\n";
cout<<"|	+var4  :  long                    |\n";
cout<<"----------------------------------------\n";

cout<<"-----------------------------\n"<<endl;  //\n
cout<<"|    struct <APCirculo>      |\n"<<endl;
cout<<"------------------------------\n"<<endl;  //\n
getch ();
}
//struct <Nombre de la clase>
//+var 1: char [30]
//+var2  :  int
//+var3  :  float
//+var4  :  long
struct coleccion_CD {//nombre de la estructura
    char titulo[30];//tipo de dato - nombre de campo
    char artista[25];//tipo de dato - nombre de campo
    int numcan;//tipo de dato - nombre de campo
    float precio;//tipo de dato - nombre de campo
    char fecom[20];//tipo de dato - nombre de campo
}CD1,CD2,CD3;//se crean objetos con las caracteristicas
int main(){//funcion principal
    //orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada
    struct coleccion_CD CD1,CD2,CD3;//se crean 4 objetos

}

//programas creados y patentados S.A de C.V - MADE IN CHINGA
