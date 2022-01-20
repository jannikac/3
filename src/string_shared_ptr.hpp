#ifndef STRING_SHARED_PTR_HPP
#define STRING_SHARED_PTR_HPP
#include "string.hpp"

class string_shared_ptr {
private:
public:
  // Konstruktor
  string_shared_ptr(string *ptr);
  // Copy-Konstruktor
  string_shared_ptr(const string_shared_ptr &a);
  void reset();
  string_shared_ptr operator->();
  ~string_shared_ptr();
};
#endif