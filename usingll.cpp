#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> ll;

    ll.push_back(10);
    ll.push_front(20);
    ll.front();
    ll.sort();
    ll.insert(1,11);

}