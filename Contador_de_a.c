#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, ""); // Configura o locale para suportar caracteres UTF-8
    wchar_t str[100];
    int count = 0;

    printf("Digite uma string: ");
    fgetws(str, sizeof(str) / sizeof(wchar_t), stdin);

    for (int i = 0; i < wcslen(str); i++) {
        if (str[i] == L'a' || str[i] == L'A' || str[i] == L'á' || str[i] == L'à' || str[i] == L'â' || str[i] == L'ã' ||
            str[i] == L'Á' || str[i] == L'À' || str[i] == L'Â' || str[i] == L'Ã') {
            count++;
        }
    }

    if (count > 0) {
        printf("A letra 'a' (incluindo variações acentuadas) aparece %d vez(es).\n", count);
    } else {
        printf("A letra 'a' (incluindo variações acentuadas) não foi encontrada.\n");
    }

    return 0;
}
