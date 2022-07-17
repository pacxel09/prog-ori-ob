#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <conio.h>

using namespace std;
int eleg;
float vol,res,corr,resi,volt,inte,z;

void portada ()
{
cout<<"\n\n                    INSTITUTO POLITECNICO NACIONAL ";
cout<<"\n\n           Escuela Siperior de Ingenieria Mecanica y electrica";
cout<<"\n\n                            ESIME Zacatenco";
cout<<"\n\n              Ingenieria en Control y Automatizacion";
cout<<"\n\n                       Programacion orientada a objetos";
cout<<"\n\n                            2AV8";
cout<<"\n\n                Nombre:Tinoco Martinez Axel Javier\n";
getch ();
}


int main ()
{
portada();

std::cout<<"ley de ohm\n"<<std::endl;
std::cout<<"1 para la resistencia\n"<<std::endl;
std::cout<<"2 para voltaje\n"<<std::endl;
std::cout<<"3 para sacar la intensidad\n"<<std::endl;
std::cin>>eleg;
        switch(eleg)
        {
            case 1:std::cout<<"ingresa el voltaje"<<std::endl;
            std::cin>>vol;
            std::cout<<"ingresa la intensidad"<<std::endl;
            std::cin>>corr;
            resi=vol/corr;
            cout<<"la resistencia es: \n"<<resi;
            break;
            case 2:std::cout<<"ingresa la intensidad"<<std::endl;
            std::cin>>corr;
            std::cout<<"ingrese la resistencia  "<<std::endl;
            std::cin>>res;
            volt= corr*res;
            std::cout<<"el voltaje es"<<std::endl;
            cout<<"el voltaje es \n"<<volt;
            break;
            case 3:std::cout<<"ingrese el voltaje"<<std::endl;
            std::cin>>vol;
            std::cout<<"ingrese la resistencia"<<std::endl;
            std::cin>>res;
            inte=vol/res;
            cout<<"la intensidad es: \n"<<inte;
            break;

            default:std::cout<<"elige solo del 1 al 3"<<std::endl;
        }
        return 0;
    }
/*std::cout
*/
