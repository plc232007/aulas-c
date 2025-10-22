#include <stdio.h>
#include <stdlib.h>


void escrever_txt(char *nome_arquivo, int n, int vet[n]) {

    FILE *arquivo;

    arquivo = fopen(nome_arquivo, "w");

    if (arquivo == NULL) {
        printf ("Erro: não foi possível abrir o arquivo '%s'\n", nome_arquivo);        
        return;
    }

    fprintf(arquivo, "Gravando %d elementos no arquivo:\n", n);
    fprintf(arquivo, "----------------------------------\n");

    for (int i = 0; i < n; i++) {
        fprintf (arquivo, "%d\n", vet[i]);
    }

    fclose(arquivo);

    printf("Vetor gravado com sucesso no arquivo '%s'!\n", nome_arquivo);
}

void exemplo1() {
    int n;
    // escrita para o console
    // stdout
    printf("Digite um número: ");
    // leitura do console
    // stdin
    scanf("%d", &n);
    // escrita para o console
    // stdout
    printf("O número digitado foi: %d\n", n);
}

void exemplo2() {
    int n;
    // escrita para o console
    fprintf(stdout, "Digite um número: ");
    // leitura do console
    fscanf(stdin, "%d", &n);
    // escrita para o console
    fprintf(stdout, "O número digitado foi: %d\n", n);
}

void exemplo3() {
    // stdout
    puts("Hello, World! (puts)"); // escreve uma string no stdout co nova linha
    fputs("Hello, World! (fputs)", stdout);
}

void codigo_base_operacao_arquivos() {
    FILE *fp;
    fp = fopen("caminho_ate_arquivo.extensao", "modo_abertura");
    if(fp == NULL) {
        // fprintf(stderr, "Erro ao abrir o arquivo!\n");
        fputs("Erro ao abrir o arquivo!", stderr);
        return;
    }
    // continuar com operações de leitura / escrita
    
    fclose(fp);
}

int main() {
    
    // 1. O nome do arquivo que queremos criar
    char* meu_arquivo = "notas_finais.txt";

    // 2. Os dados que queremos salvar
    int notas[] = { 100, 85, 72, 94, 51 };
    
    // 3. O tamanho do nosso vetor
    // (Forma segura de calcular o tamanho de um array em C)
    int tamanho = sizeof(notas) / sizeof(notas[0]);

    // 4. Chamar a função com nossos dados
    escrever_txt(meu_arquivo, tamanho, notas);

    // Você pode chamar de novo com outros dados
    int idades[] = { 25, 30, 42 };
    int tamanho_idades = sizeof(idades) / sizeof(idades[0]);
    
    escrever_txt("idades_usuarios.txt", tamanho_idades, idades);

    return 0;
}