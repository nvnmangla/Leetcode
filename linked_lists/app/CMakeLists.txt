add_executable(sll sll.cpp)
add_executable(problem problem.cpp)
# add_executable(reorder_list reorder_list.cpp)
add_executable(remove_n remove_n.cpp)
# add_executable(deep_copy deep_copy.cpp)
add_executable(add_two add_two.cpp)

add_executable(find_dup find_dup.cpp)
add_executable(lru lru_cache.cpp)
add_executable(k_sorted k_sorted.cpp)

# add_executable(merge merge.cpp)




include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
