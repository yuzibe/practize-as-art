cmake_minimum_required(VERSION 3.10)
project(c11-practices C)

set(CMAKE_C_STANDARD 11)

add_executable(c11-_Generic _Generic/_Generic.c)
add_executable(c11-static_assert static_assert/static_assert.c)
add_executable(c11-__auto_type __auto_type/__auto_type.c)