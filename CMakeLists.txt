cmake_minimum_required(VERSION 3.17)
project(czh_stock_platform)

set(CMAKE_CXX_STANDARD 11)

add_executable(czh_stock_platform
        main.cpp CompanyRanker.cpp)
