#include <stdio.h>

int main() {
    char str[] = "John 25 3.14";
    char name[20];
    int age;
    float height;

    sscanf(str, "%s %d %f", name, &age, &height);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);

    return 0;
}
