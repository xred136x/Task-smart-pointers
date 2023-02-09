#pragma once
class IVehicle {
public:
	virtual int getSpeed()const = 0;
	virtual void PrintType()const = 0;
	virtual ~IVehicle() {}
};