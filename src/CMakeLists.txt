

add_executable (LeitorCertificadoDigital main.cpp)

target_link_libraries(LeitorCertificadoDigital ssl)

install (TARGETS LeitorCertificadoDigital RUNTIME DESTINATION ${PROJECT_SOURCE_DIR}/_install)

