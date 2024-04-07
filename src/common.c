#include "common.h"

void free_matrix(int **matrix, int H) {
  for (int i = 0; i < H; i++) {
    free(matrix[i]);
  }

  free(matrix);
}
