#include "rc.hpp"

rc::rc() {
  strongCount = 0;
  weakCount = 0;
}

void rc::inc_strong() { strongCount++; }
void rc::dec_strong() { strongCount--; }
void rc::inc_weak() { weakCount++; }
void rc::dec_weak() { weakCount--; }
int rc::getStrongCount() { return strongCount; }
int rc::getWeakCount() { return weakCount; }
