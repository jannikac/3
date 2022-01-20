#include "string_shared_ptr.hpp"

string_shared_ptr::string_shared_ptr(string *ptr) {
  reference = new rc();
  strptr = ptr;
  // Referenz erhöhen
  reference->increment();
}

string_shared_ptr::string_shared_ptr(const string_shared_ptr &other) {
  // refCount des neuen Zeigers auf Refcount des alten setzen
  reference = other.reference;
  strptr = other.strptr;
  // Neue Referenz, daher refCount erhöhen
  reference->increment();
};

string_shared_ptr::~string_shared_ptr() {
  reference->decrement();
  if (reference->getCount() == 0) {
    delete strptr;
    delete reference;
  }
}

void string_shared_ptr::reset() { strptr = nullptr; }

string *string_shared_ptr::operator->() { return strptr; }
