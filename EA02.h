#ifndef EA02.h
#define EA02.h

#include <iostream>

using namespace std;

class Figura
{
private:
    int b, h;
    float p;

    /*
        Implementa los constructores y funciones de la clase Figura.
        La función setPerimetro UNICAMENTE recibe el perímetro y lo asigna, NO lo calcula.
    */

public:
    Figura();
    Figura(int b, int h);
    void setPerimetro(float a);
    float getPerimetro();
};

float Figura::getPerimetro() 
{

return 0;

}

void Figura::setPerimetro(float a)
{

this-> b = b;

}



    /*
        Implementa la clase Cuadrado que hereda de Figura. ok
        Crear constructor de Cuadrado que herede del constructor de Figura.
        Calcular y asignar el perímetro del cuadrado.
    */

    class Cuadrado : public Figura
{

    Cuadrado() : 
};

/*
    Implementa la clase Rectángulo que hereda de Figura.
    Crear constructor de Rectángulo que herede del constructor de Figura.
    Calcular y asignar el perímetro del Rectángulo.
*/

class Rectangulo : public Figura
{



};

/*
    Implementa la clase Círculo que hereda de Figura.
    Crear constructor de Círculo que herede del constructor de Figura.
    Calcular y asignar el perímetro del Círculo.
*/

class Circulo : public Figura
{

Circulo(int b, int h, );

};

#endif