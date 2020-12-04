#include<string>
#include"AtributosComunes.h"
#include"AtributosCompartidos.h"

using namespace std;

#pragma once
class ProcesadorGrafico : public AtributosComunes, public AtributosCompartidos
{
protected:
    string tipoTg; //Tipo de tarjeta gráfica
    

public:
    ProcesadorGrafico();
    ProcesadorGrafico(string elTipoTg);

    void setTipoTg(string elTipoTg);
    string getTipoTg();
};