#pragma once
#include <iostream>

using namespace std;

class Currency {
 public:
  virtual void Convert() = 0;
  virtual double GetBack() = 0;
  virtual void Print() = 0;
};

class Dollar : public Currency {
 private:
  double value;

 public:
  Dollar();

  Dollar(double);

  void Convert();

  double GetBack();

  void Print();
};

class Euro : public Currency {
 private:
  double value;

 public:
  Euro();

  Euro(double);

  void Convert();

  double GetBack();

  void Print();
};