#include "text_file_to_string.hpp"

// if throwing: 'std::length_error'
//    what():  basic_string::_M_create
// then possibly you are inputting a wrong path file
std::string TextFileToString(const std::string& path_file) {
  std::ifstream t_(path_file);
  std::string str_;

  t_.seekg(0, std::ios::end);
  str_.reserve(t_.tellg());
  t_.seekg(0, std::ios::beg);

  str_.assign((std::istreambuf_iterator<char>(t_)),
              std::istreambuf_iterator<char>());
  return str_;
}
