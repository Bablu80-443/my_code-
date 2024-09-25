#include <iostream>
#include <stack>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::stack<char> stack;

    // Push all characters of string to stack
    for (char ch : input) {
        stack.push(ch);
    }

    // Pop all characters from stack and put them back to the string
    std::string reversed;
    while (!stack.empty()) {
        reversed += stack.top();
        stack.pop();
    }

    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}
