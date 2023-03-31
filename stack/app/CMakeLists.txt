
add_executable(valid_parantheses valid_parantheses.cpp)
add_executable(min_stack min_stack.cpp)
add_executable(reverse_polish reverse_polish.cpp)
add_executable(gen generate_parantheses.cpp)
add_executable(temp daily_temp.cpp)
add_executable(fleet car_fleet.cpp)




#add_executable(merge merge.cpp)

include_directories(${CMAKE_SOURCE_DIR}/include)



# include("${scratch_CMAKE_DIR}/matplotlib_cppTargets.cmake")

# get_target_property(scratch_INCLUDE_DIRS matplotlib_cpp::matplotlib_cpp INTERFACE_INCLUDE_DIRECTORIES)