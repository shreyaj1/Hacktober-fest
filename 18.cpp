//Add and subtract complex number
// Amisha Sherekar
#include <iostream>
using namespace std;
 
class Complex{
public:
  float real;
  float img;

  Complex(){
    this->real = 0.0;
    this->img = 0.0;
  }

  Complex(float real, float img){
    this->real = real;
    this->img = img;
  }

  //overloading + operator
  Complex operator+(const Complex &obj){
    Complex temp;
    temp.img = this->img + obj.img;
    temp.real = this->real + obj.real;
    return temp;
  }

  //overloading - operator
  Complex operator-(const Complex &obj){
    Complex temp;
    temp.img = this->img - obj.img;
    temp.real = this->real - obj.real;
    return temp;
  }

  void display(){
    cout << this->real << " + " << this->img << "i" << endl;
  }
};
 
int main()
{
  Complex a, b, c;

  cout << "Enter real and complex coefficient of the first complex number: " << endl;
  cin >> a.real;
  cin >> a.img;

  cout << "Enter real and complex coefficient of the second complex number: " << endl;
  cin >> b.real;
  cin >> b.img;

  cout << "Addition Result: ";
  c = a+b;
  c.display();

  cout << "Subtraction Result: ";
  c = a-b;
  c.display();

  return 0;
}