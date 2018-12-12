//FILE throttle.cpp
//CLASS IMPLEMENTED: throttle (see throttle.h for documentation)
#include <cassert> // Provides assert
#include "throttle.h" // Provides the throttle class definition

namespace khatri_2A
{
	throttle::throttle()
	{
		//Simple on-off throttle
		top_gear = 1;
		position = 0;
	}

	throttle::throttle(int size)
	{
		//Throttle with top_gear based on size
		assert(size > 0);
		top_gear = size;
		position = 0;
	}

	void throttle::shut_off()
	{
		position = 0;
	}

	void throttle::shiftThrottle(int amount)
	{
		position += amount;
		
		if(position > top_gear){
			position = top_gear;
		}else if(position < 0 ){
			position = 0;
		}
	}

	double throttle::returnFlow() const
	{
		return position / double(top_gear);
	}

	bool throttle::is_on() const
	{
		if(position > 0){
			return true;
		}

		return false;
	}
}


