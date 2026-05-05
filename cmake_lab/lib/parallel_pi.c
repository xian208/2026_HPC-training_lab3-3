#include "parallel_pi.h"
#include <mpi.h>
#include <stdio.h>

double compute_pi(int num_steps) {
    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    double step = 1.0 / num_steps;
    double local_sum = 0.0;

    // Each process handles a portion of the steps
    for (int i = rank; i < num_steps; i += size) {
        double x = (i + 0.5) * step;
        local_sum += 4.0 / (1.0 + x * x);
    }
    local_sum *= step;

    printf("Process %d / %d: local_sum = %f\n", rank, size, local_sum);

    // Reduce all local sums to get Pi
    double pi = 0.0;
    MPI_Reduce(&local_sum, &pi, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);

    return pi;
}
