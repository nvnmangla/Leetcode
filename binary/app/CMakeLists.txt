
add_executable(search binary_search.cpp)
add_executable(mat 2d_mat.cpp)
add_executable(koko koko.cpp)






#add_executable(merge merge.cpp)

include_directories(${CMAKE_SOURCE_DIR}/include)



# include("${scratch_CMAKE_DIR}/matplotlib_cppTargets.cmake")

# get_target_property(scratch_INCLUDE_DIRS matplotlib_cpp::matplotlib_cpp INTERFACE_INCLUDE_DIRECTORIES)