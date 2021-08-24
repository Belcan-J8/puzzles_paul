#include "Car.h"
#include "Logger.h"

// Yes this is a rather cumbersome piece of code but it demonstrates understanding.
// Define cars
enum Cars
{
   eCyanCar,
   eMagentaCar,
   eNumCars
};
static const Cars All[] = {eCyanCar, eMagentaCar};

int main(int argc, char* argv[])
{
	Logger logger;

	logger.Log("Starting application");

	Car car[(int)eNumCars] = {Car(new CyanLogger(),new YellowLogger()), Car(new MagentaLogger(),new YellowLogger())};
   // Want red amd yellow warnings?
	//                     = {Car(new CyanLogger(),new RedLogger()), Car(new MagentaLogger(),new YellowLogger())};

   // Could have done this instead but why not use a C++11 feature.
	// for (int i = 0; i < 2; i++)

   for ( const auto e : All)
	{
		car[e].TurnLeft();
		car[e].TurnRight();
		car[e].Accelerate();
	}

	logger.Log("Exiting application");
}
