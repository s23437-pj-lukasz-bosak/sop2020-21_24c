#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
/*tworzenie wielu potomkow */
int main(){
    int i;
    for(i=0;i<100;i++){
        pid_t pid = fork();
        if(pid>0){
            wait(NULL); /*czekamy na zakonczenie dziecka */
            break;
        }else{
            printf("i=%d PID: %d\t PPID%d\n", i,getpid(), getppid());
        }
       
    }

return 0;

}