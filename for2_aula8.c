#include <stdio.h>
#include <string.h>

//Converter uma palavra para a "Cifra de César"

int main(){

    char alfabeto[26];
        for(int k = 0; k < 26; k++){
            alfabeto[k] = 'A' + k;
        }
    char frase[99], resposta[99];
    fgets(frase,sizeof(frase),stdin);

    for(int i = 0; i <= strlen(frase); i++){
        for(int j = 0; j < 26; j++){
            if((frase[i] == alfabeto[j])&&(frase[i] < 'W')){
                resposta[i] = alfabeto[j] + 4;
            }
            if(frase[i] == ' '){
                resposta[i] = ' ';
            }
            if(frase[i] == 'W'){
                resposta[i] = 'A';
            }
            if(frase[i] == 'X'){
                resposta[i] = 'B';
            }
            if(frase[i] == 'Y'){
                resposta[i] = 'C';
            }
            if(frase[i] == 'Z'){
                resposta[i] = 'D';
            }
        }
    }
     printf("%s ", resposta);
}
