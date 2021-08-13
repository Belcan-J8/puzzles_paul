#include "Logger.h"
#include <assert.h>
#include "..\termcolor\include\termcolor\termcolor.hpp"

#include <iostream>
using namespace termcolor;

void Logger::Log(std::string theString, forgroundTxtColor_t fGnd)
{
   // Emits code to terminal to change color
   switch (fGnd)
   {
      case eDefaultColor:
         break;
      case eRed:
         std::cout << red;
         break;
      case eBlue:
         std::cout << blue;
         break;
      default:
         assert(0); // Should never execute.  This reminds coder to account for all colors.
   }
   std::cout << theString << reset << std::endl;

}
