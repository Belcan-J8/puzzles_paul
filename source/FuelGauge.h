#pragma once

#include "Logger.h"

class FuelGauge
{
public:
	FuelGauge( ILogger* fuelLogger);
	void DecrementFuelLevel();
private:
	int fuelLevel;
	ILogger* logger;
};
