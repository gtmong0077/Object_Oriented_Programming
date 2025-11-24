#include <iostream>
#include <string>
using namespace std;

class Fraction {
    private:
        int numerator;
        int denominator;
    public:
        Fraction();
        Fraction(int numer,int denom=1);
        Fraction(const Fraction& fract);
        ~Fraction();

        int getNumerator() const{return numerator;}
        int getDenominator() const{return denominator;}
        void setNumerator(int numer);
        void setDenominator(int denom);
        string print() const;

    private:
        bool normalize();
        int gcd(int n,int m);
};

Fraction::Fraction() : numerator(0), denominator(1) {}
Fraction::Fraction(int numer, int denom) : numerator(numer), denominator(denom) {
    normalize();
}
Fraction::Fraction(const Fraction& fract) : numerator(fract.numerator), denominator(fract.denominator) {}
Fraction::~Fraction() {}

string Fraction::print() const{
    return to_string(numerator) + "/" + to_string(denominator);
}
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

int main(){
    //Instantiation of some objects
    Fraction fract1;            //Default constructor
    Fraction fract2(14,21);    //Constructor with two parameters
    Fraction fract3(11,-8); 
    Fraction fract4(fract3);    //Copy constructor

    //Printing the object
    cout<<"fract1: "<<fract1.print()<<endl;
    cout<<"fract2: "<<fract2.print()<<endl;
    cout<<"fract3: "<<fract3.print()<<endl;
    cout<<"fract4: "<<fract4.print()<<endl;

    //Using mutators
    cout<<fract1.getNumerator()<<endl;
    cout<<fract1.getDenominator()<<endl;
    fract1.setNumerator(9);
    fract1.setDenominator(12);
    cout<<fract1.getNumerator()<<endl;
    cout<<fract1.getDenominator()<<endl;
    cout<<fract1.print()<<endl;
    fract2.setDenominator(12);
    cout<<fract2.print()<<endl;

    return 0;
}