#include "string_shared_ptr.hpp"
#include "string_weak_ptr.hpp"
#include <iostream>

int main() {
  string_shared_ptr p(new string("abc"));
  auto a = string_weak_ptr(p);
  auto b = string_weak_ptr(p);
  auto c = b.lock();
  c->print();
  return 0;
}