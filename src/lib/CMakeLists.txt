
file(GLOB SRC ./*.cpp)

add_library(${PROJECT_NAME} SHARED ${SRC})

install(TARGETS ${PROJECT_NAME} EXPORT ${PROJECT_NAME}-Export
  LIBRARY DESTINATION lib
)

install(EXPORT ${PROJECT_NAME}-Export
    FILE ${PROJECT_NAME}.cmake
    DESTINATION lib/cmake
)