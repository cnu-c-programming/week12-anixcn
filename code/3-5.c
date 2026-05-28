#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* filename = "numbers.txt";

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }
    
    char buffer[256];
    int sum = 0;

    while (fscanf(fp, "%255s", buffer) == 1) {
        char* endptr;
        
        long value = strtol(buffer, &endptr, 10);
        if (buffer == endptr || *endptr != '\0')  continue;
        
        sum += (int) value;
    }

    printf("sum: %d\n", sum);
    fclose(fp);
    return 0;
}
