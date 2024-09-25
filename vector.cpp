// #include <iostream>

// int main() {
//     int base_address = 100;
//     int element_size = 4; // size of each element in bytes
//     int num_rows = 8;
//     int num_columns = 14;

//     int i = 4; // row index
//     int j = 12; // column index

//     // Calculate the address of A1[i][j]
//     int address = base_address + ((i * num_columns + j) * element_size);

//     std::cout << "Address of A1[4][12]: " << address << std::endl;

//     return 0;
///}
// #include <iostream>

// int main() {
//     int base_address = 100;
//     int element_size = 2; // size of each element in bytes
//     int num_columns = 18;

//     int i = 4; // row index
//     int j = 12; // column index

//     // Calculate the address of Z1[i][j]
//     int address = base_address + ((i * num_columns + j) * element_size);

//     std::cout << "Address of Z1[4][12]: " << address << std::endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// #define MAX_SIZE 100 // Maximum size of the stack

// class Stack {
// private:
//     int top;          // Index of the top element in the stack
//     int arr[MAX_SIZE];// Array to store stack elements

// public:
//     Stack() {
//         top = -1;     // Initialize top to -1 indicating an empty stack
//     }

//     // Function to push an element onto the stack
//     void push(int value) {
//         if (top == MAX_SIZE - 1) {
//             cout << "Error: Stack overflow. Cannot push element " << value << ". Stack is full." << endl;
//             return;
//         }
//         arr[++top] = value;
//         cout << "Pushed " << value << " onto the stack." << endl;
//     }

//     // Function to pop an element from the stack
//     int pop() {
//         if (top == -1) {
//             cout << "Error: Stack underflow. Cannot pop from empty stack." << endl;
//             return -1; // Return an invalid value indicating underflow
//         }
//         return arr[top--];
//     }

//     // Function to check if the stack is empty
//     bool isEmpty() {
//         return (top == -1);
//     }

//     // Function to check if the stack is full
//     bool isFull() {
//         return (top == MAX_SIZE - 1);
//     }

//     // Function to return the top element of the stack without removing it
//     int peek() {
//         if (top == -1) {
//             cout << "Stack is empty. No top element." << endl;
//             return -1; // Return an invalid value indicating empty stack
//         }
//         return arr[top];
//     }
// };

// int main() {
//     Stack stack;

//     // Example usage
//     stack.push(1);
//     stack.push(2);
//     stack.push(3);

//     cout << "Top element: " << stack.peek() << endl;

//     cout << "Popped element: " << stack.pop() << endl;
//     cout << "Popped element: " << stack.pop() << endl;

//     cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;

//     // Attempt to pop more elements than pushed
//     cout << "Popped element: " << stack.pop() << endl;

//     return 0;
// }
// #include <iostream>
// #include <stack>
// #include <string>

// int main() {
//     std::string input;
//     std::cout << "Enter a string: ";
//     std::getline(std::cin, input);

//     std::stack<char> stack;

//     // Push all characters of string to stack
//     for (char ch : input) {
//         stack.push(ch);
//     }

//     // Pop all characters from stack and put them back to the string
//     std::string reversed;
//     while (!stack.empty()) {
//         reversed += stack.top();
//         stack.pop();
//     }

//     std::cout << "Reversed string: " << reversed << std::endl;

//     return 0;
// }
#include <iostream>
#include <stack>
#include <vector>

void moveDisk(std::stack<int>& source, std::stack<int>& destination, char s, char d) {
    int disk = source.top();
    source.pop();
    destination.push(disk);
    std::cout << "Move disk " << disk << " from " << s << " to " << d << std::endl;
}

void towerOfHanoi(int n, std::stack<int>& source, std::stack<int>& auxiliary, std::stack<int>& destination, char s, char a, char d) {
    if (n == 1) {
        moveDisk(source, destination, s, d);
        return;
    }
    towerOfHanoi(n-1, source, destination, auxiliary, s, d, a);
    moveDisk(source, destination, s, d);
    towerOfHanoi(n-1, auxiliary, source, destination, a, s, d);
}

int main() {
    int N = 4;  // Number of disks
    std::stack<int> source, auxiliary, destination;

    // Initialize source tower with disks
    for (int i = N; i >= 1; --i) {
        source.push(i);
    }

    // Print initial state
    std::cout << "Initial State:\n";
    std::cout << "Source: ";
    std::stack<int> temp(source);
    while (!temp.empty()) {
        std::cout << temp.top() << " ";
        temp.pop();
    }
    std::cout << std::endl;

    // Solve Tower of Hanoi
    towerOfHanoi(N, source, auxiliary, destination, 'A', 'B', 'C');

    // Print final state
    std::cout << "Final State:\n";
    std::cout << "Destination: ";
    while (!destination.empty()) {
        std::cout << destination.top() << " ";
        destination.pop();
    }
    std::cout << std::endl;

    return 0;
}
