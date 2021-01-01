#ifndef WARPDRIVE_H
#define WARPDRIVE_H
#include <stdexcept>
#include <iostream>

using namespace std;

class WarpDrive : public overflow_error
{
public:
	WarpDrive();
	void setTemp(int temp)
	{
		try
		{
			if (temp > 80)
			{
				throw(overflow_error("OverDrive is too hot cool it down to at least 80 degree or less\n"));
			}
			else
			{
				this->temp = temp;
			}
		}
		catch (const overflow_error& err)
		{
			throw err.what();
		}
	}
	int getTemp()
	{
		try
		{
		return temp;
		}
		catch (const overflow_error& err)
		{
		throw err.what();
		}
	}
private:
	int temp;
};
#endif // !WARPDRIVE_H
