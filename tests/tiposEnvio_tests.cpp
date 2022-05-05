#include <gtest/gtest.h>
#include "../src/envioServicioPostal.h"
#include "../src/envioFedEx.h"

namespace
{
  TEST(envio_servicio_postal_Test, terceraClase_pesoDe0a3)
  {
    EnvioServicioPostal* envio = new EnvioServicioPostal("Tercera", 3, 237);

    double actual = envio->CalculoEnvio();
    double esperado = 2.844;

    EXPECT_DOUBLE_EQ(actual, esperado);

    delete envio;
  }
}