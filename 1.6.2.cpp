#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
//bibliotecas
//ejercicio video 2

using namespace std;
//definicion de las funciones de usuario
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
cout<<"|  struct <Nombre de la clas>         |\n";
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
struct complejo{//nombre de la estructura
    float re;//tipo de dato - nombre de campo
    float im;//tipo de dato - nombre de campo
}complejo,complejito;
int main(){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada

    //complejo c1={12.3,-10.1]
    complejo.re=9;
    complejo.im=-100;
    cout<<.3f,.3f;
}
