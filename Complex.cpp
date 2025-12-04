#include "Complex.h"
#include <iomanip> // setw, setprecision 등 사용

using namespace std;

// 생성자 구현
Complex::Complex(double r, double i) : real(r), imag(i) {}

// 접근자 구현
double Complex::getReal() const { return real; }
double Complex::getImag() const { return imag; }

// --- (a) 복합 대입 연산자 구현 ---

// += 연산자
Complex& Complex::operator+=(const Complex& rhs) {
    this->real += rhs.real;
    this->imag += rhs.imag;
    return *this;
}
// -= 연산자
Complex& Complex::operator-=(const Complex& rhs) {
    this->real -= rhs.real;
    this->imag -= rhs.imag;
    return *this;
}
// *= 연산자
Complex& Complex::operator*=(const Complex& rhs) {
    double oldReal = this->real; // 계산 중 real 값이 바뀌므로 임시 저장
    this->real = (oldReal * rhs.real) - (this->imag * rhs.imag);
    this->imag = (oldReal * rhs.imag) + (this->imag * rhs.real);
    return *this;
}
// /= 연산자
Complex& Complex::operator/=(const Complex& rhs) {
    double denominator = (rhs.real * rhs.real) + (rhs.imag * rhs.imag);
    double oldReal = this->real;
    
    // 분모가 0인 경우에 대한 처리가 필요
    this->real = ((oldReal * rhs.real) + (this->imag * rhs.imag)) / denominator;
    this->imag = (-(oldReal * rhs.imag) + (this->imag * rhs.real)) / denominator;
    return *this;
}

// --- (b) 산술 연산자 구현 (friend 함수이므로 Complex::를 붙이지 않음) ---

Complex operator+(Complex lhs, const Complex& rhs) {
    lhs += rhs; // 이미 구현된 += 사용
    return lhs;
}

Complex operator-(Complex lhs, const Complex& rhs) {
    lhs -= rhs;
    return lhs;
}

Complex operator*(Complex lhs, const Complex& rhs) {
    lhs *= rhs;
    return lhs;
}

Complex operator/(Complex lhs, const Complex& rhs) {
    lhs /= rhs;
    return lhs;
}

// --- (c) 출력 연산자 구현 (friend 함수) ---

ostream& operator<<(ostream& os, const Complex& c) {
    // 출력 포맷 저장 (함수 종료 후 복구용)
    ios oldState(nullptr);
    oldState.copyfmt(os);

    // 요구사항: (+2.00) + i(+4.00) 형태
    // fixed: 소수점 고정, setprecision(2): 소수점 2자리, showpos: 양수도 + 표시
    os << fixed << setprecision(2) << showpos;
    os << "(" << c.real << ") + i(" << c.imag << ")";

    // 이전 포맷 상태로 복구
    os.copyfmt(oldState);
    return os;
}