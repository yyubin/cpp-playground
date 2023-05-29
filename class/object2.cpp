//
// Created by 박유빈 on 2023/05/30.
//

#include "iostream"
using namespace std;

// 생성수: 멤버 변수 초기화
// 복소수(real, imag)

class Complex{
public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(double real_, double imag_) {
        real = real_;
        imag = imag_;
    }

    double GetReal() {
        return real;
    }

    void setReal(double real_) {
        real = real_;
    }

    double GetImag() {
        return imag;
    }

    void SetImag(double imag_) {
        imag = imag_;
    }

private:
    double real;
    double imag;
};

int main() {
    Complex c1;
    Complex c2 = Complex(2, 3);
    Complex c3(2, 3);
    Complex c4 = {2, 3};
    Complex c5 = Complex{2, 3};
    Complex c6{2, 3};

    cout << "c1 = " << c1.GetReal() << ", " << c1.GetImag() << endl;
    cout << "c2 = " << c2.GetReal() << ", " << c2.GetImag() << endl;
    cout << "c3 = " << c3.GetReal() << ", " << c3.GetImag() << endl;
}