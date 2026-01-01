/*
 * ARRAYS EXERCISES FOR BEGINNERS
 * Compile: gcc arrays_exercises.c -o arrays
 * Run: ./arrays (or arrays.exe on Windows)
 */

#include <stdio.h>

// Exercise 1: Print all elements in an array
void exercise1() {
    printf("\n=== Exercise 1: Print Array Elements ===\n");
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("Array elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

// Exercise 2: Find sum of array elements
void exercise2() {
    printf("\n=== Exercise 2: Sum of Array Elements ===\n");
    int numbers[6] = {5, 10, 15, 20, 25, 30};
    int sum = 0;

    for(int i = 0; i < 6; i++) {
        sum += numbers[i];
    }

    printf("Sum of all elements: %d\n", sum);
}

// Exercise 3: Find largest element in array
void exercise3() {
    printf("\n=== Exercise 3: Find Largest Element ===\n");
    int numbers[7] = {23, 67, 12, 89, 45, 34, 91};
    int largest = numbers[0];

    for(int i = 1; i < 7; i++) {
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("Largest element: %d\n", largest);
}

// Exercise 4: Count even and odd numbers in array
void exercise4() {
    printf("\n=== Exercise 4: Count Even and Odd Numbers ===\n");
    int numbers[8] = {12, 7, 23, 8, 15, 4, 31, 20};
    int even_count = 0;
    int odd_count = 0;

    printf("Array: ");
    for(int i = 0; i < 8; i++) {
        printf("%d ", numbers[i]);
    }

    // Count even and odd numbers
    for(int i = 0; i < 8; i++) {
        if(numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("\nEven numbers count: %d\n", even_count);
    printf("Odd numbers count: %d\n", odd_count);
}

// Exercise 5: Search for an element in array
void exercise5() {
    printf("\n=== Exercise 5: Search for an Element ===\n");
    int numbers[6] = {15, 42, 8, 73, 25, 91};
    int search = 73;
    int found = 0;
    int position = -1;

    printf("Array: ");
    for(int i = 0; i < 6; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\nSearching for: %d\n", search);

    // Search for the element
    for(int i = 0; i < 6; i++) {
        if(numbers[i] == search) {
            found = 1;
            position = i;
            break;
        }
    }

    if(found) {
        printf("Element %d found at position %d (index %d)\n", search, position+1, position);
    } else {
        printf("Element %d not found in the array\n", search);
    }
}

int main() {
    printf("C ARRAYS EXERCISES\n");
    printf("==================\n");

    exercise1();
    exercise2();
    exercise3();
    exercise4();
    exercise5();

    printf("\n=== All exercises completed! ===\n");
    return 0;
}
