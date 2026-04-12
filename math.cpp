#include <iostream>
#include <cmath>

int main() {
    std::cout << "**********CALCULATOR**********" << '\n';

    std::string advcalc;
    char operation;
    double num1;
    double num2;
    char advoperation;
    int advnum;
    double advnum1;
    double advnum2;
    int advpownum;
    std::string ctstd;
    std::string version = "1.0.0";
    char advrunres = 't';

    std::cout << "Welcome to the calculator. Help menu: \n";
    std::cout << "Advanced calculator: \n";
    std::cout << "-s = Square Root \n";
    std::cout << "-p = Power (ex. 5 to the power of 2 is 25) \n";
    
    std::cout << "Would you like to go into the advanced calculator? (Y/N) ";
    std::cin >> advcalc;

    if(advcalc == "Y" || advcalc == "y"){
        while(advrunres == 'y' || advrunres == 'Y' || advrunres == 't'){
            std::cout << "Enter your operation of choice (s, p): ";
            std::cin >> advoperation;

            switch(advoperation){
                case 's':
                    std::cout << "Enter the number you would like to square root ";
                    std::cin >> advnum1;

                    std::cout << "The result is: " << sqrt(advnum1) << '\n';
                    break;

                case 'p':
                    std::cout << "Enter the first number: ";
                    std::cin >> advnum1;

                    std::cout << "What power would you like " << advnum1 << " to be raised to? ";
                    std::cin >> advpownum;

                    std::cout << "The result is: " << pow(advnum1, advpownum) << '\n';
                    break;

                default: std::cout << "Please enter a possible operation (s, p)\n";

            }
            std::cout << "Do you want to enter another calculation? (y/n)";
            std::cin >> advrunres;
            std::cin.ignore(1000, '\n');

            if(advrunres == 'n' || advrunres == 'N'){
                advrunres = 'f';
            }
        }
    }

    std::cout << "Would you like to continue to the standard calculator? (Y/N)";
    std::cin >> ctstd;

    while(ctstd == "Y" || ctstd == "y"){
    std::cout << "Please enter your operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << '\n' << "Enter the first number: ";
    std::cin >> num1;

    std::cout << '\n' << "Enter the second number: ";
    std::cin >> num2;

    std::cout << '\n';

    switch(operation){
        case '+':
            std::cout << "The result is: " << num1 + num2 << '\n';
            break;
        case '-':
            std::cout << "The result is: " << num1 - num2 << '\n';
            break;
        case '*':
            std::cout << "The result is: " << num1 * num2 << '\n';
            break;
        case '/':
            std::cout << "The result is: " << num1 / num2 << '\n';
            break;
        default:
            std::cout << "Please enter an operation (+, -, *, /) \n";
        }
    
        std::cout << "Would you like to enter another equasion? (Y/N)";
        std::cin >> ctstd;
    }

    std::cout << "Copyright 2026 'Swoff' \n";
    std::cout << version << '\n';
    std::cout << "******************************";
    std::cin.ignore(1000, '\n');
    std::cin.get(); //Use both of these to make the .exe stay open!
    std::cin.get();
    return 0;
}