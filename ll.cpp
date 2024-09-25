#include <iostream>
#include <list>

using namespace std;


class node{
public:
    int data ;
    node *next;

    node(int value){
        data = value;
        next =NULL ;
    }


};
class linklist{
public:
    node *head =NULL ;
    node *tail = NULL;

    void push_back(int value){
        node *new_node = new node(value);

        if (head == NULL){
            head =tail = new_node;
        }else{
            tail-> next = new_node;
            tail = new_node;

        }
    }

    void printlst(){
        node *temp = this->head;
        while(temp != NULL)
   {    cout << temp->data <<'\n';
        temp = temp->next;
   
   
   }

    cout <<"done";
    }
    
    void push_front(int value){
        node *new_node = new node(value);
        new_node->next = head;
        head = new_node;
    }

    // void insert(int position,int value){
    //     if ( ){
            
    //     }
    // }

};
int main(){


    linklist ll;
    ll.push_back(5);
    ll.push_back(3);
    ll.push_front(10);

    // cout << ll.head->data
    ll.printlst();
    // node *next = ll.head->next;
}