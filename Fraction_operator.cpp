#include <iostream>
#include "Fraction.h"
#include <iomanip>

using namespace std;

int main() {
    // 1. 객체 생성 및 출력 테스트
    // Fraction fract11(1, 2);
    // Fraction fract12(3, 4);

    //cout << "fract11: " << fract11.print() << endl; // 결과: 1/2
    //cout << "fract12: " << fract12.print() << endl; // 결과: 3/4

    // 2. Friend 연산자 테스트 (슬라이드 예제)
    //Fraction fract111 = fract11 + fract12;
    //Fraction fract112 = fract11 - fract12;
    //Fraction fract113 = fract11 * fract12;
    //Fraction fract114 = fract11 / fract12;

    // 3. 결과 출력
    //cout << "fract11 + fract12 : " << fract111.print() << endl; // 예상: 5/4
    //cout << "fract11 - fract12 : " << fract112.print() << endl; // 예상: -1/4
    //cout << "fract11 * fract12 : " << fract113.print() << endl; // 예상: 3/8
    //cout << "fract11 / fract12 : " << fract114.print() << endl; // 예상: 2/3

    // Testing extraction operator
// Fraction fract15;
// cin >> fract15;
// cout << "fract15: " << fract15 << endl << endl;
//  // Creation of two new objects and
//  // testing friend arithmetic operations
// Fraction fract16(1, 2);
// Fraction fract17(3, 4);
// cout << "fract16: " << fract16 << endl;
// cout << "fract17: " << fract17 << endl;
// cout << "fract16 + fract17 : " << fract16 + fract17 << endl;
// cout << "fract16 - fract17 : " << fract16 - fract17 << endl;
//  cout << "fract16 * fract17 : " << fract16 * fract17 << endl;
// cout << "fract16 / fract17 : " << fract16 / fract17 << endl << endl;
// return 0;

    // Using convertor constructor to create two new objects
    Fraction fract18(5); // Changing an integer to a fraction
    Fraction fract19(23.45); // Changing a double value to a fraction
    cout << "fract18: " << fract18 << endl;
    cout << "fract19: " << fract19 << endl << endl;
    // Changing a fraction to a double
    Fraction fract20(9, 13);
    cout << "double value of fract20 (9, 13): ";
    cout << setprecision(3) << fract20.operator double() << ", ";
    cout << (double)fract20 << ", ";
    cout << static_cast<double>(fract20) << endl << endl;   
    return 0;


}
