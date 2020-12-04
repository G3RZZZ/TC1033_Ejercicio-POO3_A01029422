#include<string>

using namespace std;


#pragma once
class AtributosComunes
{
protected:
    string marca;
    string modelo;

public:
    // AtributosComunes();
    // AtributosComunes(string laMarca, string elModelo, int laVelGb, Fecha laFechaCompra);
    // AtributosComunes(string laMarca, string elModelo, Fecha laFechaGrabacion);

    void setMarca(string laMarca);
    string getMarca();

    void setModelo(string elModelo);
    string getModelo();
};