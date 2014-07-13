#include <pthread.h>
#include <iostream>

using namespace std;

int reader_num = 0;
int writer_num = 0;
pthread_mutex_t Rmutex;
pthread_cond_t reader, writer;

void init() {
  pthread_mutex_init(&Rmutex, NULL);
  pthread_mutex_init(&Wmutex, NULL);
  pthread_cond_init(&reader, NULL);
  pthread_cond_init(&writer, NULL);
}

void read_lock() {
  pthread_mutex_lock(&Wmutex);
  reader_num++;
  pthread_mutex_unlock(&Wmutex);
}

void read_unlock() {
  pthread_mutex_lock(&mutex);
  reader_num--;
  if (reader_num == 0) {
    pthead_cond_singal(&writer);
  }
  pthread_mutex_unlock(&mutex);
}

void write_operation(int* addr, int a) {
  pthread_mutex_lock(&Wmutex);
  while (true) {
    pthread_mutex_lock(&Rmutex);	  
    while (reader_num) {
      pthread_cond_wait(&writer, &mutex);
    }
    *addr = a;
    pthread_mutex_unlock(&Rmutex);
    break;
  }
  pthread_mutex_unlock(&Wmutex);
}
