#include "tipoEnvio.h"
#include "envioServicioPostal.h"
#include <iostream>

using namespace std;

int main() {

  EnvioServicioPostal* envio1 = new EnvioServicioPostal(3, 4, 7.5);

  cout << envio1->CalculoEnvio() << endl;

  delete envio1;
}