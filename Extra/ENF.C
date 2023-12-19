/*
#include <stdio.h>
#include <pthread.h>

void *printHello(void *threadID) {
    long tid = (long)threadID;
    printf("Hello World from Thread %ld!\n", tid);
    pthread_exit(NULL); 
}

int main() {
    pthread_t threads[5]; 
    for (long i = 0; i < 5; i++) {
        int status = pthread_create(&threads[i], NULL, printHello, (void *)i);
        if (status) {
            printf("Error creating thread %ld: %d\n", i, status);
            return -1;
        }
    }
    for (long i = 0; i < 5; i++) {
        pthread_join(threads[i], NULL);
    }
    printf("All threads have finished.\n");
    pthread_exit(NULL);
}

*/