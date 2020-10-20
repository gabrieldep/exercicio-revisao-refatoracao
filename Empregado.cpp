#include <iostream>
#include <string>
#include "Empregado.hpp"

class Empregado {

    double Empregado::pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	  return t * salarioHora;
    }	

    void Empregado::setSalarioHora(double salario){
        salarioHora = salario;
    }

    void Empregado::setQuotaMensalVendas(double quotaMensal){
        quotaMensalVendas = quotaMensal;
    }

    void Empregado::setNome(std::string nomeP){
        nome = nomeP;
    }

    double Empregado::getSalarioHora(){
        return salarioHora;
    }

    double Empregado::getQuotaMensalVendas(){
        return quotaMensalVendas;
    }

    std::string Empregado::getNome(){
        return nome;
    }
}