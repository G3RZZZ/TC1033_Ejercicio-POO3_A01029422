#include"ProcesadorGrafico.h"

ProcesadorGrafico::ProcesadorGrafico()
{
    tipoTg = "GPU1";

}
ProcesadorGrafico::ProcesadorGrafico(string elTipoTg)
{
    tipoTg = elTipoTg;
}

void ProcesadorGrafico::setTipoTg(string elTipoTg)
{
    tipoTg = elTipoTg;
}
string ProcesadorGrafico::getTipoTg()
{
    return tipoTg;
}