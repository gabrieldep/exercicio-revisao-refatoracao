#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
	double Vendedor::quotaTotalAnual() {
	  return quotaMensalVendas * 12;
	}	
};

