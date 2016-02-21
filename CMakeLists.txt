cmake_minimum_required(VERSION 3.3)
project(c_cpp_diary)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_subdirectory(src/util)

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

add_executable(alg ${ALG})
add_executable(bst ${BST})
add_executable(dynamic_array ${DYNAMIC_ARRAY})
add_executable(linked_list ${LINKED_LIST})
add_executable(stack ${STACK})
add_executable(gpchar ${GPCHAR})
add_executable(ls ${LS})

add_executable(strlib ${STRLIB})
target_link_libraries(strlib util)