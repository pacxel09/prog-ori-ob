
#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
#include<cmath>
#include<iomanip>
//bibliotecas
using namespace std;
class punto
{
private:
    int x,y;
    public:
        punto();
        void setpunto(int,int);
        int getpuntox();
        int getpuntoy();
void portada(void);
void UML(void);
};
punto::punto(){
}
void punto::setpunto(int _x,int _y){
x=  _x;
y = _y;
}
int punto::getpuntox(){
    return x;
}
int punto::getpuntoy(){
    return y;
}


int main(void){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    punto punto1;
    punto1.portada();
    punto1.UML();
    punto1.setpunto(15,10);
    cout<<punto1.getpuntox()<<endl;
    cout<<punto1.getpuntoy()<<endl;
    system ("pause");
    return 0;

}
void punto::portada (void)//funcion de retorno nulo,valor de entrada nulo void= nulo
{
std::cout<<"\n\n                    INSTITUTO POLITECNICO NACIONAL "<<std::endl;
std::cout<<"\n\n           Escuela Superior de Ingeniería Mecánica y eléctrica"<<std::endl;
std::cout<<"\n\n                            ESIME Zacatenco"<<std::endl;
std::cout<<"\n\n              Ingenieria en control y automatización"<<std::endl;
std::cout<<"\n\n                       Programacion orientada a objetos\n"<<std::endl;
std::cout<<"                            2AV8\n"<<std::endl;
std::cout<<"                Nombre:Tinoco Martinez Axel Javier\n"<<std::endl;


}

void  punto::UML(void){
cout<<"------------------\n";
cout<<"|  class <punto> |\n";
cout<<"------------------\n";
cout<<"|    int:  x     |\n";
cout<<"|    int:  y	    |\n";
cout<<"------------------\n";

getch ();
}
