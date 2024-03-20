#ifndef EA02.h
#define EA02 .h

#include <iostream>

using namespace std;

class Figura
{
private:
    int b, h;
    float p;

public:
    Figura()
    {
        this->b = 0;
        this->h = 0;
    }
    Figura(int b, int h);
    void setPerimetro(float a);
    float getPerimetro();
};

float Figura::getPerimetro()
{
    return p;
}

void Figura::setPerimetro(float a)
{
    this->p = a;
}

/////////////////////////////////////////////////////

class Cuadrado : public Figura
{
public:
    Cuadrado(int b) : Figura(b, b)
    {
        setPerimetro(b * 4);
    };
};

class Rectangulo : public Figura
{
public:
    Rectangulo(int b, int h) : Figura(b, h)
    {
        setPerimetro(b + b + h + h);
    };
};

class Circulo : public Figura
{
    public: 
    Circulo(int b ) : Figura(b, b)
    {
        setPerimetro(b + b + h + h);
    }
};

;

#endif