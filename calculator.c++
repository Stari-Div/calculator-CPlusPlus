#include <iostream>

int calculate(int num1, int num2, char mathOperator);

int main() {
    // def
    char mathOperator {};
    double num1 {};
    double num2 {};

    // Input Operator
    std::cout << "Choose operator \n" ;
    std::cin >> (mathOperator) ;

    // Input num1
    std::cout << "Choose first number \n" ;
    std::cin >> (num1) ;

    // Input num2
    std::cout << "Choose second number \n" ;
    std::cin >> (num2) ;

    std::cout << "Your answer is " << (calculate (num1, num2, mathOperator) ) << '\n';
}

int calculate(int num1, int num2, char mathOperator) {
    double answer {};

    switch(mathOperator) {
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
    }

    return answer;
}
