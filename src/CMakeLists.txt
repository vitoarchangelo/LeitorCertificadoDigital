include_directories ("${PROJECT_SOURCE_DIR}/includes")
find_package(OpenSSL)

add_executable (LeitorCertificadoDigital main.cpp)

set_target_properties(LeitorCertificadoDigital PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
install (TARGETS LeitorCertificadoDigital RUNTIME DESTINATION ${PROJECT_SOURCE_DIR}/_install)