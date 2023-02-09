#include "Printer.h"

using namespace Engine;
void Engine::Printer::PrintDefault()
{
	std::cout << "Default Print Message\n";
}

void Engine::Printer::addVec(std::shared_ptr<IVehicle>& v)
{
	_vec.push_back(v);
}

void Engine::Printer::Print()
{
	for (auto el : _vec) {
		el->PrintType();
		std::cout << el->getSpeed() << '\n';
	}
}

