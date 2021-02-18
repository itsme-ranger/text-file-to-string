#include <fstream>
#include <streambuf>
#include <memory>
#include <string>

// if throwing: 'std::length_error'
//    what():  basic_string::_M_create
// then possibly you are inputting a wrong path file
std::string TextFileToString(const std::string& path_file);
