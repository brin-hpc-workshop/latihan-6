// OpenMP Sections
// BRIN HPC Workshop 2023
#include <omp.h>
#include <stdio.h>

int main() {
#pragma omp parallel sections
  {
#pragma omp section
    { printf("id = %d, \n", omp_get_thread_num()); }

#pragma omp section
    { printf("id = %d, \n", omp_get_thread_num()); }
  }
}