//
// Created by qwerty on 28.02.17.
//

#ifndef LAB4_RECTANGLE_H
#define LAB4_RECTANGLE_H

class Rectangle
{
protected:
    int A; int B;
public:
    virtual ~Rectangle();
    Rectangle();
    Rectangle(int len, int wid);
    virtual void Print();
    virtual long Area();


};

class Parall: public Rectangle
{
    int H;
public:
    ~Parall();
    Parall();
    Parall(int len, int wid, int he);
    void Print();
    long Area();

};


#endif //LAB4_RECTANGLE_H
