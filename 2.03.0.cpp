#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
#include<cmath>
#include<iomanip>
//bibliotecas
using namespace std;


class ejemplo {
public:
    ejemplo(){
        cout<<"creo objeto\n";//crea constructor

    }
    ~ejemplo(){
        cout<<"destruye objeto";//crea destructor

    }

};
int main(void){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA

    ejemplo obj1;

    return 0;
}
