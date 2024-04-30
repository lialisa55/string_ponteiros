#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vetor[26], *p;

    fgets(vetor, sizeof(vetor), stdin);

    p = vetor;

    while(*p != '\0'){
        printf("%c\n", *p++);
    }
    return 0;
}
