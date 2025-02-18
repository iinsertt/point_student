#pragma once

#define STUDENT_


#include <iostream>
class Student
{
public:
    Student(const std::string& name, const std::string& date, int number,
        const std::string& city, const std::string& country, int group)
        : name(name), date(date), number(number), city(city), country(country), group(group) {
    };

    // Start accessor declaration;

    // Virtual declaration getters for this Class;

    virtual std::string get_name() inline const;
    virtual std::string get_date() inline const;
    virtual std::string get_city() inline const;
    virtual std::string get_country() inline const;
    virtual int get_number() inline const;
    virtual int get_group() inline const;

    // Virtua; declaration setters for this Class;
    
    virtual void set_name(std::string new_name);
    virtual void set_date(std::string new_date);
    virtual void set_city(std::string new_city);
    virtual void set_country(std::string new_country);
    virtual void set_number(int new_number);
    virtual void set_group(int new_group);

    // End of accessor declaration;

private:
    std::string name;
    std::string date;
    std::string city;
    std::string country;
    int number;
    int group;
};

