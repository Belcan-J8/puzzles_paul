#pragma once

#include <string>
enum forgroundTxtColor_t
{
   eDefaultColor=0,
   eRed,
   eBlue,
   eEndOfColorList
};

struct ILogger
{
	virtual void Log(std::string theString, forgroundTxtColor_t fGnd = eDefaultColor) = 0;
};

class Logger : public ILogger
{
public:
   // Usage: Log("my text", eRed); -- To display the text in red.
   //        Log("my text"); -- To display the text in default color.
	void Log(std::string theString, forgroundTxtColor_t fGnd = eDefaultColor);
};
