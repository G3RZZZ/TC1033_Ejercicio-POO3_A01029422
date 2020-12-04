#include<string>
#include"AtributosComunes.h"
#include"ProcesadorGrafico.h"
#include"TarjetaMemoria.h"
#include"Fecha.h"
#include<iostream>

using namespace std;

#pragma once
class CamaraVideo : public AtributosComunes
{
protected:
    int precio; //precio de la cámara
    float resMpx; //Resolución en megapixeles(3.1, 15, 12, etc.. )
    TarjetaMemoria tarjetaMemoria;
    ProcesadorGrafico procesadorGrafico;
    Fecha fechaGrabacion; //fecha de grabación del video

public:
    CamaraVideo();
    CamaraVideo(int elPrecio, float laResMpx, TarjetaMemoria laTarjetaMemoria, ProcesadorGrafico elProcesadorGrafico, Fecha laFechaGrabacion);

    void setPrecio(int elPrecio);
    int getPrecio();

    void setResMpx(float laResMpx);
    float getResMpx();

    void setTarjetaMemoria(TarjetaMemoria laTarjetaMemoria);
    TarjetaMemoria getTarjetaMemoria();

    void setProcesadorGrafico(ProcesadorGrafico elProcesadorGrafico);
    ProcesadorGrafico getProcesadorGrafico();

    void setFechaGrabacion(Fecha laFechaGrabacion);
    Fecha getFechaGrabacion8();

    void imprimirDetallesCamara();
};
