cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(pico_ecu C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()

add_executable(pico_ecu
  ecu.c
)

pico_enable_stdio_usb(pico_ecu 1)
pico_enable_stdio_uart(pico_ecu 1)

pico_add_extra_outputs(pico_ecu)

target_link_libraries(pico_ecu pico_stdlib)