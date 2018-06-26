cmake_minimum_required (VERSION 2.6)

project (LeitorCertificadoDigital)

find_package(OpenSSL REQUIRED)
find_library(SSL_LIB libssl.a REQUIRED )

include_directories ("${PROJECT_SOURCE_DIR}")

include_directories(OpenSSL/include)

set(OPENSSL_USE_STATIC_LIBS TRUE)

MESSAGE(STATUS "Status OpenSSL: " ${OpenSSL})
message("OpenSSL include dir: ${OPENSSL_INCLUDE_DIR}")
message("OpenSSL libraries: ${OPENSSL_LIBRARIES}")



add_subdirectory(src)
