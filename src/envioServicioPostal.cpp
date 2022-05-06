#include "envioServicioPostal.h"

EnvioServicioPostal::EnvioServicioPostal(string clase, float peso, float distancia)
{
  this->clase = clase;
  this->distancia = distancia;
  this->peso = peso;
}

float EnvioServicioPostal::CalculoEnvio()
{
  // Si la clase es tecera
  float costoPorKilometro = 0.012;

  if (this->clase == "Segunda")
  {
    if (this->peso < 4)
    {
      costoPorKilometro = 0.028;
    }
    else if (this->peso < 9)
    {
      costoPorKilometro = 0.053;
    }
    else
    {
      costoPorKilometro = 0.075;
    }
  }
  else if (this->clase == "Primera")
  {
    if (this->peso < 4)
    {
      costoPorKilometro = 0.3;
    }
    else if (this->peso < 9)
    {
      costoPorKilometro = 0.45;
    }
    else
    {
      costoPorKilometro = 0.6;
    }
  }

  return this->distancia * costoPorKilometro;
}