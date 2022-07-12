#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
#include <iomanip>
#include <cstring>
using namespace std;
//bibliotecas
//ejercicio: elevar numero sin retorno de valor
//definicion de las funciones de usuario
void pd();//definicion de la funcion pd sin parametros o argumentos de entrada y sin valor de retorno
void fun(int x,int y);//definicion de la funcion con argumentos de entrada de tipo entero sin valor de retorno
int num,exp;//declaran variables globales tipo enteras
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
getch ();
}

class bebe
{
public:
    bebe(const string &nom)
    {
        nombre = nom;
    }
    void gatea()
    {
        cout << nombre <<"  esta gateando";
    }
private:
    string nombre;

};
class ninyo
{
public:
    ninyo(const string &nom)
    {
        nombre=nom;
    }
    void corre()
    {
        cout<< nombre <<"  esta corriendo";
    }
    private:
    string nombre;

};

class adulto : public bebe, public ninyo
{
public:
    adulto(const string &nom) : bebe(nom) , ninyo(nom)
    {
        nombre = nom;
    }
    void camina()
    {
        cout<<nombre<<"  esta caminando ";
    }
private:
    string nombre;
};


int main(){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada
    adulto axel(" axel ");
    axel.camina();
    axel.gatea();
    axel.corre();
    return 0;
}
