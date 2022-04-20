#include "envioFedEx.h"

EnvioFedEx::EnvioFedEx(float peso, float distancia)
{
  this->peso = peso;
  this->distancia = distancia;
}

float EnvioFedEx::CalculoEnvio()
{
  int costo = 35;

  if (peso > 10)
  {
    costo += 10;
  }
  if (distancia > 500)
  {
    costo += 15;
  }

  return costo;
}