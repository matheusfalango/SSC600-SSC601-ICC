#include <stdio.h>
#include <string.h>

void cifraCesar(char frase[], int chave) {
    int i;
    char ch;

    for(i = 0; frase[i] != '\0'; ++i) {
        ch = frase[i];

        if(ch >= 'a' && ch <= 'z') {
            ch = ch + chave;

            if(ch > 'z') {
                ch = ch - 'z' + 'a' - 1;
            }

            frase[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z') {
            ch = ch + chave;

            if(ch > 'Z') {
                ch = ch - 'Z' + 'A' - 1;
            }

            frase[i] = ch;
        }
    }
}

int main() {
    char frase[100];
    int chave;

    printf("Digite a frase para criptografar: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Digite a chave de criptografia (um número entre 1 e 25): ");
    scanf("%d", &chave);

    if(chave < 1 || chave > 25) {
        printf("Chave inválida!\n");
        return 1;
    }

    cifraCesar(frase, chave);

    printf("Frase criptografada: %s\n", frase);

    return 0;
}
