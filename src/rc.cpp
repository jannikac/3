#include "rc.hpp"

rc::rc() { count = 0; }
void rc::increment() { count++; }
void rc::decrement() { count--; }
int rc::getCount() { return count; }
