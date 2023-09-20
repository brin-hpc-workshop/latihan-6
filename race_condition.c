// Lingkup Variabel OpenMP
// BRIN HPC Workshop 2023
#include <omp.h>
#include <stdio.h>

int main() {
  int i = 0;
  const int N = 1000;
  int sum = 0;

  double start = omp_get_wtime();

// #pragma omp parallel for private(i) shared(sum)
#pragma omp parallel for private(i) reduction(+ : sum)
  for (i = 0; i < N; i++) {
    // #pragma omp critical
    // #pragma omp atomic
    sum += i;
  }

  double end = omp_get_wtime();

  printf("sum = %d seharusnya sum = 1000\n", sum);
  printf("Waktu = %f s\n", end - start);
}