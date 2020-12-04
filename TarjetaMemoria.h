#include<string>
#include"AtributosComunes.h"
#include"AtributosCompartidos.h"

using namespace std;

#pragma once
class TarjetaMemoria : public AtributosComunes, public AtributosCompartidos
{
protected:
    string tipoTarjeta; //tipo de tarjeta (sd, microsd, minisd...ect)

public:
    TarjetaMemoria();
    TarjetaMemoria(string elTipoTarjeta);

    void setTipoTarjeta(string elTipoTareta);
    string getTipoTarjeta();
    
};