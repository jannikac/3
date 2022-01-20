#ifndef RC_HPP
#define RC_HPP

class rc {
private:
  int count;

public:
  rc();
  void increment();
  void decrement();
  int getCount();
};

#endif