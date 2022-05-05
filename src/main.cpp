//#include "tipoEnvio.h"
#include "envioServicioPostal.h"
#include "envioFedEx.h"
#include <iostream>

using namespace std;

int main() {

  EnvioServicioPostal* envio1 = new EnvioServicioPostal("Segunda", 4, 632);
  EnvioFedEx* envio2 = new EnvioFedEx(11, 434);

  cout << envio1->CalculoEnvio() << endl;
  cout << envio2->CalculoEnvio() << endl;

  delete envio1;
  delete envio2;

}