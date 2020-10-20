#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  void Engenheiro::setProjetos(int i){
    projetos = i;
  }

  int Engenheiro::getProjetos(){
    return projetos;
  }
};

