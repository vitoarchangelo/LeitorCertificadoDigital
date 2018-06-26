add_executable (LeitorCertificadoDigital main.cpp)

target_link_libraries(LeitorCertificadoDigital OpenSSL::SSL)

set_target_properties(LeitorCertificadoDigital PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

install (TARGETS LeitorCertificadoDigital RUNTIME DESTINATION ${PROJECT_SOURCE_DIR}/_install)
