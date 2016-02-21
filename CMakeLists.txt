cmake_minimum_required(VERSION 3.3)
project(c_cpp_diary)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(
        ALG
        src/alg/alg.c
        src/alg/main.c
)

set(
        BST
        src/data_structures/bst/bst.c
        src/data_structures/bst/main.c
)

set(
        DYNAMIC_ARRAY
        src/data_structures/dynamic_array/dynamic_array.c
        src/data_structures/dynamic_array/main.c
)

set(
        LINKED_LIST
        src/data_structures/linked_list/linked_list.c
        src/data_structures/linked_list/main.c
)

set(
        STACK
        src/data_structures/stack/main.c
        src/data_structures/stack/stack.c
)

set(
        GPCHAR
        src/io/gpchar.c
)

set(
        LS
        src/io/ls.c
)

set(
        STRLIB
        src/strlib/main.c
        src/strlib/strlib.c
)

set(
        CPP_TOUR
        src/cpp_tour/tour.cpp
        src/cpp_tour/Vector.cpp
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_subdirectory(src/util)

# alg
# -----------------------------------------------------
add_executable(alg ${ALG})

# bst
# -----------------------------------------------------
add_executable(bst ${BST})

# dynamic_array
# -----------------------------------------------------
add_executable(dynamic_array ${DYNAMIC_ARRAY})

# linked_list
# -----------------------------------------------------
add_executable(linked_list ${LINKED_LIST})

# stack
# -----------------------------------------------------
add_executable(stack ${STACK})

# gpchar
# -----------------------------------------------------
add_executable(gpchar ${GPCHAR})

# ls
# -----------------------------------------------------
add_executable(ls ${LS})

# strlib
# -----------------------------------------------------
add_executable(strlib ${STRLIB})
target_link_libraries(strlib util)

# cpp_tour
# -----------------------------------------------------
add_executable(cpp_tour ${CPP_TOUR})