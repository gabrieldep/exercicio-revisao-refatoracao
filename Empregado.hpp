#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    double salarioHora;  
    double quotaMensalVendas; 
    std::string nome;  

  public:
    double pagamentoMes(double horasTrabalhadas);
    void setSalarioHora(double salarioHora);
    void setQuotaMensalVendas(double quotaMensalVendas);
    void setNome(std::string nomeP);

    double getSalarioHora();
    double getQuotaMensalVendas();
    std::string getNome();
};

#endif