// 1. Use mutex to make a critical region.
// 2. Use mutex and cond to implement barrier.

// Original barrier:
pthread_barrier_t barrier;
pthread_barrier_init(&barrier, NULL, num_of_threads);
//threads creation and execution.
pthread_barrier_wait(&barrier); // returns PTHREAD_BARRIER_SERIAL_THREAD for last thread.

// Use mutex and cond to implement barrier.
pthread_mutex_t mutex;
pthread_cond_t cond;
int num_threads;

void pbarrier_init(int num) {
  pthread_mutex_init(&mutex, NULL);
  pthread_cond_init(&cond, NULL);
  num_threads = num;
}

int pbarrier_wait() {
  pthread_mutex_lock(&mutex);
  num_threads--;
  if (num_threads == 0) {
    //last threads;
    pthread_cond_broadcost(&cond);
    pthread_mutex_unlock(&mutex);
    return PTHREAD_BARRIER_SERIAL_THREAD;
  }
  pthread_cond_wait(&cond, &mutex);
  pthread_mutex_unlock(&mutex);
  return 0;
}

