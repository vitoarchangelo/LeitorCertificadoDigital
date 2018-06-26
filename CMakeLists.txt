cmake_minimum_required (VERSION 2.6)

project (LeitorCertificadoDigital)

find_package(OpenSSL REQUIRED)


#define o diretório da biblioteca
set (OPENSSL_LIBRARY_DIRS ${OPENSSL_LIBRARIES})

include_directories(OpenSSL/include)
link_directories(OpenSSL/lib)


MESSAGE(STATUS "Status OpenSSL: " ${OPENSSL_FOUND})
message("OpenSSL include dir: ${OPENSSL_INCLUDE_DIR}")
message("OpenSSL libraries: ${OPENSSL_LIBRARIES}")


add_subdirectory(src)




