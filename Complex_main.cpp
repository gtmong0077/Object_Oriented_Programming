#include <iostream>
#include "Complex.h" // Complex 클래스 선언을 가져옴

using namespace std;

int main() {
    // 1. 초기 값 설정 (문제의 Output과 동일하게 설정)
    Complex complex1(2.00, 4.00);
    Complex complex2(-4.00, 6.00);
    Complex complex3(6.00, -8.00);
    Complex complex4(8.00, 10.00);
    Complex rvalue(1.00, 2.00);

    // 초기 상태 출력
    cout << "Possible Output:" << endl << endl;
    cout << "complex1: " << complex1 << endl;
    cout << "complex2: " << complex2 << endl;
    cout << "complex3: " << complex3 << endl;
    cout << "complex4: " << complex4 << endl;
    cout << "rvalue: " << rvalue << endl << endl;

    // 2. 복합 대입 연산 테스트 (+=, -=, *=, /=)
    complex1 += rvalue;
    complex2 -= rvalue;
    complex3 *= rvalue;
    complex4 /= rvalue;

    cout << "complex1 += rvalue: " << complex1 << endl;
    cout << "complex2 -= rvalue: " << complex2 << endl;
    cout << "complex3 *= rvalue: " << complex3 << endl;
    cout << "complex4 /= rvalue: " << complex4 << endl << endl;

    // 3. 일반 산술 연산 테스트 (+, -, *, /)
    // 주의: 위 연산으로 complex1~4의 값이 이미 변경된 상태에서 수행됨
    cout << "resulting complex1 + rvalue: " << (complex1 + rvalue) << endl;
    cout << "resulting complex2 - rvalue: " << (complex2 - rvalue) << endl;
    cout << "resulting complex3 * rvalue: " << (complex3 * rvalue) << endl;
    cout << "resulting complex4 / rvalue: " << (complex4 / rvalue) << endl;

    cout << endl << "#-- Custom Test Cases --" << endl;

    // --- (e) 추가 테스트 케이스 2가지 ---

    // Case 1: 순허수(Pure Imaginary) 끼리의 곱셈
    Complex pureImag1(0, 1); // i
    Complex pureImag2(0, 1); // i
    cout << "Test 1 [i * i]: " << pureImag1 << " * " << pureImag2 << " = " 
         << (pureImag1 * pureImag2) << endl;

    // Case 2: 분모가 0이 되는 나눗셈 (Zero Division)
    Complex num(10, 20);
    Complex zero(0, 0);
    cout << "Test 2 [Divide by Zero]: " << num << " / " << zero << " = " << (num / zero) << endl;

    return 0;
}