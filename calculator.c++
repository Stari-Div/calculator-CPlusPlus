#include <iostream>
#include <cmath>

int calculate(int num1, int num2, char mathOperator); // purely for demonstrative purposes (unnecessary)

int main() {
    // def
    char mathOperator{};
    double num1{};
    double num2{};

    // Input num1
    std::cout << "Choose your first number \n";
    std::cin >> (num1);

    // Input Operator
    std::cout << "Choose an operator \n";
    std::cin >> (mathOperator);

    // Input num2
    std::cout << "Choose your second number \n";
    std::cin >> (num2);

    std::cout << "Your answer is " << (calculate(num1, num2, mathOperator)) << '\n';
}

int calculate(int num1, int num2, char mathOperator) {
    double answer{};

    switch (mathOperator) {
        case '+':
            answer = num1 + num2;
            break;

        case '-':
            answer = num1 - num2;
            break;

        case '*':
            answer = num1 * num2;
            break;

        case '/':
            answer = num1 / num2;
            break;
        case '|':
            answer = std::pow(num1, num2);
        }

    return answer;
}
