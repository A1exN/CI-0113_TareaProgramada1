# Tipos de Envío

Este programa permite calcular el costo de diferentes tipos
de envío que va a utilizar una compañía. El objetivo final es que la empresa pueda calcular el
valor de los envíos.

Los tipos de envío son los siguientes:

**Tipo 1: Servicio Postal**

| Kg | Primera clase por Km | Segunda clase por Km | Tercera clase por Km |
|----|----------------------|----------------------|----------------------|
| <4 | 0.300                | 0.0280               | 0.0120               |
| <9 | 0.450                | 0.0530               | 0.0120               |
| 9+ | 0.600                | 0.0750               | 0.0120               |

**Tipo 2: FedEx**

Costo base = 35.00

- Si la distancia es mayor que 500 km, entonces al costo del envío se le suma 15.00.
- Si el peso es mayor a 10 Kg, entonces al costo se le suma 10.00.
