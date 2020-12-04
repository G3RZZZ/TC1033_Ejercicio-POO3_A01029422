#include"TarjetaMemoria.h"

TarjetaMemoria::TarjetaMemoria ()
{
    tipoTarjeta = "SD";
}
TarjetaMemoria::TarjetaMemoria(string elTipoTarjeta)
{
    tipoTarjeta = elTipoTarjeta;
}

void TarjetaMemoria::setTipoTarjeta(string elTipoTareta)
{
    tipoTarjeta = elTipoTareta;
}
string TarjetaMemoria::getTipoTarjeta()
{
    return tipoTarjeta;
}