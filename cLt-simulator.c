/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int horasTrabalhadas , dependentes, horasExtrasTrabalhadas, gratificacao;
    float salarioMinimo , horas, horasExtras, salarioBruto, salarioLiquido, dependentesValor;
    
    printf("\n-----------------------------------------------------------------------\n");
    printf("\n digite o valor do salario minimo: ");
    scanf("%f", & salarioMinimo);
    printf("\n digite quanto custa cada hora de trabalho: ");
    scanf("%f", & horas);
    printf("\n digite quanto custa cada hora extra de trabalho: ");
    scanf("%f", & horasExtras);
    printf("\n digite quantos dependentes o funcionario tem: ");
    scanf("%d", & dependentes);
    printf("\n-----------------------------------------------------------------------\n");
    printf("\n digite quantas horas o funcionario trabalhou: ");
    scanf("%d", & horasTrabalhadas);
    printf("\n digite quantas horas extras o funcionario trabalhou: ");
    scanf("%d", & horasExtrasTrabalhadas);
    printf("\n digite quanto o funcionario ganha de adicional para cada dependente: ");
    scanf("%f", & dependentesValor);
    printf("------------------------------------------------------------------------\n");
    
    
    salarioBruto = salarioMinimo + (horas * (float)horasTrabalhadas ) + (horasExtras * (float)horasExtrasTrabalhadas) + ((float)dependentes * dependentesValor);
    
    if(salarioBruto > 500 ){
        salarioLiquido = salarioBruto - (salarioBruto * 0.20);
    }else if(salarioBruto < 500 && salarioBruto > 200){
        salarioLiquido = salarioBruto - (salarioBruto * 0.10);
    }else if(salarioBruto < 200){
        salarioLiquido == salarioBruto;
    }
    
    if(salarioLiquido > 350 ){
        salarioLiquido = salarioLiquido + 50;
    }
    if(salarioLiquido < 350 ){
        salarioLiquido = salarioLiquido + 100;
    }
    
    printf("\n O trabalhador trabalhou %d horas, fez %d horas extras e tem %d dependentes.\n Desta forma o salario Bruto dele eh R$%2.f.\n retirando os impostos e adicionando as gratificacoes fica R$%2.f   ",horasTrabalhadas,horasExtrasTrabalhadas,dependentes,salarioBruto, salarioLiquido);
     printf("\n------------------------------------------------------------------------\n");
    
}

