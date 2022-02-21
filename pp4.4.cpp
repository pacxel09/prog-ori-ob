#include <iostream>
#include<conio.h>
void sdn(int n1,int n2,int sum);

int main()
{
    int n1,n2,sum=99;
    sdn (n1,n2,sum);//paso 2 y por eso da 0
    std::cout<<"la suma con retorno es: \n"<<sum<<std::endl;

    return 0;
}
void sdn(int n1,int n2,int sum)/*copia(primero copia las variables originales y en esta funcion se modifican*/
{
    std::cout<<"la suma con retorno es: \n"<<sum<<std::endl;
    std::cout<<"digite un numero"<<std::endl;
    std::cin>>n1;
    std::cout<<"digite un numero de nuevo"<<std::endl;
    std::cin>>n2;
    sum=n1 + n2;
    std::cout<<"la suma con retorno es: \n"<<sum<<std::endl;//paso1
}
