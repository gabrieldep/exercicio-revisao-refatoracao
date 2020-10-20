#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    double salarioHora;  
    double quotaMensalVendas;  

  public:
    double pagamentoMes(double horasTrabalhadas);
    void setSalarioHora(double salarioHora);
    void setQuotaMensalVendas(double quotaMensalVendas);

    double getSalarioHora();
    double getQuotaMensalVendas();
};

#endif