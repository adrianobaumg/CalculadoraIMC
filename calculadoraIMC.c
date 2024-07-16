#include <stdio.h>

float calcular_imc(float altura, float peso){
    int imc=0;
    altura = altura*altura;
    imc = peso/altura;
    return imc;
}

void verificar_imc(float imc){
    printf("Resultado:");
    if (imc<16){printf("Magreza Grau III\n");
    } else if (imc >=16 && imc <=16.9) {printf("Magreza Grau II\n");    
    } else if (imc >=17 && imc <=18.4) {printf("Magreza Grau I\n");
    } else if (imc >=18.5 && imc <=24.9) {printf("Adequado\n");
    } else if (imc >=25 && imc <=29.9) {printf("Pŕe-Obeso\n");
    } else if (imc >=30 && imc <=34.9) {printf("Obesidade Grau I\n");
    } else if (imc >=35 && imc <=39.9) {printf("Obesidade Grau II\n");
    } else if (imc > 40) {printf("Obesidade Grau III\n"); }
}
int main (){
    float altura, peso, imc;
    int controle=1;

    while (controle==1) //para repetir até o usuario não quiser
    {   
    //obter informações
        printf("Sua altura (em Metros):");
        scanf("%f", &altura);    
        printf("Seu peso (em Kilogramas):");
        scanf("%f", &peso);   

    //executar contas 
        imc = calcular_imc(altura, peso);
        printf("Seu imc: %.2f\n", imc);
        verificar_imc(imc);
    //verificar se o usuário ainda quer realizar a tarefa novamente
    printf("Quer executar o programa novamente? (Digite 1 para sim ou 0 para não):");
    scanf("%d",&controle);

  } //fim while
    return 0;
}