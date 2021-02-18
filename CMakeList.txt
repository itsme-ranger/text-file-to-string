add_library(text-file-to-string
  text_file_to_string.cpp
)

target_include_directories(text-file-to-string
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
