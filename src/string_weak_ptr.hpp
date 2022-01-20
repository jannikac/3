#ifndef STRING_WEAK_PTR_HPP
#define STRING_WEAK_PTR_HPP
#include "string.hpp"

class string_weak_ptr {
private:
public:
  // Konstruktor
  string_weak_ptr(const string &ref);
  void lock();
  ~string_weak_ptr();
};
#endif