cmake_minimum_required (VERSION 2.6)

project (LeitorCertificadoDigital)

find_package(OpenSSL)

include_directories(OpenSSL/include)

add_subdirectory(src)
add_subdirectory(OpenSSL)