#include <stdio.h>

int main(int argc, char** argv) {

    for(int i=0;; i<argc; i++){
        printf("%d\n", argv[i]);

    }

    return 0;
    
}