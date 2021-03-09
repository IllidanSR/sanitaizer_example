set(NAME_APP ICOL.example.sanitaizer.app_san)
set(CMAKE_CXX_STANDARD 20)

set(LIB_A_NAME ICOL.example.sanitaizer.lib_a)
set(LIB_B_NAME ICOL.example.sanitaizer.lib_b)
set(ADDRESS_SANITAIZER_LIB asan)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=leak -g")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -g")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=undefined -g")


add_executable(${NAME_APP} main.cpp)

target_link_libraries(${NAME_APP} PUBLIC ${LIB_A_NAME})
target_link_libraries(${NAME_APP} PUBLIC ${LIB_B_NAME})
target_link_libraries(${NAME_APP} PUBLIC ${ADDRESS_SANITAIZER_LIB})