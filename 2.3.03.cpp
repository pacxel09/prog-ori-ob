#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
#include<cmath>
#include<iomanip>
//bibliotecas
using namespace std;
void portada (void)//funcion de retorno nulo,valor de entrada nulo void= nulo
{
std::cout<<"\n\n                    INSTITUTO POLITECNICO NACIONAL "<<std::endl;
std::cout<<"\n\n           Escuela Superior de Ingeniería Mecánica y eléctrica"<<std::endl;
std::cout<<"\n\n                            ESIME Zacatenco"<<std::endl;
std::cout<<"\n\n              Ingenieria en control y automatización"<<std::endl;
std::cout<<"\n\n                       Programacion orientada a objetos\n"<<std::endl;
std::cout<<"                            2AV8\n"<<std::endl;
std::cout<<"                Nombre:Tinoco Martinez Axel Javier\n"<<std::endl;


}
void UML(void){
cout<<"---------------------\n";
cout<<"|  class <Fecha>     |\n";
cout<<"----------------------\n";
cout<<"|    +float: anc     |\n";
cout<<"|    +float:  lar	|\n";
cout<<"|--------------------|\n";


getch ();
}
class rectangulo{
private://atributos
    float lar,anc;
public:
    rectangulo(float,float);
    void per();
    void ar();
};
rectangulo::rectangulo(float _lar,float _anc){
    lar = _lar;
    anc = anc;
}
void rectangulo::per(){
    float _per;
    _per= x +(2*anc);
    cout<<"el perimetro es: "<<_per<<endl;
}
void rectangulo::ar(){
    float _ar;
    _ar= lar * anc;
    cout<<"el area es: "<<_ar<<endl;
}
int main(void){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();
    UML();
    rectangulo r1(11,7);
    r1.per();
    r1.ar();
    system ("pause");
    return 0;
}
