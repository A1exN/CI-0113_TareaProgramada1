#ifndef TIPOENVIO_H
#define TIPOENVIO_H

class TipoEnvio {
  
  protected:
  double distancia;
  double peso;

  public:
  virtual double CalculoEnvio() = 0;

};

#endif