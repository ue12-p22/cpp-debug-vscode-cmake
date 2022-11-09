
file(GLOB SRC_APP ./*.cpp )


foreach(file ${SRC_APP})
    get_filename_component(FNAME ${file} NAME)
    string(REPLACE ".cpp" ".out" name ${FNAME})
    add_executable(${name} ${file})
    target_link_libraries(${name} PUBLIC ${PROJECT_NAME})
endforeach()