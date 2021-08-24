#include "Car.h"

Car::Car(ILogger* movementLogger,  ILogger *fuelLogger)
	: movementlogger(movementLogger)
{
   fuelGauge = new FuelGauge( fuelLogger );
}
void Car::TurnLeft()
{
	movementlogger->Log("Turning left");
	fuelGauge->DecrementFuelLevel();
}
void Car::TurnRight()
{
	movementlogger->Log("Turning right");
	fuelGauge->DecrementFuelLevel();
}
void Car::Accelerate()
{
	movementlogger->Log("Moving ahead");
	fuelGauge->DecrementFuelLevel();
	fuelGauge->DecrementFuelLevel();
}
