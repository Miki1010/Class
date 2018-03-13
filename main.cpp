#include <iostream>

using namespace std;

class Complex_Number
{
private:
    float real;
    float imaginary;
public:
    Complex_Number() : real(0.0),imaginary(0.0) {    // DEFAULT CONSTRUCTOR INITIALISATION LIST
       // real = 0.0 ,imaginary = 0.0 ;
    }
    void Set_complex(double r, double i) {
        real = r ;
        imaginary = i ;
    }
    double Get_real(){
        return real;
    }
    double Get_img(){
        return imaginary;
    }
    void print(){
        cout << "Real : " << real << " and Imaginary : " << imaginary <<endl;
    }
};

int main()
{
    Complex_Number CN,CN2;       // Object of class OR variable of class
    CN.print();
    CN.Set_complex(2.5,9.689);
    CN2 = CN ;
    CN.print();
    CN2.print();
    return 0;
}
