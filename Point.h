#pragma once
#include <fstream>
#include <string> 
#include <iostream>
#include <vector>
#define _CRT_SECURE_NO_WARNINGS


class Point
{
public:
	Point(int x, int y, int z) : x(x), y(y), z(z) {};

	virtual int get_x() const;
	virtual int get_y() const;
	virtual int get_z() const;

	virtual void set_x(int new_x);
	virtual void set_y(int new_y);
	virtual void set_z(int new_z);

	inline void saveInformation() const {
		std::ofstream save;
		save.open("save.nrx");
		save.clear();
		save << "x:" << x << std::endl;
		save << "y:" << y << std::endl;
		save << "z:" << z << std::endl;
		save.close();
	}

	inline void loadInformation() {
		std::string line;
		std::ifstream in("save.nrx");
		while (std::getline(in, line)) {
			char key;
			int value;
			if (sscanf_s(line.c_str(), "%c: %d", &key, sizeof(key), &value) == 2) {
				if (key == 'x') x = value;
				else if (key == 'y') y = value;
				else if (key == 'z') z = value;
			}
		}
	}


private:
	int x;
	int y;
	int z;
};

