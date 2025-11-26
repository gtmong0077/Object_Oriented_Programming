#ifndef FRACTION_H
#define FRACTION_H
#include <string>
#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;   // 분자
    int denominator; // 분모

    // 내부 유틸리티 함수
    bool normalize();
    int gcd(int n, int m);

public:
    // 생성자 및 소멸자
    Fraction();
    Fraction(int numer, int denom = 1);
    Fraction(const Fraction& fract);
    ~Fraction();

    operator double() const;

    // 접근자 (Getters) & 설정자 (Setters) - 기존 코드 유지
    int getNumerator() const;
    int getDenominator() const;
    void setNumerator(int numer);
    void setDenominator(int denom);

    // Declaration


    // 출력 함수
    //string print() const;
    friend istream& operator >>(istream& left, Fraction& right) ; 
    friend ostream& operator <<(ostream& left, const Fraction& right);

    // *** Friend 산술 연산자 선언 (슬라이드 요구사항) ***
    friend Fraction operator+(const Fraction& left, const Fraction& right);
    friend Fraction operator-(const Fraction& left, const Fraction& right);
    friend Fraction operator*(const Fraction& left, const Fraction& right);
    friend Fraction operator/(const Fraction& left, const Fraction& right);
};

#endif