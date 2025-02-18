#pragma once
#include <ostream>
class Fraction
{
public:
	Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) {};

	virtual int get_numerator() const;
	virtual int get_denominator() const;

	virtual void set_numerator(int new_num);
	virtual void set_denominator(int new_den);
    std::cout << a;

    Fraction operator+(const Fraction& other) const {
        double new_numerator = numerator * other.denominator + other.numerator * denominator;
        double new_denominator = denominator * other.denominator;
        return Fraction(new_numerator, new_denominator); 
    }

    Fraction operator-(const Fraction& other) const {
        int commonDenominator = denominator * other.denominator;
        int numerator1 = numerator * other.denominator;
        int numerator2 = other.numerator * denominator;
        int resultNumerator = numerator1 - numerator2;
        return Fraction(resultNumerator, commonDenominator);
    }
    Fraction operator*(const Fraction& other) const {
        return Fraction((numerator * other.numerator), (denominator * other.denominator));
    }

    Fraction operator/(const Fraction& other) const {
        return Fraction((numerator * other.denominator), (other.numerator * denominator));
    }


    friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
        os << fraction.numerator << "/" << fraction.denominator;
        return os;
    }
private:
	int numerator;
	int denominator;
    const std::string a = "a";

};

