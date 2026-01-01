#include <stdio.h>
#include <string.h>

// int main() {
//     char word[] = "Hello";

//     for (int i = 0; word[i] != '\0'; i++) {
//         printf("%c\n", word[i]);
//     }

//     return 0;
// }



// int main() {
//     char a[] = "Hello";
//     char b[] = "Hello1";

//     if (strcmp(a, b) == 0) {
//         printf("Strings are equal\n");
//     } else {
//         printf("Strings are NOT equal\n");
//     }

//     return 0;
// }


int main() {
    char a[] = "Hello";
    char b[] = "Hello";

    int i = 0;
    int equal = 1;   // assume they are equal

    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] != b[i]) {
            equal = 0;
            break;
        }
        i++;
    }

    if (equal) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are NOT equal\n");
    }

    return 0;
}