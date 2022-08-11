#include <iostream>//bibliotecas de entrada/salida/general de c++
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
using namespace std;

void portada ()//void portada con valor de retorno nulo
{
std::cout<<"\n\n                    INSTITUTO POLITECNICO NACIONAL "<<std::endl;//salida de texto
std::cout<<"\n\n           Escuela Superior de Ingeniería Mecánica y eléctrica"<<std::endl;//salida de texto
std::cout<<"\n\n                            ESIME Zacatenco"<<std::endl;//salida de texto
std::cout<<"\n\n              Ingenieria en control y automatización"<<std::endl;//salida de texto
std::cout<<"\n\n                       Programacion orientada a objetos\n"<<std::endl;//salida de texto
std::cout<<"                            2AV8\n"<<std::endl;//salida de texto
std::cout<<"                Nombre:Tinoco Martinez Axel Javier\n"<<std::endl;//salida de texto
getch ();
}

void UML(void){//void uml con valor de retorno nulo
cout<<"                     ----------------------\n";//salida de texto
cout<<"                      |     class  box    |\n";//salida de texto-tipo privado
cout<<"                     ----------------------\n";//salida de texto
cout<<"                      |    PRIVATE        | \n";//salida de texto-metodos con parametro de entrada
cout<<"                     ----------------------\n";//salida de texto
cout<<"                      |   - double length ( double len  | \n";//salida de texto
cout<<"                      |   - double breath ( double bre ) | \n";//salida de texto
cout<<"                      |   - double heigth ( double hei ) | \n";//salida de texto
cout<<"                       --------------------\n";//salida de texto
cout<<"                      |+ void setlenght    | \n";//salida de texto
cout<<"                      | +void setbreath    | \n";//salida de texto
cout<<"                      | +void setheight    | \n";//salida de texto
cout<<"                      |+ box operator+    | \n";//salida de texto
cout<<"                      | +void setheight    | \n";//salida de texto
cout<<"                      ---------------------\n";//salida de texto
//objeto box por referencia
getch ();
}

class Box {
  private:
      double length;      // largo
      double breadth;     // alto
      double height;      // ancho
   public:
      void setLength( double len ) {//defino parametro de entrada de tipo doble para dar atributo a box
         length = len; //asignacion de atributo
      }
      void setBreadth( double bre ) {//parametro de entrada de tipo doble para dar atributo a box
         breadth = bre;//asignacion de atributo
      }
      void setHeight( double hei ) {//parametro de entrada de tipo doble para dar atributo a box
         height = hei;//parametro de entrada hei se da al atributo heigth
      }
 	double getVolume(void) {//parametro de entrada de tipo nulo para dar atributo a box
         return length * breadth * height;//operacion de atributos
      }


      // sobrecarga y operadores
      //orden al operador
      Box operator+(const Box& b) {//orden al operador
         Box boxaux;
         boxaux.length = this->length + b.length;
         boxaux.breadth = this->breadth + b.breadth;
         boxaux.height = this->height + b.height;
         return boxaux;
      }
 };


int main(){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada
    UML ();
   Box Box1, Box2, Box3,len,bre;                // declaran las cajas
             //
              //
   double volume = 0.0;     //
   // box 1
   Box1.setLength(6.0);
   Box1.setBreadth(7.0);
   Box1.setHeight(5.0);
    // box 2
   Box2.setLength(12.0);
   Box2.setBreadth(13.0);
   Box2.setHeight(10.0);

   // volume
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
     cout << "ancho of Box1 : 6 " <<endl;
       cout << "alto of Box1  7 : " <<endl;
       cout << "largo of Box1  5 : " <<endl;
    // volume
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
     cout << "ancho of Box1  12 " <<endl;
       cout << "alto of Box1  13 " <<endl;
       cout << "largo of Box1  10  " <<endl;
   // objetos
   Box3 = Box1 + Box2;

   // volume
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;
 cout << "Volume of Box1 : " << volume <<endl;
     cout << "ancho of Box1 : 18 " <<endl;
       cout << "alto of Box1  20 " <<endl;
       cout << "largo of Box1  15  " <<endl;
   return 0;
}
