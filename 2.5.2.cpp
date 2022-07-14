#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
#include <iomanip>
#include <cstring>
using namespace std;
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
void UML(void){
cout<<"--------------------------\n";
cout<<"|  obj. <F>          |   |    obj.1       |\n";
cout<<"-------------------------------------------------------------------\n";
cout<<"|    PROTECTED                   | |    PROTECTED                 |\n";
cout<<"|    +float  : s                 | |    +float  : b	             |\n";
cout<<"|    public  :	                | |    public  :	             |\n";
cout<<"|    void nuevonum1, muestranum1	| | void nuevonum2, muestranum2  |\n";
cout<<"-------------------------------------------------------------------\n";
cout<<"           |";
cout<<"           V";
cout<<"|           SUMA       |";
cout<<"|    PROTECTED      | \n";
cout<<"|    +float  : S    | \n";
cout<<"|    public  :      | \n";
cout<<"|    suma           | \n";
cout<<"------------------------\n";

getch ();
}
class num1{
protected:
    float a;
public:
    void nuevonum1(float aux){ a=aux; }
    num1(){a=1;}
    void muestranum1(){
    cout<<"valor 1 : "<<endl<<a<<endl;}
    };
    class num2{
    protected:
        float b;
    public:
        void nuevonum2(float aux){
            b=aux;}
            num2(){b=2;}
            void muestranum2(){
            cout<<"valor 2: "<<endl<<b<<endl;}
    };
class suma: public num1, public num2{
protected:
    float s;
public:
    suma(){
        s=a+b;
        cout<<"suma= "<<s<<endl;
    }
    suma(float aux1,float aux2){
        nuevonum1(aux1);
        nuevonum2(aux2);
        s=a+b;
        cout<<"suma= "<<s<<endl;
    }

};

int main(){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada
    UML();
    suma obj,obj1(2,3);
    obj.muestranum1();
    obj.muestranum2();
    obj1.muestranum1();
    obj1.muestranum2();

    system("pause");}
