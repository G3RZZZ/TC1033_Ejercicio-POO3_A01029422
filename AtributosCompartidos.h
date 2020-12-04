#include"Fecha.h"

#pragma once
class AtributosCompartidos
{
protected:
    int velGb;
    Fecha fechaCompra; //Fecha de Compra

public:
    void setVelGb(int laVelGb);
    int getVelGb();

    void setFechaCompra(Fecha laFechaCompra);
    Fecha getFechaCompra();
    
};