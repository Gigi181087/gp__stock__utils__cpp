cmake_minimum_required(VERSION 3.16)
project(gp_stock_utils LANGUAGES CXX)

add_library(gp_stock_utils
    src/average_directional_index.cpp
    src/supertrend.cpp
    src/true_range.cpp
)

target_include_directories(gp_stock_utils
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(gp_stock_utils
    PUBLIC
        cxx_std_17
)