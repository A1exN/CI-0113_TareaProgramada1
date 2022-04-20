#ifndef ENVIOSERVICIOPOSTAL_H
#define ENVIOSERVICIOPOSTAL_H

#include "tipoEnvio.h"

class EnvioServicioPostal : public TipoEnvio
{

  // Primera, Segunda, Tercera
  int clase;
  float CostoPorKilometro();

  public:
  EnvioServicioPostal(int clase, float peso, float distancia);
  float CalculoEnvio();

};

#endif