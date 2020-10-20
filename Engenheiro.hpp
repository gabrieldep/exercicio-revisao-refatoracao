#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

    private:
        int projetos;	

    public:
        void setProjetos(int i);
        int getProjetos();
};

#endif
