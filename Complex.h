#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

// using namespace std;는 헤더파일에서 가급적 피하는 것이 좋으므로 std::를 붙여 사용합니다.

class Complex {
private:
    double real; // 실수부 (x)
    double imag; // 허수부 (y)

public:
    // 생성자 (Constructor)
    Complex(double r = 0.0, double i = 0.0);

    // 접근자 (Getter)
    double getReal() const;
    double getImag() const;

    // --- (a) 복합 대입 연산자 오버로딩 (멤버 함수) ---
    Complex& operator+=(const Complex& rhs);
    Complex& operator-=(const Complex& rhs);
    Complex& operator*=(const Complex& rhs);
    Complex& operator/=(const Complex& rhs);

    // --- (b) 산술 연산자 오버로딩 (friend 함수) ---
    friend Complex operator+(Complex lhs, const Complex& rhs);
    friend Complex operator-(Complex lhs, const Complex& rhs);
    friend Complex operator*(Complex lhs, const Complex& rhs);
    friend Complex operator/(Complex lhs, const Complex& rhs);

    // --- (c) 출력 연산자 오버로딩 (friend 함수) ---
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};

#endif // COMPLEX_H