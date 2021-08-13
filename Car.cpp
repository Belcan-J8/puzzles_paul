#include "Car.h"

Car::Car()
	: logger(new Logger())
{
}
void Car::TurnLeft()
{
	logger->Log("Turning left", eBlue);
	fuelGauge.DecrementFuelLevel();
}
void Car::TurnRight()
{
	logger->Log("Turning right", eBlue);
	fuelGauge.DecrementFuelLevel();
}
void Car::Accelerate()
{
	logger->Log("Moving ahead", eBlue);
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}
