#include <iostream>
#include <cassert>
#include "bag.h"
using namespace std;

	const Bag::size_type Bag::CAPACITY;

	Bag::Bag(){
		used = 0;
	}

	Bag::size_type Bag::count(const value_type& query) const{
		size_type answer = 0;
		for(int i = 0; i < used; i++){
			if(data[i] == query){
				++answer;
			}
		}
		
		return answer;
	}

	void Bag::insert(const value_type& target){
		assert(size() < CAPACITY);
		data[used] = target;
		++used;
	}

	bool Bag::erase_one(const value_type& target){
		size_type index;

		for(int i = 0; i < used; i++){
			if(data[i] == target){
				data[i] = data[used];
				--used;
				return true;
			}
		}

		return false;
	}

	Bag::size_type Bag::erase(const value_type& target){
	}

	void Bag::operator +=(const Bag &addend){
	}

	Bag operator +(const Bag& b1, const Bag& b2){
	}

	Bag::size_type Bag::size() const{
		return used;
	}

	void Bag::printBag(){
		for(int i = 0; i < used; i++){
			cout<<data[i]<<" ";
		}
		cout<<endl;
	}
