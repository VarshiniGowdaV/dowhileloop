#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    int length = strlen(str);
    int i = length - 1;

    printf("Reversed string: ");

    do {
        printf("%c", str[i]);
        i--;
    } while(i >= 0);

    printf("\n");

    return 0;
}
