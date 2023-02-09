#pragma once
#include<iostream>
#include<vector>
#include"IVehicle.h"

namespace Engine {
	class Printer
	{
	public:
		void PrintDefault();
		void addVec(std::shared_ptr<IVehicle>& v);
		void Print();
	private:
		std::vector<std::shared_ptr<IVehicle>> _vec;

	};
}
