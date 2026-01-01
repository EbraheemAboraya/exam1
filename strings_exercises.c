/*
 * STRINGS EXERCISES FOR BEGINNERS
 * Compile: gcc strings_exercises.c -o strings
 * Run: ./strings (or strings.exe on Windows)
 */

#include <stdio.h>
#include <string.h>

// Exercise 1: Print a string and find its length
void exercise1() {
    printf("\n=== Exercise 1: String Length ===\n");
    char name[50] = "Hello World";
    int length = 0;

    // Count characters manually
    while(name[length] != '\0') {
        length++;
    }

    printf("String: %s\n", name);
    printf("Length (manual count): %d\n", length);
    printf("Length (using strlen): %lu\n", strlen(name));
}

// Exercise 2: Copy one string to another
void exercise2() {
    printf("\n=== Exercise 2: Copy String ===\n");
    char source[50] = "Programming";
    char destination[50];
    int i = 0;

    // Copy manually
    while(source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
}

// Exercise 3: Compare two strings
void exercise3() {
    printf("\n=== Exercise 3: Compare Strings ===\n");
    char str1[50] = "Apple";
    char str2[50] = "Apple";
    char str3[50] = "Banana";
    int equal = 1;
    int i = 0;

    // Compare str1 and str2 manually
    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            equal = 0;
            break;
        }
        i++;
    }
    if(str1[i] != str2[i]) equal = 0;

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("Are they equal? %s\n", equal ? "Yes" : "No");

    printf("\nString 1: %s\n", str1);
    printf("String 3: %s\n", str3);
    printf("Are they equal? %s\n", strcmp(str1, str3) == 0 ? "Yes" : "No");
}

// Exercise 4: Count vowels in a string
void exercise4() {
    printf("\n=== Exercise 4: Count Vowels in a String ===\n");
    char text[100] = "Hello Programming";
    int vowel_count = 0;
    int i = 0;

    printf("String: %s\n", text);

    // Count vowels (a, e, i, o, u - both uppercase and lowercase)
    while(text[i] != '\0') {
        char ch = text[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel_count++;
        }
        i++;
    }

    printf("Number of vowels: %d\n", vowel_count);
}

// Exercise 5: Convert string to uppercase
void exercise5() {
    printf("\n=== Exercise 5: Convert String to Uppercase ===\n");
    char text[100] = "hello world";
    int i = 0;

    printf("Original string: %s\n", text);

    // Convert to uppercase
    while(text[i] != '\0') {
        if(text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] - 32;  // Convert to uppercase (ASCII difference)
        }
        i++;
    }

    printf("Uppercase string: %s\n", text);
}

int main() {
    printf("C STRINGS EXERCISES\n");
    printf("===================\n");

    exercise1();
    exercise2();
    exercise3();
    exercise4();
    exercise5();

    printf("\n=== All exercises completed! ===\n");
    return 0;
}
