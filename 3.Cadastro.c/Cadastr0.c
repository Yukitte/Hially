#include <stdio.h>

int main() {
        // Definindo a estrutura para armazenar os dados do cliente
        char nome[50];
        int idade;
        char matricula[20];
        char endereco[100];
        char curso[50];
        int periodo;
        char disciplinas[100];
        float mensalidade;
    
        // Solicitando e lendo os dados do cliente
        printf("Cadastro de Cliente\n");
        printf("Nome: ");
        fgets(nome,200,stdin);
    
        printf("Idade: ");
        scanf("%d", &idade);
    
        printf("Matrícula: ");
        scanf("%s", matricula);
    
        printf("Endereço: ");
        scanf("%s", &endereco);
    
        printf("Curso: ");
        scanf("%s", curso);
    
        printf("Período: ");
        scanf("%d", &periodo);
    
        printf("Disciplinas: ");
        scanf("%s", disciplinas);
    
        printf("Mensalidade: ");
        scanf("%f", &mensalidade);
    
        // Exibindo os dados do cliente
        printf("_\n");
        printf("Dados do Cliente:\n");
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Matrícula: %s\n", matricula);
        printf("Endereço: %s\n", endereco);
        printf("Curso: %s\n", curso);
        printf("Período: %d\n", periodo);
        printf("Disciplinas: %s\n", disciplinas);
        printf("Mensalidade: R$%.3f\n", mensalidade);
    
        return 0;
    }