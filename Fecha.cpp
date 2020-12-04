#include"Fecha.h"

Fecha::Fecha()
{
    dia = 5;
    mes = "noviembre";
    anio = 2020;
}
Fecha::Fecha(int elDia, string elMes, int elAnio)
{
    dia = elDia;
    mes = elMes;
    anio = elAnio;
}

void Fecha::setDia(int elDia)
{
    dia = elDia;
}
int Fecha::getDia()
{
    return dia;
}

void Fecha::setMes(string elMes)
{
    mes = elMes;
}
string Fecha::getMes()
{
    return mes;
}

void Fecha::setAnio(int elAnio)
{
    anio = elAnio;
}

int Fecha::getAnio()
{
    return anio;
}