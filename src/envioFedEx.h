#ifndef ENVIOFEDEX_H
#define ENVIOFEDEX_H

#include "tipoEnvio.h"

class EnvioFedEx : public TipoEnvio
{

public:
  EnvioFedEx(float peso, float distancia);
  float CalculoEnvio();

};

#endif