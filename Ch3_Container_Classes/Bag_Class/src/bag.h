//File: Bag.h
//TYPEDEFS and MEMBER CONSTANTS
//    typedef _____ value_type
//    This is the data type of the items in the bag
//
//    typedef std::size_t size_type
//    The data type that allows to to keep track of how many items
//    are in the bag
//
//    static const size_type CAPACITY = _____
//    bag::CAPACITY is the max numbers the bag can hold
//
//CONSTRUCTOR for the bag class
//    Bag()
//        Postcondition: Initializes an empty bag
//
//CONSTANT MEMBER FUNCTIONS
//    size_type size() const
//        Postcondition : Return the number of items in the back
//
//    size_type count(const value_type& query) const
//        Postcondition: Returns the number of times the
//        query is in the bag
//
//MODIFICATION MEMBER FUNCTIONS
//    void insert(const value_type& data)
//        Precondition: size() < CAPACITY
//        Postcondition: A new copy of 'data' has been added to the bag
//
//    bool erase_one(const value_type& target)
//        Postcondition: One copy of target is removed from bag if exists
//        and returns true. If target does not exist, bag is unchanged 
//        and function returns false.
//
//    size_type erase(const value_type& target)
//        Postcondition: All copies of target are removed from bag 
//        if they exists. The return value is the number of copies removed
//
//    void operator +=(const bag &addend)
//        Precondition: size() + addend.size() <= CAPACITY
//        Postcondition: Each item in addend has been added to this bag
#ifndef BAG_H
#define BAG_H
#include <cstdlib>
#include <iostream>
class Bag{
	public:
		typedef int value_type;
		typedef std::size_t size_type;
		static const size_type CAPACITY = 30;
		size_type size() const;
		Bag();
		void insert(const value_type& target);
		size_type count(const value_type& query) const;
		bool erase_one(const value_type& target);
		size_type erase(const value_type& target);
		void operator +=(const Bag &addend);
		void printBag();
	private:
		value_type data[CAPACITY]; //An array to store items
		size_type used; //How much of the array is used

};

Bag operator +(const Bag& b1, const Bag& b2);
std::ostream& operator <<(std::ostream& outs, const Bag& source);
#endif
