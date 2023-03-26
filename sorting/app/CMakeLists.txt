


add_executable(d_and_c d_and_c.cpp)
add_executable(insert insert.cpp)
add_executable(selection selection.cpp) 
add_executable(heap heapsort.cpp)
add_executable(prior priority.cpp)
add_executable(quicksort quicksort.cpp)
add_executable(last_stone last_stone.cpp)
add_executable(count_sort sorting_n.cpp)
add_executable(project project.cpp)

#add_executable(merge merge.cpp)
target_link_libraries(project ${PYTHON_LIBRARIES})

include_directories(${CMAKE_SOURCE_DIR}/include)



# include("${scratch_CMAKE_DIR}/matplotlib_cppTargets.cmake")

# get_target_property(scratch_INCLUDE_DIRS matplotlib_cpp::matplotlib_cpp INTERFACE_INCLUDE_DIRECTORIES)