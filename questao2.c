#include <stdio.h>
#include <string.h>

void inverterString(char str[]) {
    int comprimento = strlen(str);
    int i, j;

    for (i = 0, j = comprimento - 1; i < j; i++, j--) {
       
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char minhaString[100]; 
    printf("Digita algo ai :) : ");
    fgets(minhaString, sizeof(minhaString), stdin);

   
    minhaString[strcspn(minhaString, "\n")] = '\0';

    inverterString(minhaString);

    printf("aqui esta esse algo invertido ;) : %s\n", minhaString);

    return 0;
}
