#include <iostream>
#include <cstring>

void usage(char *programName){
    printf("Usage: %s number1 operation number2\n", programName);
    printf("Available operations:\n");
    printf("\tadd\n");
    printf("\tdiv\n");
    printf("\tmul\n");
    printf("\tsub\n");
    printf("\n");
}

int main(int argc, char* argv[]) {

    int number1 = 0;
    int number2 = 0;
    int result = 0;

    if (argc == 4) {
        number1 = atoi(argv[1]);
        number2 = atoi(argv[3]);

        if (!strcmp("add", argv[2])) {
            result = number1 + number2;
            printf("%d + %d = %d\n", number1, number2, result);
            return 0;
        }
        if (!strcmp("div", argv[2])) {
            if (number2!= 0) {
                result = number1 / number2;
                printf("%d / %d = %d\n", number1, number2, result);
            } else {
                if (number1 == 0) {
                    printf("%d / %d = NaN\n", number1, number2);
                } else if (number1 > 0) {
                    printf("%d / %d = +INF\n", number1, number2);
                } else {
                    printf("%d / %d = -INF\n", number1, number2);
                }
            }
            return 0;
        }
        if (!strcmp("mul", argv[2])) {
            result = number1 * number2;
            printf("%d * %d = %d\n", number1, number2, result);
            return 0;
        }

        if (!strcmp("sub", argv[2])) {
            result = number1 - number2;
            printf("%d - %d = %d\n", number1, number2, result);
            return 0;
        }
    }
}