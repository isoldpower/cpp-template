add_library(tools
        tools.cpp tools.h
        named_tools.cpp named_tools.h)

target_link_libraries(tools PUBLIC cxx_setup)