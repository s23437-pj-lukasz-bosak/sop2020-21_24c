#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
/*tworzenie wielu potomkow */
int main(){
    int i;
    pid_t masterPid = getpid();
    printf("masterpid:%d\n",masterPid);
    fflush(stdout);
    for(i=0;i<100;i++){
        if(getpid()==masterPid){
            
            if(fork()==0){
            printf("i=%d PID: %d\t PPID%d\n", i,getpid(), getppid());
            fflush(stdout);
            }
        }             
    }
    if(masterPid == getpid()){
        int status =0;
        waitpid(0, &status,0);
        printf("Rodzic zakal, koniec\n");
        fflush(stdout);
    }
return 0;

}