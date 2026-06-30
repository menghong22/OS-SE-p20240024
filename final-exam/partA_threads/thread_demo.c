#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/syscall.h>

#define ORIGINAL_WORKERS 4

void* worker_routine(void* arg) {
    long id = (long)arg;
    pid_t tid = syscall(SYS_gettid);
    printf("[Worker %ld] Started. Kernel LWP ID: %d\n", id, tid);
    sleep(5); // Gives you time to extract the map
    printf("[Worker %ld] Finished.\n", id);
    return NULL;
}

int main() {
    pthread_t workers[ORIGINAL_WORKERS];
    printf("[Main] Spawning %d workers... Process PID: %d\n", ORIGINAL_WORKERS, getpid());
    
    for (long i = 0; i < ORIGINAL_WORKERS; i++) {
        pthread_create(&workers[i], NULL, worker_routine, (void*)i);
    }
    
    for (int i = 0; i < ORIGINAL_WORKERS; i++) {
        pthread_join(workers[i], NULL);
    }
    
    printf("[Main] All workers joined successfully.\n");
    return 0;
}
