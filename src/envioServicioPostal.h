#ifndef ENVIOSERVICIOPOSTAL_H
#define ENVIOSERVICIOPOSTAL_H

#include "tipoEnvio.h"
#include <string>

using namespace std;

class EnvioServicioPostal : public TipoEnvio
{

  // Primera, Segunda, Tercera
  string clase;
  float CostoPorKilometro();

  public:
  EnvioServicioPostal(string clase, float peso, float distancia);
  float CalculoEnvio();

};

#endif