#include "Student.h"

// Getters for class Student

std::string Student::get_name() const
{
	return Student::name;
}
std::string Student::get_date() const
{
	return Student::date;
}
std::string Student::get_city() const
{
	return Student::city;
}
std::string Student::get_country() const
{
	return Student::country;
}
int Student::get_number() const
{
	return Student::number;
}
int Student::get_group() const
{
	return Student::group;
}

// Setters for class Student 

void Student::set_name(std::string new_name)
{
	Student::name = new_name;
}
void Student::set_date(std::string new_date)
{
	Student::date = new_date;
}
void Student::set_city(std::string new_city)
{
	Student::city = new_city;
}
void Student::set_country(std::string new_country)
{
	Student::country = new_country;
}
void Student::set_number(int new_number)
{
	Student::number = new_number;
}
void Student::set_group(int new_group)
{
	Student::group = new_group;
}