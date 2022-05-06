//#include "tipoEnvio.h"
#include "envioServicioPostal.h"
#include "envioFedEx.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<TipoEnvio *> envios;

  EnvioServicioPostal* envio1 = new EnvioServicioPostal("Segunda", 4, 632);
  envios.push_back(envio1);

  EnvioFedEx* envio2 = new EnvioFedEx(11, 434);
  envios.push_back(envio2);

  EnvioServicioPostal* envio3 = new EnvioServicioPostal("Tercera", 13, 173);
  envios.push_back(envio3);

  EnvioFedEx* envio4 = new EnvioFedEx(14, 691);
  envios.push_back(envio4);

  float totalMontoEnvios {};

  for (TipoEnvio* envio : envios)
  {
    totalMontoEnvios += envio->CalculoEnvio();
    delete envio;
  }

  cout << "El monto total de los envíos es de " << totalMontoEnvios << std::endl;

}