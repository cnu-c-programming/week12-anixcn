#include <stdio.h>

int main(int argc, const char* argv[], const char* envp[]) {
    
    while (*envp != NULL) {
        printf("%s\n", envp);
        envp++;
    }

    return 0;
}
