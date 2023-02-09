#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include"Printer.h"
#include"IVehicle.h"

//functor - объект у которого перегружен оператор ()
using namespace Engine;


class Car : public IVehicle {
public:
	Car(int speed): _speed(speed){}
	int getSpeed()const override {
		return _speed;
	}
	void PrintType()const override {
		std::cout << "Car\n";
	}
private:
	int _speed;

};

class Moto : public IVehicle {
public:
	Moto(int speed): _speed(speed){}
	int getSpeed()const override {
		return _speed;
	}
	void PrintType()const override {
		std::cout << "Moto\n";
	}
private:
	int _speed;
};

class ElectricBike : public IVehicle {
public:
	ElectricBike(int speed) : _speed(speed) {}
	int getSpeed()const override {
		return _speed;
	}
	void PrintType()const override {
		std::cout << "ElectricBike\n";
	}
private:
	int _speed;
};


int main() {
	std::shared_ptr<IVehicle> pCar = std::make_shared<Car>(70);
	std::shared_ptr<IVehicle> pMoto = std::make_shared<Moto>(80);
	std::shared_ptr<IVehicle> pElectricBike = std::make_shared<ElectricBike>(90);
	Printer van;
	van.addVec(pCar);
	van.addVec(pMoto);
	van.addVec(pElectricBike);
	van.Print();
	
	return 0;
}