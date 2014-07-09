#include <pthread.h>
#include <iostream>

using namespace std;

int reader_num = 0;
int writer_num = 0;
pthread_mutex_t mutex;
pthread_cond_t reader, writer;

void init() {
  pthread_mutex_init(&mutex, NULL);
  pthread_cond_init(&reader, NULL);
  pthread_cond_init(&writer, NULL);
}

void read_lock() {
  pthread_mutex_lock(&mutex);
  while (writer_num) {
    pthread_cond_wait(&reader, &mutex);
  }
  reader_num++;
  pthread_mutex_unlock(&mutex);
}

void read_unlock() {
  pthread_mutex_lock(&mutex);
  reader_num--;
  if (reader_num == 0) {
    pthead_cond_singal(&writer);
  }
  pthread_mutex_unlock(&mutex);
}

void write_lock() {
  pthread_mutex_lock(&mutex);
  while (writer_num || reader_num) {
    pthread_cond_wait(&writer, &mutex);
  }
  writer_num++;
  pthread_mutex_unlock(&mutex);
}

void write_unlock() {
  pthread_mutex_lock(&mutex);
  writer_num--;
  pthread_cond_signal(&writer);
  pthread_cond_broadcast(&reader);
  pthread_mutex_unlock(&mutex);
}
