#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

char *rot13(char *input) {
    char *output = (char *)malloc(strlen(input) + 1);
    if (output == NULL) {
        return NULL;
    }

    char *input_ptr = input;
    char *output_ptr = output;

    for (; *input_ptr != '\0'; input_ptr++, output_ptr++) {
        if ((*input_ptr >= 'A' && *input_ptr <= 'Z')) {
            *output_ptr = ((*input_ptr - 'A' + 13) % 26) + 'A';
        } else if ((*input_ptr >= 'a' && *input_ptr <= 'z')) {
            *output_ptr = ((*input_ptr - 'a' + 13) % 26) + 'a';
        } else {
            *output_ptr = *input_ptr;
        }
    }
    *output_ptr = '\0';

    return output;
}

int main() {
    char input[] = "Hello, World!";
    char *encoded = rot13(input);
    
    if (encoded) {
        printf("Original: %s\n", input);
        printf("Encoded : %s\n", encoded);
        free(encoded);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
