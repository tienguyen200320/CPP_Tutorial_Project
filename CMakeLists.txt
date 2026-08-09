# # Yêu cầu phiên bản CMake tối thiểu
# cmake_minimum_required(VERSION 3.12)

# # Tên dự án
# project(ProjectCPP)

# # Thiết lập chuẩn C++
# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

# # Tạo file thực thi từ mã nguồn
# # Cách 1: liệt kê tay các file .cpp
# # set(SOURCES main.cpp main2.cpp src/main4.cpp)
# # Cách 2: dùng file(GLOB ...) để lấy các file .cpp ở thư mục gốc
# # file(GLOB SOURCES "*.cpp")
# # Cách 3: dùng file(GLOB_RECURSE ...) để lấy các file .cpp trong thư mục gốc và thư mục con
# # Nhưng không lấy thư mục build, vì thư mục build chứa file do CMake tạo ra
# # (bao gồm CMakeCXXCompilerId.cpp có hàm main() gây lỗi multiple definition).
# file(GLOB SOURCES
#     "${CMAKE_SOURCE_DIR}/*.cpp"
#     "${CMAKE_SOURCE_DIR}/src/*.cpp"
# )
# add_executable(ProjectCPP ${SOURCES})
# # Lưu ý: khi thêm file mới, nếu dùng file(GLOB ...) cần chạy lại CMake để cập nhật.


cmake_minimum_required(VERSION 3.15)

project(MyTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# # Path to GoogleTest
# set(GOOGLETEST_DIR
#     "C:/Users/DELL/tien/Desktop/GGTest/googletest"
# )
find_package(GTest CONFIG REQUIRED)

# # get folder ggtest in the project root - same location with CMakeLists.txt
# add_subdirectory(googletest) 
# Add GoogleTest
# add_subdirectory(
#     ${GOOGLETEST_DIR}
#     ${CMAKE_BINARY_DIR}/googletest-build
# )

add_executable(my_test
    ggtestcheck.cpp
)

target_link_libraries(my_test
    PRIVATE
    GTest::gtest_main
)