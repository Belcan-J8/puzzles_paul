#include "FuelGauge.h"

FuelGauge::FuelGauge(ILogger * fuelLogger) :
     fuelLevel(5),
	  logger(fuelLogger)

{
}
void FuelGauge::DecrementFuelLevel()
{
	--fuelLevel;
	if (fuelLevel < 2)
	{
		logger->Log("Low fuel!");
	}
}
