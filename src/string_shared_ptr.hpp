#ifndef STRING_SHARED_PTR_HPP
#define STRING_SHARED_PTR_HPP
#include "rc.hpp"
#include "string.hpp"
#include <cstdlib>

class string_shared_ptr {
private:
  rc *reference;
  string *strptr;

public:
  // Konstruktor
  string_shared_ptr(string *ptr);
  // Copy-Konstruktor
  string_shared_ptr(const string_shared_ptr &other);
  void reset();
  string *operator->();
  ~string_shared_ptr();
};
#endif