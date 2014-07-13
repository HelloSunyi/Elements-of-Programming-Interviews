#include <pthread.h>
#include <iostream>

using namespace std;

int flag = 0;
pthread_mutex_t mutex;
pthread_cond_t reader, writer;

void init() {
  pthread_mutex_init(&mutex, NULL);
  pthread_cond_init(&reader, NULL);
  pthread_cond_init(&writer, NULL);
}

void read_lock() {
  pthread_mutex_lock(&mutex);
  while (flag) {
    pthread_cond_wait(&reader, &mutex);
  }
  pthread_mutex_unlock(&mutex);
}

void read_unlock() {
  pthread_mutex_lock(&mutex);
  flag = 1;
  pthead_cond_singal(&writer);
  pthread_mutex_unlock(&mutex);
}

void write_lock() {
  pthread_mutex_lock(&mutex);
  while (!flag) {
    pthread_cond_wait(&writer, &mutex);
  }
  pthread_mutex_unlock(&mutex);
}

void write_unlock() {
  pthread_mutex_lock(&mutex);
  flag = !flag;
  pthread_cond_signal(&reader);
  pthread_mutex_unlock(&mutex);
}
