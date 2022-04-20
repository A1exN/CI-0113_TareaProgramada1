#ifndef ENVIOFEDEX_H
#define ENVIOFEDEX_H

#include "tipoEnvio.h"

class EnvioFedEx
{

public:
  EnvioFedEx(float peso, float distancia);
  float CalculoEnvio();

};

#endif