#ifndef PARALLEL_PI_H
#define PARALLEL_PI_H

// Compute Pi using numerical integration with MPI
// Each process computes a portion of the integration
// Returns the approximated value of Pi
double compute_pi(int num_steps);

#endif
