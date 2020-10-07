#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
    /* Métodos gets e setters */
    double getSalarioHora(){
      return salarioHora;
    }
    void setSalarioHora(double valor){
      salarioHora = valor;
    }
    std::string getNome(){
      return nome;
    }
    void setNome(std::string nome){
      this->nome = nome;
    }

    //Calcula o pagamento do mês com base nas horas trabalhadas
    double pagamentoMes(double horasTrabalhadas) {
      double t = horasTrabalhadas;
	  	//Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	    return t * getSalarioHora();
    }

    void printEmpregado(double horas){
			std::cout << "Nome: " << nome << std::endl;
			std::cout << "Salario Mes: " << pagamentoMes(horas) << std::endl;  
		}

  protected:
    double salarioHora = 0.0; 
    std::string nome; 

};

#endif