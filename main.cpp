#include <iostream>
#include "Rectangle.h"
int main() {
    Rectangle *oneP;
    Rectangle a(4,12);
    Parall b(2,6,12);
    oneP=&a;
    oneP->Print();
    oneP=&b;
    oneP->Print();
    return 0;
}