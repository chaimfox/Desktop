#include <iostream>

int sumNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int result = sumNumbers(number);
    std::cout << "The sum of numbers from 1 to " << number << " is: " << result << std::endl;

    return 0;
}
