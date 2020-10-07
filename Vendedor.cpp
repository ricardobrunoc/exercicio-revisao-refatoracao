#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {


  	public:
		
		/* Método set */
		void setQuotaMensal(double quota){
			quotaMensalVendas = quota;
		}   	  
		
		double quotaTotalAnual() {
			return quotaMensalVendas * 12;
		}

		void print(int horas){
			printEmpregado(horas);
			std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl; 
			std::cout << std::endl; 
		}

	protected:
		double quotaMensalVendas = 0.0;
	
};

