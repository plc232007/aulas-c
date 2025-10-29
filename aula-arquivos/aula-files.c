#include <stdio.h>

void exemplo1() {
    int n;
    // escrita para o console
    printf("Digite um número: "); //stdin
    // leitura do console
    scanf("%d", &n); // stdout
    // escrita para o console
    printf("O número digitado foi: %d\n", n);
}

void exemplo2() {
    int n;
    // escrita para o console
    fprintf(stdin, "Digite um número: "); // dados formatados para arquivo
    // leitura do console
    fscanf(stdin, "%d", &n);
    // escrita para o console
    fprintf(stdout, "O número digitado foi: %d\n", n);
}

void exemplo3() {
    puts("Hello, World! (puts)"); // escreve uma string no stdout co nova linha
    fputs("Hello, World! (fputs)", stdout);
}

int main() {
    
    // exemplo1();
    exemplo1();
    exemplo2();
    exemplo3();
    return 0;
}

