// Lingkup Variabel OpenMP
// BRIN HPC Workshop 2023
#include <omp.h>
#include <stdio.h>

int main() {
  int i = 0;
  const int N = 1000;
  int a = 10;
  int b = 0;

// #pragma omp parallel for default(shared)
// #pragma omp parallel for default(none) private(i, a, b)
// #pragma omp parallel for default(none) private(i, a) lastprivate(b)
#pragma omp parallel for private(i) firstprivate(a) lastprivate(b)
  for (i = 0; i < N; i++) {
    b += a;
  }

  printf("a = %d b = %d seharusnya a = 50 b = 1009\n", a, b);
}