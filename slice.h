#ifndef SLICE__H
#define SLICE__H

#include <stdlib.h>

enum TYPE {
  INT = 1,
  FLOAT = 2,
  CHAR = 3
};

void* slice(void *sourceArr, int from, int to, enum TYPE type) {
  size_t size = to - from;
  void *sliceArr = NULL;
  switch (type) {
    case INT:
      sliceArr = (int*) malloc(sizeof(int) * (size));
      sourceArr += (sizeof(int) * from);
      for(int i=0; i<size; i++) {
         *(int*)sliceArr = *(int*)sourceArr;
         sourceArr += (sizeof(int) * 1);
         sliceArr += (sizeof(int) * 1);
      }
      sourceArr -= (sizeof(int) * (to - from));
      sliceArr -= (sizeof(int) * size);
      break;
    case FLOAT:
      sliceArr = (float*) malloc(sizeof(float) * (size));
      sourceArr += (sizeof(float) * from);
      for(int i=0; i<size; i++) {
         *(float*)sliceArr = *(float*)sourceArr;
         sourceArr += (sizeof(float) * 1);
         sliceArr += (sizeof(float) * 1);
      }
      sourceArr -= (sizeof(float) * (to - from));
      sliceArr -= (sizeof(float) * size);
      break;
    case CHAR:
      sliceArr = (char*) malloc(sizeof(char) * (size));
      sourceArr += (sizeof(char) * from);
      for(int i=0; i<size; i++) {
         *(char*)sliceArr = *(char*)sourceArr;
         sourceArr += (sizeof(char) * 1);
         sliceArr += (sizeof(char) * 1);
      }
      sourceArr -= (sizeof(char) * (to - from));
      sliceArr -= (sizeof(char) * size);
      break;
    default:
      break;
  }

  return sliceArr;
}

#endif