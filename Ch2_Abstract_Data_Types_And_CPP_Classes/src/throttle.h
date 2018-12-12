//FILE: throttle.h
//CLASS PROVIDED: throttle (based on ch2 of main/savitch)
//
//CONSTRUCTORS for throttle class
//    throttle()
//      Postcondition: The throttle has two positions (0,1). Defaulted to 0 (shut off)
//
//    throttle(int size)
//      Precondition: size > 0
//      Postcondition: The throttle has a top_gear based on the value of size. Defaulted to 0 (shut off)
//
//MODIFICATION MEMBER FUNCTIONS for throttle class
//    void shut_off()
//      Precondition: none
//      Postcondition: Throttle has been shut off
//
//    void shiftThrottle(int amount);
//      Postcondition: The throttle has been moved by amount (but not below 0 or above the top gear)
//
//CONSTANT MEMBER FUNCTIONS for throttle class
//    double returnFlow() const
//      Postcondition: The value returned is the current flow/maximum flow
//
//    bool is_on()
//      Postcondition: If the value of positon is greater than 0, return true. Else return false
//
//VALUE SEMANTICS for throttle class
//    Assignments and the copy constructor may be used with throttle objects



//These file guards keep header files from
//being included multiple times
#ifndef THROTTLE_H
#define THROTTLE_H
namespace khatri_2A
{
	
	class throttle
	{
	public:
		//CONSTRUCTORS
		throttle();
		throttle(int size);
		//MODIFICATION MEMBER FUNCTIONS
		void shut_off();
		void shiftThrottle(int amount);
		//CONSTANT MEMBER FUNCTIONS
		double returnFlow() const;
		bool is_on() const;
	private:
		int top_gear;
		int position;
	};

	
}
#endif
