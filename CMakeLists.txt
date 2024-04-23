cmake_minimum_required(VERSION 3.20)
project(HDF5PackageTest C CXX)

find_package(HDF5 REQUIRED COMPONENTS C CXX)
find_package(Threads REQUIRED)

add_executable(hdf5_test hdf5_test.cpp)

target_link_libraries(hdf5_test 
  PRIVATE hdf5::hdf5
)
