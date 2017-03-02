#include <iostream>
#include "Rectangle.h"


Rectangle::Rectangle(int len, int wid)
{
    A = len;
    B = wid;
}

long Rectangle::Area()
{
    return A*B;
}

long Parall::Area()
{
 return A*B*H;
}

Rectangle::~Rectangle() {}

Rectangle::Rectangle()
{
    A = 0;
    B = 0;
}

Parall::Parall(int len, int wid, int he)
{
    A = len;
    B = wid;
    H = he;
}
Parall::Parall(){
    A = 0;
    B = 0;
    H = 0;
}
Parall::~Parall(){}

void Rectangle::Print()
{
    std::cout<<std::endl<<"Width= "<<B<<"; Lenght= "<<A<<std::endl;
    std::cout<<"Area = "<< Area()<<std::endl;
}

void Parall::Print()
{
    std::cout<<std::endl<<"Width= "<< A<<"; Lenght= "<< B<<"; Height= "<< H<<std::endl;
    std::cout<<"Area = "<< Area()<<std::endl;
}