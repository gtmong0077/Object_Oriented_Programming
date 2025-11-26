#include <iostream>
#include <string>
#include "Fraction.h"
#include <cmath>
using namespace std;

Fraction::Fraction() : numerator(0), denominator(1) {}
Fraction::Fraction(int numer, int denom) : numerator(numer), denominator(denom) {
    normalize();
}
Fraction::Fraction(const Fraction& fract) : numerator(fract.numerator), denominator(fract.denominator) {}
Fraction::~Fraction() {}


// Definition
Fraction :: operator double() const
{
    double num = static_cast <double>(numerator);
    return (num / denominator);
}

// string Fraction::print() const{
//     return to_string(numerator) + "/" + to_string(denominator);
// }

istream& operator >>(istream& left, Fraction& right)
{
    cout << "Enter the value of numerator: " ;
    left >> right.numerator;
    cout << "Enter the value of denominator: " ;
    left >> right.denominator;
    right.normalize();
    return left;
}
// Definition of << operator

// Definition of << operator
ostream& operator << (ostream& left, const Fraction& right)
{
    left << right.numerator << "/" << right.denominator << endl;
    return left;
}

int Fraction::getNumerator() const { return numerator; }
int Fraction::getDenominator() const { return denominator; }

void Fraction::setNumerator(int numer){
    numerator = numer;
    normalize();
}

void Fraction::setDenominator(int denom){
    denominator = denom;
    normalize();
}

bool Fraction::normalize(){
    //Handling a denominator of zero
    if(denominator==0){
        cout<<"Invaid denomination. Need to quit"<<endl;
        return false;
    }
    //Changing the sign of denominator
    if(denominator<0){
        denominator=-denominator; // denominator : 분모
        numerator=-numerator;     // numerator : 분자
    }
    int divisor = gcd(abs(numerator), abs(denominator));
    numerator /= divisor;
    denominator /= divisor;
    return true;
}

int Fraction::gcd(int n, int m){ // greatest common divisor 최대공약수
    int gcd=1;
    for(int k=1;k<=n && k<=m;k++){
        if(n%k==0 && m%k==0)
            gcd=k;
    }
    return gcd;
}

// *** Friend 함수 구현 (슬라이드의 공식 적용) ***

// 덧셈: (a*d + b*c) / (b*d)
Fraction operator+(const Fraction& left, const Fraction& right) {
    int newNumer = left.numerator * right.denominator + right.numerator * left.denominator;
    int newDenom = left.denominator * right.denominator;
    return Fraction(newNumer, newDenom);
}

// 뺄셈: (a*d - b*c) / (b*d)
Fraction operator-(const Fraction& left, const Fraction& right) {
    int newNumer = left.numerator * right.denominator - right.numerator * left.denominator;
    int newDenom = left.denominator * right.denominator;
    return Fraction(newNumer, newDenom);
}

// 곱셈: (a*c) / (b*d)
Fraction operator*(const Fraction& left, const Fraction& right) {
    int newNumer = left.numerator * right.numerator;
    int newDenom = left.denominator * right.denominator;
    return Fraction(newNumer, newDenom);
}

// 나눗셈: (a*d) / (b*c) -> 뒤의 분수를 역수 취해서 곱함
Fraction operator/(const Fraction& left, const Fraction& right) {
    int newNumer = left.numerator * right.denominator;
    int newDenom = left.denominator * right.numerator;
    return Fraction(newNumer, newDenom);
}


