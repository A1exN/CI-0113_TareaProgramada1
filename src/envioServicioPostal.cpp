#include "envioServicioPostal.h"

EnvioServicioPostal::EnvioServicioPostal(int clase, float peso, float distancia)
{
  this->clase = clase;
  this->distancia = distancia;
  this->peso = peso;
}

float EnvioServicioPostal::CalculoEnvio()
{
  return this->distancia * CostoPorKilometro();
}

float EnvioServicioPostal::CostoPorKilometro()
{
  if (this->clase == 3)
  {
    return 0.012;
  }
  else if (this->clase == 2)
  {
    if (this->peso < 4)
    {
      return 0.028;
    }
    else if (this->peso < 9)
    {
      return 0.053;
    }
    else
    {
      return 0.075;
    }
  }
  else if (this->clase == 1)
  {
    if (this->peso < 4)
    {
      return 0.3;
    }
    else if (this->peso < 9)
    {
      return 0.45;
    }
    else
    {
      return 0.6;
    }
  }
  return 0;
}