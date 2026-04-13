#include <iostream>
#include <cmath>

std::string advcalc;
char operation;
double num1;
double num2;
char advoperation;
int advnum;
int advpownum;
std::string ctstd;
std::string version = "1.0.0";
char advrunres = 't';
char helpmnu;

int advcalcfnc() {
        while(advrunres == 'y' || advrunres == 'Y' || advrunres == 't'){
            std::cout << "Enter your operation of choice (s, p, c): ";
            std::cin >> advoperation;

            switch(advoperation){
                case 's':
                    std::cout << "Enter the number you would like to square root ";
                    std::cin >> num1;

                    std::cout << "The result is: " << sqrt(num1) << '\n';
                    break;

                case 'p':
                    std::cout << "Enter the first number: ";
                    std::cin >> num1;

                    std::cout << "What power would you like " << num1 << " to be raised to? ";
                    std::cin >> advpownum;

                    std::cout << "The result is: " << pow(num1, advpownum) << '\n';
                    break;

                case 'c':
                    std::cout << "Enter the number you would like to find the cubed root of: ";
                    std::cin >> num1;

                    std::cout << "The result is: " << cbrt(num1) << '\n';
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
    return 0;
}

int stdcalcfnc() {
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
    return 0;
}

int main() {
    system("title Kopikala Calculator"); //Adds the title
    std::cout << "**********Kopikala Calculator**********" << '\n';

    std::cout << "Welcome to the calculator. Would you like to open the help menu (Y/N)?";
    std::cin >> helpmnu;

    if(helpmnu == 'Y' || helpmnu == 'y'){
        std::cout << "Advanced calculator: \n";
        std::cout << "s = Square Root (ex. Square Root of 9 is 3)\n";
        std::cout << "p = Power (ex. 5 to the power of 2 is 25) \n";
        std::cout << "c = Cubed Root (ex. Cubed root of 27 is 3)";
        
        std::cout << '\n' << "Standard Calculator: \n";
        std::cout << "+ = Addition (ex. 5 + 5 = 10)\n";
        std::cout << "- = Subtraction (ex. 5 - 3 = 2)\n";
        std::cout << "* = Mutiplication (ex. 5 * 4 = 20)\n";
        std::cout << "/ = Division (ex. 9 / 3 = 3)\n";
    }
    
    std::cout << "Would you like to go into the advanced calculator? (Y/N) ";
    std::cin >> advcalc;

    if(advcalc == "Y" || advcalc == "y"){
        advcalcfnc();
    }

    std::cout << "Would you like to continue to the standard calculator? (Y/N)";
    std::cin >> ctstd;

    if(ctstd == "Y" || ctstd == "y"){
        stdcalcfnc();
    }

    std::cout << "Copyright 2026 Kopikala Studios \n";
    std::cout << version << '\n';
    std::cout << "***************************************";
    std::cin.ignore(1000, '\n');
    std::cin.get(); //Use both of these to make the .exe stay open!
    std::cin.get();
    return 0;
}