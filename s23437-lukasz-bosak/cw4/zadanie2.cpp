#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {

// int i=0;    i musi byc zdefiniowane ponad pętla.
   
//    for(i=0; i<argc; i++){
//        printf("%d\n", atoi(argv[i]));
//   }


if(argc==2){
    int i=0;
    int j=0;
    int wiersze=atoi(argv[1]);
    printf("Wiersze: %d\n", wiersze);
        for(i=0;i<wiersze;i++){
            for(j=0;j<wiersze-i;j++){
                printf(" ");
            }
            for(j=0;j<i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
}

    return 0;
    
}