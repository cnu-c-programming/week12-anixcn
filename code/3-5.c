#include <stdio.h>

int main(int argc, const char* argv[]){
    const char* filename = "numbers.txt";

    FILE* fp = fopen(filename,"r");
    if(fp == NULL){
        return 0;
    }

    int sum = 0;
    char buffer[256];

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        int value;

        if (sscanf(buffer, "%d", &value) == 1) sum += value;
        else  fprintf(stderr, "%s", buffer);
    }

    printf("sum: %d\n",sum);
    fclose(fp);
    return 0;
}
