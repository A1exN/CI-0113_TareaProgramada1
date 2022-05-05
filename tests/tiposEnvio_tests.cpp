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

    EXPECT_FLOAT_EQ(actual, esperado);

    delete envio;
  }

  TEST(envio_servicio_postal_Test, terceraClase_pesoDe4a8)
  {
    EnvioServicioPostal* envio = new EnvioServicioPostal("Tercera", 5, 311);

    double actual = envio->CalculoEnvio();
    double esperado = 3.732;

    EXPECT_FLOAT_EQ(actual, esperado);

    delete envio;
  }

  TEST(envio_servicio_postal_Test, terceraClase_pesoDe9Mas)
  {
    EnvioServicioPostal* envio = new EnvioServicioPostal("Tercera", 13, 173);

    double actual = envio->CalculoEnvio();
    double esperado = 2.076;

    EXPECT_FLOAT_EQ(actual, esperado);

    delete envio;
  }

  TEST(envio_servicio_postal_Test, segundaClase_pesoDe0a3)
  {
    EnvioServicioPostal* envio = new EnvioServicioPostal("Segunda", 3, 237);

    double actual = envio->CalculoEnvio();
    double esperado = 6.636;

    EXPECT_FLOAT_EQ(actual, esperado);

    delete envio;
  }
  
  TEST(envio_servicio_postal_Test, segundaClase_pesoDe4a8)
  {
    EnvioServicioPostal* envio = new EnvioServicioPostal("Segunda", 5, 311);

    double actual = envio->CalculoEnvio();
    double esperado = 16.483;

    EXPECT_FLOAT_EQ(actual, esperado);

    delete envio;
  }

  TEST(envio_servicio_postal_Test, segundaClase_pesoDe9Mas)
  {
    EnvioServicioPostal* envio = new EnvioServicioPostal("Segunda", 13, 173);

    double actual = envio->CalculoEnvio();
    double esperado = 12.975;

    EXPECT_FLOAT_EQ(actual, esperado);

    delete envio;
  }

  TEST(envio_servicio_postal_Test, primeraClase_pesoDe0a3)
  {
    EnvioServicioPostal* envio = new EnvioServicioPostal("Primera", 3, 237);

    double actual = envio->CalculoEnvio();
    double esperado = 71.1;

    EXPECT_FLOAT_EQ(actual, esperado);

    delete envio;
  }
  
  TEST(envio_servicio_postal_Test, primeraClase_pesoDe4a8)
  {
    EnvioServicioPostal* envio = new EnvioServicioPostal("Primera", 5, 311);

    double actual = envio->CalculoEnvio();
    double esperado = 139.95;

    EXPECT_FLOAT_EQ(actual, esperado);

    delete envio;
  }

  TEST(envio_servicio_postal_Test, primeraClase_pesoDe9Mas)
  {
    EnvioServicioPostal* envio = new EnvioServicioPostal("Primera", 13, 173);

    double actual = envio->CalculoEnvio();
    double esperado = 103.8;

    EXPECT_FLOAT_EQ(actual, esperado);

    delete envio;
  }

  TEST(envio_FedEx_Test, distanciaMenorA500Km_pesoMenorA10Kg)
  {
    EnvioFedEx* envio = new EnvioFedEx(7, 178);

    double actual = envio->CalculoEnvio();
    double esperado = 35;

    EXPECT_FLOAT_EQ(actual, esperado);

    delete envio;
  }

  TEST(envio_FedEx_Test, distanciaMayorA500Km_pesoMenorA10Kg)
  {
    EnvioFedEx* envio = new EnvioFedEx(7, 691);

    double actual = envio->CalculoEnvio();
    double esperado = 50;

    EXPECT_FLOAT_EQ(actual, esperado);

    delete envio;
  }

  TEST(envio_FedEx_Test, distanciaMenorA500Km_pesoMayorA10Kg)
  {
    EnvioFedEx* envio = new EnvioFedEx(14, 178);

    double actual = envio->CalculoEnvio();
    double esperado = 45;

    EXPECT_FLOAT_EQ(actual, esperado);

    delete envio;
  }

  TEST(envio_FedEx_Test, distanciaMayorA500Km_pesoMayorA10Kg)
  {
    EnvioFedEx* envio = new EnvioFedEx(14, 691);

    double actual = envio->CalculoEnvio();
    double esperado = 60;

    EXPECT_FLOAT_EQ(actual, esperado);

    delete envio;
  }
}