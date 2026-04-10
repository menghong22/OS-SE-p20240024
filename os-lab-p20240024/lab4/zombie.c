/* zombie.c — Demonstrates a zombie process */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork");
        exit(1);
    }

    if (pid == 0) {
        /* Child — exits immediately, becoming a zombie */
        printf("Child (PID %d): I'm done. Exiting now.\n", getpid());
        exit(0);
    }else { // Parent process
    printf("Parent (PID %d): Sleeping 10s before reaping...\n", getpid());
    sleep(10);
    wait(NULL); // This reaps the zombie!
    printf("Parent: Child reaped. Check ps now—zombie should be gone.\n");
    sleep(5); // Gives you time to check ps one last time
}

    /* Parent — does NOT call wait(), so child becomes zombie */
    printf("Parent (PID %d): Child PID is %d. I will NOT call wait().\n", getpid(), pid);
    printf("Parent: Sleeping 60 seconds... check for zombie with 'ps aux | grep Z'\n");
    sleep(60);
    printf("Parent: Exiting now. The zombie will be cleaned up by init.\n");

    return 0;
}
