#include<stdio.h> // standard input output
#include<math.h>
#include<string.h>

// integer -> %d
// float -> %f
// char -> %c

void to_binary(int num) {
    for (int i = 31; i >= 0; i--) {
        int c = num & (1 << i);
        int d = c != 0 ? 1 : 0;
        printf("%d", d);
    }
    printf("\n");
}

void greet_in_japanese() {
    printf("Konnichiwa\n");
}

void greet(char *s) {
    printf("Hi %s\n", s);
}

char* what_is_my_name() {
    return "Taara";
}

int sum1(int a, int b) {
    return a + b;
}

void sum2(int a, int b, int* c) {
    *c = a + b;    
}


int main() {
    // int a;
    // float b;
    // char c;
    // scanf("%d %f %c", &a, &b, &c);
    // printf("a = %d, b = %f, c = %c\n", a, b, c);
    
    // int a = 3;
    // scanf("%d", &a);
    // if (a == 3) {
    //     printf("It is smallest odd prime number\n");
    // }
    // else if (a == 2) {
    //     printf("It is the only even prime number\n");
    // }
    // else {
    //     printf("It is something else\n");
    // }
    
    // for loop
    // Method 1 - Compact
    // for (int i = 0; i < 3; i++) {
    //     printf("i = %d\n", i);
    // }
    
    // Method 2 - Just for fun
    // int i = 0;
    // for (; ;) {
    //     if (!(i < 3)) {
    //         break;
    //     }
    //     printf("i = %d\n", i);
    //     i++;
    // }
    
    // Method - 1
    // int i = 3;
    // while (i < 3) {
    //     printf("i = %d\n", i);
    //     i++;
    // }
    
    // Method - 2
    // int i = 0;
    // while (1) {
    //     if (i >= 3) {
    //         break;
    //     }
    //     printf("i = %d\n", i);
    //     i++;
    // }
    
    // runs at least one time
    // int i = 3;
    // do {
    //     printf("i = %d\n", i);
    //     i++;
    // } while (i < 3);
    
    // unary operators
    // int a = 4, b;
    // b = a++; // post increment operator => b = a; a = a + 1;
    // b = ++a; // pre increment operator =>     a = a + 1; b = a;
    // printf("a = %d, b = %d\n", a, b);
    
    // binary operators => operates on 2 operands
    // int c = a + b;
    // int c = a - b;
    // int c = a * b;
    // int c = a / b; // runtime exception if b == 0
    // int c = a % b;
    
    // + is unary as well as binary // it depends on its usage
    // int x = +4;
    // int y = -3;
    
    // ternary operator
    // int x;
    // if (a == 3) {
    //     x = 1;
    // }
    // else {
    //     x = 2;
    // }
    
    // compact way of doing the above task
    // int x = a == 3 ? 1 : 2;
    
    // bitwise & operator
    // int a = 6, b = 10;
    // int c = a & b;
    // printf("c = %d\n", c);
    
    // bitwise | operator
    // int a = 6, b = 10;
    // int c = a | b;
    // printf("c = %d\n", c);
    
    // bitwise ^ operator
    // int a = 6, b = 10;
    // int c = a ^ b;
    // printf("c = %d\n", c);
    
    // bitwise ~ operator
    // int a = 15; // 8 + 4 + 2 + 1 // 0000000000000000000000001111
    // to_binary(a);
    // int b = ~a;
    // to_binary(b);
    // printf("b = %u\n", b); // b = -16
    // printf("b = %d\n", b); // b = 4294967280 , will cover this later
    
    // Functions
    // greet("Taara");
    // greet_in_japanese();
    // char* my_name = what_is_my_name();
    // printf("My name is %s\n", my_name);
    // int a = 1, b = 2;
    // int c = sum1(a, b);
    // int c; sum2(a, b, &c);
    // printf("a = %d, b = %d, c = %d", a, b, c);
    
    // Arrays
    // int a[5];
    // a[0] = 1;
    // a[1] = 54;
    // a[2] = 13;
    // a[3] = 13;
    // a[4] = 16;
    // for (int i = 0; i < 5; i++) {
    //     printf("%d ", a[i]);
    // }
    // printf("\n");
    
    // char b[10] = "Shaivya";
    // printf("%d", strlen(b));
    return 0;
}