#ifndef COMMON_H
#define COMMON_H

#define FIELD_H 20
#define FIELD_W 10

#include <stdlib.h>

typedef struct {
  int **field;
  int **next;
  int score;
  int high_score;
  int level;
  int speed;
  int pause;
} GameInfo_t;

typedef enum { None, GameStart, GamePause } Banner;

void free_matrix(int **matrix, int H);

#endif