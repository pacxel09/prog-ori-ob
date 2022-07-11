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
private:
    float ancho;
public:
    void leerancho(float a){
    ancho = a;
    }
    float retancho(){
        return ancho;
    }

};
class area: public figura{
private:
    float largo;
public:
    void leerlargo(float a){
        largo = a;
    }
    float retlargo(){
        return largo;
    }
    float farea(){
        return (largo*retancho());
    }
    void fresultados(float *an,float *la,float *ar){
        *an=retancho();
        *la=retlargo();
        *ar = farea();
    }
};
int main(){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada
    area obj1;
    float a,l,r;
    obj1.leerlargo(2);
    obj1.leerancho(2);
    cout<<"area"<<obj1.farea();
    cout<<"resultados"<<endl;
    obj1.fresultados(&a, &l, &r);
    cout<<"ancho"<<a<<endl;
    cout<<"largo"<<l<<endl;
    cout<<"alto"<<r<<endl;

    return 0;

}
