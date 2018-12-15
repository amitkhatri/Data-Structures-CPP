//Going to keep everything in one file right now
//to keep things easy
#include <iostream>
#include <cassert>
using namespace std;
class node{
    public:
    //TYPEDEF
    typedef double value_type;
    node();
    node(const value_type& new_data);
    node(const value_type& new_data, node* new_node);
    void set_data(const value_type& new_data);
    void set_next(node* new_node);
    value_type get_data() const;
    node* get_next();
    const node* get_next() const;
    private:
    value_type data;
    node* next;
};

node::node(){
    data = 0;
    next = NULL;
}

node::node(const value_type& new_data){
    data = new_data;
    next = NULL;
}

node::node(const value_type& new_data, node* new_node){
    data = new_data;
    next = new_node;
}

void node::set_data(const value_type& new_data){
    data = new_data;
}

void node::set_next(node* new_node){
    next = new_node;
}

node::value_type node::get_data() const{
    return data;
}

node* node::get_next(){
    return next;
}

const node* node::get_next() const{
    return next;
}

size_t list_length(const node* head_ptr){
    size_t result = 0;
    const node* cursor;

    for(cursor = head_ptr; cursor != NULL; cursor = cursor->get_next()){
        ++result;
    }

    return result;

}

void list_head_insert(node*& head_ptr, const node::value_type new_data){
    
    head_ptr = new node(new_data,head_ptr);
}

void list_end_insert(node* head_ptr, const node::value_type new_data){

    if(head_ptr == NULL){
       //Need to take care of this case
    }

    node* cursor = head_ptr;
    node* new_node = new node(new_data,NULL);

    while(cursor->get_next() != NULL){
        cursor = cursor->get_next();
    }

    cursor->set_next(new_node);

    return;



}

void list_insert(node* prev_pointer, const node::value_type new_data){
    node* insert_ptr = new node();

    insert_ptr->set_data(new_data);
    insert_ptr->set_next(prev_pointer->get_next());
    prev_pointer->set_next(insert_ptr);
}

void list_print(const node* head_ptr){
    const node* cursor;
    for(cursor = head_ptr; cursor != NULL; cursor = cursor->get_next()){
        cout<<cursor->get_data()<<" ";
    }
}

node* list_search(node* head_ptr, node::value_type& query){
    node* cursor;

    for(cursor = head_ptr; cursor !=NULL; cursor = cursor->get_next()){
        if(cursor->get_data() == query){
            return cursor;
        }
    }

    return NULL;
}

const node* list_search(const node* head_ptr, node::value_type& query){
    const node* cursor;

    for(cursor = head_ptr; cursor !=NULL; cursor = cursor->get_next()){
        if(cursor->get_data() == query){
            return cursor;
        }
    }

    return NULL;
}

int main(void){

    node* head_ptr = NULL;

    list_head_insert(head_ptr, 1);
    list_end_insert(head_ptr, 2);
    list_end_insert(head_ptr, 4);
    list_end_insert(head_ptr, 5);
    list_end_insert(head_ptr,12);


    const node* itor = head_ptr;
    list_print(itor);

    return 0;
}