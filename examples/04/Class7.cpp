#include <iostream>
using namespace std;

class Datum {
  public:
    // constructor
    Datum(double val, double error) {
      value_ = val;
      error_ = error;
    }

    // getters
    double value() { return value_; }
    double error() { return error_; }

    // setters
    void setValue(double value) { value_ = value; }
    void setError(double error) { error_ = error; }

    void print() {
      cout << "datum: " << value_ << " +/- " << error_ << endl;
    }

  private:
    double value_; // data member
    double error_; // data member
};


int main() {

  Datum d1(23.4, 7.5);
  d1.print();

  d1.setValue(8.563);
  d1.setError(0.45);
  d1.print();

  return 0;
}
