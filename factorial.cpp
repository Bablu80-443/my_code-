// #include <iostream>

// // Function to calculate factorial using recursion
// unsigned long long factorial(int n) {
//     if (n == 0) {
//         return 1;  // Base case: 0! is 1
//     }
//     return n * factorial(n - 1);  // Recursive case
// }

// int main() {
//     int num;
//     std::cout << "Enter a non-negative integer: ";
//     std::cin >> num;

//     if (num < 0) {
//         std::cerr << "Factorial is not defined for negative numbers." << std::endl;
//         return 1;
//     }

//     std::cout << "Factorial of " << num << " is " << factorial(num) << std::endl;

//     return 0;
// }
#include <iostream>

// Function to calculate factorial using recursion
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;  // Base case: 0! is 1
    }
    std::cout << "Entering factorial(" << n << ")\n";  // Show entering the function
    unsigned long long result = n * factorial(n - 1);  // Recursive case
    std::cout << "Returning from factorial(" << n << "): " << result << "\n";  // Show returning
    return result;
}

int main() {
    int num;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cerr << "Factorial is not defined for negative numbers." << std::endl;
        return 1;
    }

    std::cout << "Factorial of " << num << " is " << factorial(num) << std::endl;

    return 0;
}
