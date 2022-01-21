#include "string_shared_ptr.hpp"

string_shared_ptr::string_shared_ptr(string *ptr) {
  // rc stellt ein Objet zum Referenzzählen dar
  reference = new rc();
  strptr = ptr;
  // Referenz zu Starken Zeigern bei Erstellung eines Shared Pointers erhöhen
  reference->inc_strong();
}

string_shared_ptr::string_shared_ptr(string *ptr, rc *rc) {
  // Wird zur Konvertierung aus einem string_weak_ptr verwendet
  reference = rc;
  strptr = ptr;
  // Referenz erhöhen
  reference->inc_strong();
}

string_shared_ptr::string_shared_ptr(const string_shared_ptr &other) {
  // refCount des neuen Zeigers auf Refcount des alten setzen
  reference = other.reference;
  strptr = other.strptr;
  // Neue Referenz, daher refCount erhöhen
  reference->inc_strong();
};

string_shared_ptr::~string_shared_ptr() {
  // Starken Referenzzähler um 1 verringern
  reference->dec_strong();
  // Wenn Starker Referenzzähler 0, string hinter dem strptr löschen
  if (reference->getStrongCount() == 0) {
    delete strptr;
    // Wenn auch schwacher Referenzzähler 0, Referenzzähler selbst löschen
    if (reference->getWeakCount() == 0) {
      delete reference;
    }
  }
}

void string_shared_ptr::reset() { strptr = nullptr; }

string *string_shared_ptr::operator->() { return strptr; }
