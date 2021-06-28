#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(int argc, char** argv){

    int input;
    int liczba=atoi(argv[1]);
       
    /* scanf("%d", &input); */
    
    pid_t pid = fork();
        

    if(pid >0){
        int suma=0;
        int i;
        for(i=0; i<=liczba; i++){
            suma+=i;
        }
        waitpid(0, &input, 0);
        printf("Duma z rzodzica: %d\n", suma);
        /* rodzic */
    }else if (pid == 0) {
        int i;
        for(i=1; i<=liczba;i=i+2){
            
            printf("dziecko, liczba nieparzysta: %d\n", i);
        }
        /* dziecko */
    }else {
        printf("nie udalo sie utworzyc dziecka\n");
        /* dziecka nie udalo sie utworzyc. */
    }


return 0;

}