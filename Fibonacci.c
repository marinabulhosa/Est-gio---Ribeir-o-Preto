#include <stdio.h>

// Função para verificar se o número pertence à sequência de Fibonacci
int pertenceFibonacci(int numero) {
    int a = 0, b = 1, c = 0;
    
    // Verifica se o número informado é 0 ou 1, que são os primeiros números da sequência
    if (numero == 0 || numero == 1) {
        return 1;
    }

    // Gera a sequência de Fibonacci e verifica se o número informado pertence a ela
    while (c < numero) {
        c = a + b;
        a = b;
        b = c;
    }
    
    // Retorna 1 se o número foi encontrado na sequência, 0 caso contrário
    return (c == numero);
}

int main() {
    int numero;

    // Solicita o número ao usuário
    printf("Informe um número: ");
    scanf("%d", &numero);

    // Verifica se o número pertence à sequência de Fibonacci
    if (pertenceFibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
