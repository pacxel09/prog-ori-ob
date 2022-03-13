#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
//bibliotecas
//jercicio vide 1.1
using namespace std;
//definicion de las funciones de usuario
void portada (void)//funcion de retorno nulo,valor de entrada nulo void= nulo
{
std::cout<<"\n\n                    INSTITUTO POLITECNICO NACIONAL "<<std::endl;
std::cout<<"\n\n           Escuela Superior de Ingeniería Mecánica y eléctrica"<<std::endl;
std::cout<<"\n\n                            ESIME Zacatenco"<<std::endl;
std::cout<<"\n\n              Ingenieria en control y automatización"<<std::endl;
std::cout<<"\n\n                       Programacion orientada a objetos\n"<<std::endl;
std::cout<<"                            2AV8\n"<<std::endl;
std::cout<<"                Nombre:Tinoco Martinez Axel Javier\n"<<std::endl;
cout<<"-----------------------------\n";
cout<<"|  struct <personas>         |\n";
cout<<"------------------------------\n";
cout<<"|	+char  : nom 	          |\n";
cout<<"|	+int  : edad	          |\n";
cout<<"----------------------------------------\n";

cout<<"-----------------------------\n"<<endl;  //\n
cout<<"|    struct <per>      |\n"<<endl;
cout<<"------------------------------\n"<<endl;  //\n
getch ();
}

struct per{//nombre de la clase estructura
//atributos de la clase estruct
    char nom[20];//tipo dato-nombre de campo
    int edad;//tipo dato-nombre de campo

}//instanciado de objetos
per1 ={"pepe",20},//se instancia el objeto per1 y se le asignan valores a los atributos
per2 ={"rupert",15};//nombre tipo cadena-nombre-valr


int main(){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada

    //salen datos de los objetos
    cout<<"persona 1: \n"<<per1.nom<<endl;//
    cout<<"edad: \n"<<per1.edad<<endl;
    cout<<"persona 2: \n"<<per2.nom<<endl;
    cout<<"edad 2: \n"<<per2.edad<<endl;

    getch();
    return 0;
}


