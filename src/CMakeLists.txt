# Build main.c as executable
# TODO
add_???(main main.c)

# Link the parallel_pi library and MPI
# TODO (hint: first blank is the executable name, second blank must match the library name in lib/CMakeLists.txt)
target_link_libraries(____ ____ MPI::MPI_C)
