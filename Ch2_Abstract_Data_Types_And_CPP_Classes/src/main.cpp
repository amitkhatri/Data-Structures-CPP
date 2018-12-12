//FILE main.cpp
//Demonstration of our throttle class
#include <iostream>
#include <cstdlib>    //Provides exit sucess
#include "throttle.h"
using namespace std;
using namespace khatri_2A;
int main()
{
	cout<<"Hello World!"<<endl;

	throttle myThrottle(-1);
	myThrottle.shiftThrottle(5);

	while(myThrottle.is_on()){
		cout<<"The flow is now " << myThrottle.returnFlow() << endl;
		myThrottle.shiftThrottle(-1);
	}
	
	return EXIT_SUCCESS;
}
