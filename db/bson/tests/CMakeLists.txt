include_directories("${PROJECT_SOURCE_DIR}/third_party/includes")
include_directories("${PROJECT_SOURCE_DIR}/util")
include_directories("${PROJECT_SOURCE_DIR}/bson")

add_executable(test-bson main.cpp)
IF (LINUX)
	target_link_libraries (test-bson djon-bson djon-util ${LIBRARY_PREFIX}gtest.a ${LIBRARY_PREFIX}gtest_main.a rt uuid)
ENDIF (LINUX)
IF (DARWIN)
	target_link_libraries (test-bson djon-bson djon-util ${LIBRARY_PREFIX}gtest.a ${LIBRARY_PREFIX}gtest_main.a)
ENDIF (DARWIN)

IF (WIN32)
	target_link_libraries (test-bson djon-bson djon-util ${LIBRARY_PREFIX}gtest${LIBRARY_SUFFIX} ${LIBRARY_PREFIX}gtest_main${LIBRARY_SUFFIX})
ENDIF (WIN32)
add_test(test-bson test-bson)

