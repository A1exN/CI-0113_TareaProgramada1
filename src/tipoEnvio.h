#ifndef TIPOENVIO_H
#define TIPOENVIO_H

class TipoEnvio {
  
  protected:
  float distancia;
  float peso;

  public:
  virtual float CalculoEnvio() = 0;
  ~TipoEnvio() {}

};

#endif