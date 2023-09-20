// OpenMP Hello World
// BRIN HPC Workshop 2023
#include <omp.h>
#include <stdio.h>

int main() {
#pragma omp parallel num_threads(8)
  {
    int rank = omp_get_thread_num();
    int size = omp_get_num_threads();
    printf("Hello World dari thread %d / %d\n", rank, size);
  }
}
