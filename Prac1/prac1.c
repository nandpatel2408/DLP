#include <stdio.h>
#include <string.h>

int main() {
    char str[10];
    int i = 0;
    int len;

    printf("Enter a string(with only a and b): ");
    scanf("%s", str);

    len = strlen(str);

    if (len < 2) {
        printf("Invalid String");
        return 0;
    }

    while (i < len && str[i] == 'a') {
        i++;
    }

    if (i < len - 1 && str[i] == 'b' && str[i + 1] == 'b' && i + 2 == len) {
        printf("Valid String");
    } else {
        printf("Invalid String");
    }
    return 0;
}