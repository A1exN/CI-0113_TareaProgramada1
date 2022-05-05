#ifndef ENVIOFEDEX_H
#define ENVIOFEDEX_H

#include "tipoEnvio.h"

class EnvioFedEx : public TipoEnvio
{

public:
  EnvioFedEx(double peso, double distancia);
  double CalculoEnvio();

};

#endif