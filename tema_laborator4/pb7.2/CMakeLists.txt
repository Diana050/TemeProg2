project(name)
cmake_minimum_required(VERSION 3.22)
set(LIB_NAME nameLib)
add_Library(${LIB_NAME} SHARED)
set(SRC_FILES 
      main.cpp
)
target_sources(${LIB_NAME}
    PUBLIC
       ${SRC_FILES}
)
target_include_directories(${LIB_NAME}
    PUBLIC
       ${SRC_FILES}
)
install(TARGETS ${LIB_NAME}
    DESTINATION "./Librarii C++"
)