# include"CamaraVideo.h"

CamaraVideo::CamaraVideo()
{
    precio = 77000;
    resMpx = 45;
    tarjetaMemoria = TarjetaMemoria();
    procesadorGrafico = ProcesadorGrafico();
    fechaGrabacion = Fecha();
}
CamaraVideo::CamaraVideo(int elPrecio, float laResMpx, TarjetaMemoria laTarjetaMemoria, ProcesadorGrafico elProcesadorGrafico, Fecha laFechaGrabacion)
{
    precio = elPrecio;
    resMpx = laResMpx;
    tarjetaMemoria = laTarjetaMemoria;
    procesadorGrafico = elProcesadorGrafico;
    fechaGrabacion = laFechaGrabacion;
}

void CamaraVideo::setPrecio(int elPrecio)
{
    precio = elPrecio;
}
int CamaraVideo::getPrecio()
{
    return precio;
}

void CamaraVideo::setResMpx(float laResMpx)
{
    resMpx = laResMpx;
}
float CamaraVideo::getResMpx()
{
    return resMpx;
}

void CamaraVideo::setTarjetaMemoria(TarjetaMemoria laTarjetaMemoria)
{
    tarjetaMemoria = laTarjetaMemoria;
}
TarjetaMemoria CamaraVideo::getTarjetaMemoria()
{
    return tarjetaMemoria;
}

void CamaraVideo::setProcesadorGrafico(ProcesadorGrafico elProcesadorGrafico)
{
    procesadorGrafico = elProcesadorGrafico;
}
ProcesadorGrafico CamaraVideo::getProcesadorGrafico()
{
    return procesadorGrafico;
}

void CamaraVideo::setFechaGrabacion(Fecha laFechaGrabacion)
{
    fechaGrabacion = laFechaGrabacion;
}
Fecha CamaraVideo::getFechaGrabacion8()
{
    return fechaGrabacion;
}

void CamaraVideo::imprimirDetallesCamara()
{
    cout <<"hola, soy el método que imprime los detalles de la cámara" << endl;
    // cout << "Los atributos de la camára son: Marca "<< marca << ", Modelo ";
    // cout << modelo << ", de precio " << precio << ", resolución en mega pixeles ";
    // cout << resMpx << ", con Tarjeta de memoria " << endl;
    // cout << tarjetaMemoria << ", con procesador gráfico ";
    // cout << procesadorGrafico << ", y con fecha de grabación del video " << fechaGrabacion << endl;
}

