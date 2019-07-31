/*
    Author: Jarom Wilcox
    Project: Command Line Rent Calculator
    Date: 10/14/2017
    Instructions: Run the program and follow on screen instructions.
 */

#include <iostream>

void display()
{
  std::cout << "\t\t   - - : ---------------------------: - -" << std::endl;
  std::cout << "\t\t - - : Welcome to the Rent Calculator! : - -" << std::endl;
  std::cout << "\t\t   - - : ---------------------------: - -" << std::endl;;
}

void help(char x)
{
  char entry = x;
  if (entry == 'h')
  {
    std::cout << "This program is designed to calculate the monthly rent between " << std::endl;
    std::cout << "two roomates. It is calculated by using these rules: " <<std::endl;
    std::cout << "\t 1) Half the total rent is calculated." << std::endl;
    std::cout << "\t 2) Half the total internet is calculated." << std::endl;
    std::cout << "\t 3) Half the total utilities is calculated." << std::endl;
    std::cout << "\t 4) The result is half the total rent, plus " << std::endl;
    std::cout << "\t    half the internet, minus half of the utilities." << std::endl;
    std::cout << std::endl;
  }
  else
    std::cout << "Good Luck!" << std::endl;
}

void calculate()
{
    int rent = 0;
    int net = 0;
    int power = 0;
    int final_amt = 0;
    int half_rent = 0;
    int half_net = 0;
    int half_power = 0;

    std::cout << "\t Enter the total rent due: $";
    std::cin >> rent;
    half_rent = rent/2;
    final_amt = half_rent;

    std::cout << "(Currently) You owe: $" << final_amt << std::endl;
    std::cout << "\t Enter total internet due: $";
    std::cin >> net;
    half_net = net/2;
    final_amt = final_amt + half_net;

    std::cout << "(Currently) You owe: $" << final_amt << std::endl;
    std::cout << "\t Enter total utilities paid: $";
    std::cin >> power;
    half_power = power/2;
    final_amt = final_amt - half_power;

    std::cout << "You owe: $" << final_amt << std::endl << std::endl;
}

int main ()
{
  char x = ' ';
  display();
  std::cout << "(type 'h' to see help or 'c' to continue)" << std::endl;
  std::cin >> x;
  help(x);
  char entry = 'y';
  while (entry == 'y')
  {
    calculate();
    std::cout << "Would you like to run the calculator again? (y/n)";
    std::cin >> entry;
  }
  return 0;
}
