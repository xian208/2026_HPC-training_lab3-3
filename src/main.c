#include <stdio.h>
#include <mpi.h>
#include "parallel_pi.h"

#define NUM_STEPS 1000000

int main(int argc, char *argv[]) {
    MPI_Init(&argc, &argv);

    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    double pi = compute_pi(NUM_STEPS);

    if (rank == 0) {
        printf("Approximated Pi = %.10f\n", pi);
    }

    MPI_Finalize();
    return 0;
}
