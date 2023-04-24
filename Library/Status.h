#pragma once
#include<string>
#include <iostream>
namespace nw{
	enum dostpenosc {
		notavaible = 1, avaible = 0
	};
class Status
{
	std::string status;
public:
	Status(const std::string status) :status(status) {
		change();
	}
	void change() {
		if (status == "n") {
			status = dostpenosc(1);
		}
		if (status == "a") {

			status = dostpenosc(0);
		}
	}
	std::string ToString() {
		return (status);
	}
	void write() {
		std::cout << ", status: "<< status;
	}
	};
}

