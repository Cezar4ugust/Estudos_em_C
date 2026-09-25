#include <stdio.h>
#include <string.h>

int main(){
    char letra;
    int  quantPul = 0;
    char frase [50];
    char cifra[50];

    printf("Insira a quantidade de pulos: ");
    scanf("%d", &quantPul);
    printf("Insira a frase que voce quer cifrar (Letras maiusculas): ");
    scanf("%s", frase);
    
    for(int i = 0; i < strlen(frase); i++){
        //printf("%d", frase[i]);
        
        cifra[i] =  65 + (quantPul + frase[i] - 65) % 26;
        printf("%c", cifra[i]);
        
    }
    return 0;
}