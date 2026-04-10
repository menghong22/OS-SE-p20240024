#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    for(int i = 0; i < 3; i++) {
        if(fork() == 0) {
            printf("Child %d (PID %d) started.\n", i+1, getpid());
            sleep(30); // Stay alive for the screenshot
            return 0;
        }
    }
    // Parent waits for all three
    printf("Parent (PID %d) waiting for children...\n", getpid());
    for(int i = 0; i < 3; i++) wait(NULL);
    return 0;
}o

