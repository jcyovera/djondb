include_directories("${PROJECT_SOURCE_DIR}/third_party/includes")
include_directories("${PROJECT_SOURCE_DIR}/util")

add_executable(test-util main.cpp)
IF (LINUX)
	target_link_libraries (test-util djon-util ${LIBRARY_PREFIX}gtest.a ${LIBRARY_PREFIX}gtest_main.a rt uuid) 
ENDIF (LINUX)
IF (DARWIN)
	target_link_libraries (test-util djon-util ${LIBRARY_PREFIX}gtest.a ${LIBRARY_PREFIX}gtest_main.a) 
ENDIF (DARWIN)

IF (WIN32)
	target_link_libraries (test-util djon-util ${LIBRARY_PREFIX}gtest.a ${LIBRARY_PREFIX}gtest_main.a) 
ENDIF (WIN32)

add_test(test-util test-util)
