cmake_minimum_required (VERSION 2.6)

project (LeitorCertificadoDigital)

find_package(OpenSSL REQUIRED)

MESSAGE(STATUS "Diretorio OpenSSL: " ${OpenSSL})

set (OPENSSL_LIBRARY_DIRS OpenSSL/lib)

# define os caminhos para o biblioteca 
include_directories(OpenSSL/include)

add_subdirectory(src)
