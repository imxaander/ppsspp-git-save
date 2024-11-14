cmake_minimum_required(VERSION 3.10)
project(Imxgit)

set(LIBGIT2_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/libgit2/include")
set(LIBGIT2_LIBRARY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/libgit2-build/")

find_library(LIBGIT2_LIBRARY NAMES git2 PATHS ${LIBGIT2_LIBRARY_DIR})

include_directories(${LIBGIT2_INCLUDE_DIR})

add_executable(imxgit imxgit.cpp)
target_link_libraries(imxgit ${LIBGIT2_LIBRARY})