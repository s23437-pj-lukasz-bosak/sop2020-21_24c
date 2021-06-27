#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){

    int input;

    
       
    /* scanf("%d", &input); */
    pid_t pid = fork();

    if(pid >0){
        printf("R PID: %d\tPPID: %d\n", getpid(), getppid());
        waitpid(0, &input, 0);
        printf("rodzic zakonczyl czekac na swoje dziecko\n");
        /* rodzic */
    }else if (pid == 0) {
        printf("D PID: %d\tPPID: %d\n", getpid(), getppid());
        /* dziecko */
    }else {
        printf("nie udalo sie utworzyc dziecka\n");
        /* dziecka nie udalo sie utworzyc. */
    }


return 0;

}