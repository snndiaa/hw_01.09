#include <iostream>
#include <cstring>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;
public:
    void init()
    {
        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;
    }
    void print()
    {
        cout <<"Your fraction: "<< numerator << "/" << denominator << endl;
    }
    void sum(Fraction& b)
    {
        int num = numerator * b.denominator + b.numerator * denominator;
        int den = denominator * b.denominator;
        cout << endl<<"Sum: " << num << "/" << den << endl;
    }
    void sub(Fraction& b)
    {
        int num = numerator * b.denominator - b.numerator * denominator;
        int den = denominator * b.denominator;
        cout << "Subtraction: " << num << "/" << den << endl;
    }
    void mult(Fraction& b)
    {
        int num = numerator * b.numerator;
        int den = denominator * b.denominator;
        cout << "Multiplication: " << num << "/" << den << endl;
    }
    void div(Fraction& b)
    {
        int num = numerator * b.denominator;
        int den = denominator * b.numerator;
        cout << "Division: " << num << "/" << den << endl;
    }
};

int main()
{
    Fraction a;
    a.init(); 
    a.print();

    Fraction b;
    b.init(); 
    b.print();

    a.sum(b);
    a.sub(b);
    a.mult(b);
    a.div(b);
}