cmake_minimum_required(VERSION 3.3)
project(c_cpp_diary)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    alg/alg.c
    alg/alg.h
    alg/main.c
    data_structures/bst/bst.c
    data_structures/bst/bst.h
    data_structures/bst/main.c
    data_structures/dynamic_array/dynamic_array.c
    data_structures/dynamic_array/dynamic_array.h
    data_structures/dynamic_array/main.c
    data_structures/linked_list/linked_list.c
    data_structures/linked_list/linked_list.h
    data_structures/linked_list/main.c
    data_structures/stack/main.c
    data_structures/stack/stack.c
    data_structures/stack/stack.h
    io/gpchar.c
    io/ls.c
    strlib/main.c
    strlib/strlib.c
    strlib/strlib.h
    util.c
    util.h)

add_executable(c_cpp_diary ${SOURCE_FILES})