# TODO 6: build main.c as an executable
add_???(main main.c)

# TODO 7: link the parallel_pi library and MPI
# (hint: first blank is the executable name, second blank must match the library name in lib/CMakeLists.txt)
target_link_libraries(____ PRIVATE ____ MPI::MPI_C)
