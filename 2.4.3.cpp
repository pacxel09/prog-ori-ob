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
class figura{
protected:
    float ancho,largo;
public:
    void leerancho(int a)
    {
        ancho= a;
    }
    void leerlargo(int a)
    {
        largo = a;
    }
};
class rectangulo:public figura{
protected:
    float area;
public:
    float calcarea(){
        return (area=ancho*largo);
    }
};
class prisma: public rectangulo{
protected:
    float alto, vol;
public:
    float calcvol(){
        cout<<"largo"<<largo<<endl;
        cout<<"ancho"<<ancho<<endl;
        cout<<"alto"<<alto<<endl;
        calcarea();
        cout<<"area de la base del prisma: "<<area;
        vol= area*alto;
        return vol;
    }
    void leeralto(int a){
        alto = a;
    }
    float leercalc(int a,int b,int c){
        ancho =a;
        largo=b;
        alto=c;
        cout<<endl<<"leer calculo"<<endl;

    }
};

int main(){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada
    rectangulo rect;
    cout<<"objeto retangulo 2,2"<<endl;
    rect.leerancho(2);
    rect.leerlargo(2);
    cout<<"area: "<<rect.calcarea()<<endl;
    cout<<endl<<"prisma 2,2,3"<<endl;
    prisma obj1;
    obj1.leerancho(2);
    obj1.leerlargo(2);
    obj1.leeralto(3);
    cout<<"voulumen: "<<obj1.calcvol()<<endl;
    cout<<endl<<"prisma 2,3,4"<<endl;
    cout<<endl<<"creo objeto 2"<<endl;
    prisma obj2;
    obj2.leercalc(2,3,4);
    cout<<"volumen prisma objeto 2: "<<obj2.calcvol()<<endl;
    cout<<endl;
    obj1=obj2;
    cout<<endl<<"asignando los valores del objeto 2 al objeto 1"<<endl;
    cout<<endl<<"volumen: "<<obj2.calcvol()<<endl;
    return 0;

}
