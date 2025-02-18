#include "Fraction.h"

int Fraction::get_numerator() const {
	return Fraction::numerator;
}
int Fraction::get_denominator() const {
	return Fraction::denominator;
}
void Fraction::set_numerator(int new_num) {
	Fraction::numerator = new_num;
}
void Fraction::set_denominator(int new_den) {
	Fraction::denominator = new_den;
}