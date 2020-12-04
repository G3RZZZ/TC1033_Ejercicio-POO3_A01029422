#include<string>

using namespace std;

#pragma once
class Fecha
{
protected:
    int dia;
    string mes;
    int anio;

public:
    Fecha();
    Fecha(int elDia, string elMes, int elAnio);

    void setDia(int elDia);
    int getDia();

    void setMes(string elMes);
    string getMes();

    void setAnio(int elAnio);
    int getAnio();
};