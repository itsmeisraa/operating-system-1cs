#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float avg = 0;

    if (argc < 2) {
        printf("please enter at least one param\n");
        return 1;
    } else {
        for (int i = 1; i < argc; i++) {
    avg = avg + atof(argv[i]); 
}
        
        avg = avg / (argc - 1);
        printf("the avg is %f\n", avg);
    }

    return 0;
}

    