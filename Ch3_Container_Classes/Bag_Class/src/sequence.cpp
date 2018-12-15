#include <cassert>
#include "sequence.h"
const Sequence::size_type Sequence::CAPACITY;

Sequence::Sequence(){
    used = 0;
    current_index = 0;
}

Sequence::size_type Sequence::size() const{
    return used;
}

void Sequence::start(){
    if(used == 0){
        return;
    }

    current_index = 0;

    return;
}

Sequence::value_type Sequence::current() const{
}

void Sequence::advance(){
    ++current_index;
}

void Sequence::insert(const value_type& entry){
    if(used == 0){
        data[0] = entry;
        ++used;
        current_index = used - 1;
    }
}

void Sequence::attach(const value_type& entry){
}

void Sequence::remove_current(){
}
