#include <stdio.h>

// Função para calcular o IMC (Índice de Massa Corporal)
float calcular_imc(float altura, float peso) {
    float imc = 0;
    altura = altura * altura; // Calcula a altura ao quadrado
    imc = peso / altura; // Calcula o IMC
    return imc; // Retorna o IMC calculado
}

// Função para verificar a categoria do IMC
void verificar_imc(float imc) {
    printf("Resultado: ");
    if (imc < 16) {
        printf("Magreza Grau III\n");
    } else if (imc >= 16 && imc <= 16.9) {
        printf("Magreza Grau II\n");
    } else if (imc >= 17 && imc <= 18.4) {
        printf("Magreza Grau I\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Adequado\n");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Pré-Obeso\n");
    } else if (imc >= 30 && imc <= 34.9) {
        printf("Obesidade Grau I\n");
    } else if (imc >= 35 && imc <= 39.9) {
        printf("Obesidade Grau II\n");
    } else if (imc >= 40) {
        printf("Obesidade Grau III\n");
    }
}

// Função principal
int main() {
    float altura, peso, imc;
    int controle = 1;

    while (controle == 1) { // Loop para repetir até o usuário não quiser mais
        // Obter informações do usuário
        printf("Sua altura (em metros): ");
        scanf("%f", &altura);
        printf("Seu peso (em quilogramas): ");
        scanf("%f", &peso);

        // Calcular o IMC
        imc = calcular_imc(altura, peso);
        printf("Seu IMC: %.2f\n", imc);

        // Verificar a categoria do IMC
        verificar_imc(imc);

        // Verificar se o usuário quer realizar a tarefa novamente
        printf("Quer executar o programa novamente? (Digite 1 para sim ou 0 para não): ");
        scanf("%d", &controle);
    } // Fim do loop while

    return 0;
}
