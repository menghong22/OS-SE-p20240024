#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handle_sigint(int sig) {
    printf("\n[SIGNAL RECEIVED] Intercepted SIGINT (%d).\n", sig);
    printf("[CLEANUP] Flushing diagnostic logs and closing active channels...\n");
    printf("[EXIT] System state preserved. Exiting cleanly.\n");
    exit(0);
}

int main() {
    signal(SIGINT, handle_sigint);
    printf("[Signal Demo] Application running under PID: %d\n", getpid());
    printf("[Signal Demo] Press Ctrl+C to test the structural interrupt handler...\n");
    
    while(1) {
        sleep(1);
    }
    return 0;
}
