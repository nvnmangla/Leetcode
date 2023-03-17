add_executable(d_and_c d_and_c.cpp)
add_executable(insert insert.cpp)
add_executable(selection selection.cpp)
add_executable(heap heapsort.cpp)
add_executable(prior priority.cpp)
add_executable(quicksort quicksort.cpp)
add_executable(last_stone last_stone.cpp)



# add_executable(merge merge.cpp)




include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
