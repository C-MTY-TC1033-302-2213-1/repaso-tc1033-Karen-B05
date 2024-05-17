#ifndef Punto_hpp
#define Punto_hpp

#include <stdio.h>
#include <string>
#include <math.h>

class Punto{
private:
    double x;
    double y;

public:
    //Constructores
    Punto();
    Punto(double _x,double _y);

    //M�todos de acceso - getters
    double getX();
    double getY();

    //M�todos modificadores - setters
    void setX(double _x);
    void setY(double _y);

    //Otros metodos
    double calculaDistancia(Punto p2);
    std::string str();
};

#endif // Punto_hpp
