#include <stdio.h>

int main()
{
    char inicio[20];
    char final[20];
    char rescisao[100]; 

    printf("Escreva a data da admiss�o: ");
    scanf("%19s", inicio); 

    printf("Escreva a data da demiss�o: ");
    scanf("%19s", final); 

    printf("Escreva o motivo da rescis�o: ");
    scanf(" %[^\n]s", rescisao); 

    printf("Data de admiss�o: %s\n", inicio);
    printf("Data de demiss�o: %s\n", final);
    printf("Motivo da rescis�o: %s\n", rescisao);

    return 0;
}

