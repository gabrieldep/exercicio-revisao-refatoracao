#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  	double Vendedor::quotaTotalAnual() {
		return quotaMensalVendas * 12;
	}	
};

