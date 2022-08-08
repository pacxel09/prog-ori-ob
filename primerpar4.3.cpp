#include <iostream>
#include <conio.h>
void pd();
void fun(int x,int y);
int num,exp;
int main(){
    pd();
    fun(num,exp);//mismo orden en que se usa en la funcion por ser exponente
    getch();
    return 0;
}
void pd(){
    std::cout<<"digite un numeros\n"<<std::endl;
    std::cin>>num;
    std::cout<<"digite el exponente\n"<<std::endl;
    std::cin>>exp;
}
void fun(int x,int y){
    long r=1;
    for(int i=1;i<=y;i++){
        r *= x;
    }
    std::cout<<"el resultado es \n"<<r<<std::endl;
}
