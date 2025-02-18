// classwork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Student.h"
#include "Point.h"
#include <iostream>
#include "Fraction.h"
#include <functional>
/*
    std::string name;
    std::string date;
    int number;
    std::string city;
    std::string country;
    int group;
    */


int main() {
    setlocale(LC_ALL, "rus");
    Student student("John", "2000-01-01", 12345, "New York", "USA", 101);
    std::cout << student.get_name() << std::endl;
    student.set_name("123");
    std::cout << student.get_name() << std::endl;



    Point point(1, 2, 3);
    point.saveInformation();
    point.set_x(123);
    std::cout << "Текущий x: " << point.get_x() << std::endl;
    point.loadInformation();
    std::cout << "Загруженный x: " << point.get_x() << std::endl;



    Fraction dr1(1, 2);
    Fraction dr2(1, 4);
    std::cout << "Результат сложения дробей: " << (Fraction)dr1 + dr2 << std::endl;
    std::cout << "Результат вычитания дробей: " << (Fraction)dr1 - dr2 << std::endl;
    std::cout << "Результат умножение дробей: " << (Fraction)dr1 * dr2 << std::endl;
    std::cout << "Результат деления дробей: " << (Fraction)dr1 / dr2 << std::endl;


    std::unique_ptr<Fraction> ptr{ std::make_unique<Fraction>(1, 2) };
    std::unique_ptr<Fraction> ptr1{ std::make_unique<Fraction>(1, 4) };

    std::cout << "Результат вычитания дробей: " << (Fraction)*ptr - *ptr1 << std::endl;



    

    return 0;





}
