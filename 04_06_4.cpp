#include <stdio.h>

struct four_ints {
    int a : 8; // первые 8 бит зарезервированы для переменной a
    int b : 8; // следующие 8 бит зарезервированы для переменной b
    int c : 8; // следующие 8 бит зарезервированы для переменной c
    int d : 8; // следующие 8 бит зарезервированы для переменной d
};

int main() {
    struct four_ints my_int;
    my_int.a = 10;
    my_int.b = -20;
    my_int.c = 30;
    my_int.d = -40;
    printf("a = %d, b = %d, c = %d, d = %d\n", my_int.a, my_int.b, my_int.c, my_int.d);
    printf("my_int = %d\n", *(int*)&my_int); // выводим значение переменной как int
    return 0;
}
