cmake_minimum_required(VERSION 3.7)
project(udp2raw_tunnel)

set(SOURCE_FILES
        lib/aes_faster_c/aes.cpp
	lib/aes_faster_c/wrapper.cpp
        lib/md5.cpp
	lib/pbkdf2-sha1.cpp
	lib/pbkdf2-sha256.cpp
	client.cpp
	server.cpp
	fd_manager.cpp
	connection.cpp
        common.cpp
	my_ev.cpp
	misc.cpp
        encrypt.cpp
        log.cpp
        main.cpp
        network.cpp
        )
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wno-unused-variable -Wno-unused-parameter -Wno-missing-field-initializers")
add_executable(udp2raw_cmake ${SOURCE_FILES})
target_link_libraries(udp2raw_cmake ev rt pthread)
install (TARGETS udp2raw_cmake DESTINATION bin)

