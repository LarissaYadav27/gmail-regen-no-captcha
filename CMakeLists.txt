cmake_minimum_required(VERSION 3.16)
project(gmail-regen-no-captcha CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(gmailregennocaptcha
    src/main.cpp
    src/regen.cpp
    src/captcha.cpp
)

target_include_directories(gmailregennocaptcha PRIVATE include)

if(WIN32)
    target_link_libraries(gmailregennocaptcha PRIVATE userenv)
endif()
