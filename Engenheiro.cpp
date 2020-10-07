#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
    /* Método set */
		void setProjetos(double num_projetos){
			projetos = num_projetos;
		}

    void print(double horas){
			printEmpregado(horas);
			std::cout << "Projetos: " << projetos << std::endl; 
			std::cout << std::endl; 
		}

  protected:
    int projetos = 0;
	
};

