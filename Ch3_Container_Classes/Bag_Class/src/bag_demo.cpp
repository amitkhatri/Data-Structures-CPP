#include <iostream>
#include <cstdlib>
#include "bag.h"
using namespace std;
int main(void){
	Bag myBag;
	myBag.insert(1);
	myBag.insert(3);
	myBag.insert(6);
	myBag.insert(10);
	cout<<myBag;
	return 0;
}
