# TODO 3: build parallel_pi.c as a library
add_???(parallel_pi parallel_pi.c)

# TODO 4: add the header directory to parallel_pi
# (hint: main.c, which links to parallel_pi, also includes parallel_pi.h -- PUBLIC or PRIVATE?)
target_include_directories(parallel_pi ____ ${PROJECT_SOURCE_DIR}/include)

# TODO 5: link MPI to this library
target_link_libraries(____ PUBLIC MPI::MPI_C)
