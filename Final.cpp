//**********************************************************************************************************************************************************************************************************************
//Names: Florence, Audrey, Brooke
//Date: 6/1/2025
//Input:
//Output:
//Description: Calculate financial stuff
//*********************************************************************************************************************************************************************************************************************
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cmath>

double mortgage(){
int mainPrice;
int mainDown;
int mainLoan;
double mainInterest;
double mainTax;
  
        std::cout << "Enter the home price, in dollars: ";
        std::cin >> mainPrice;
      
        std::cout << "Enter the down payment, in dollars: ";
        std::cin >> mainDown;
  
        std::cout << "Enter the length of loan, in months: ";
        std::cin >> mainLoan;
  
        std::cout << "Enter the Monthly Interest Rate, in percentage: ";
        std::cin >> mainInterest;

        std::cout << "Enter the property tax rate, in percentage: ";
        std::cin >> mainTax;

       double mortgagePrinciple = mainPrice-mainDown;
       double monthlyTax = ((mainTax * mainPrice) / 12)/100;
       double monthlyInsurance = ((mainInsurance*mainPrice) / 12)/100;
       double num = pow(1+(mainInterest/100),mainLoan);
      double monthlyMortgage = ((mortgagePrinciple*((mainInterest/100)*num)) / (num-1)) +(monthlyTax + monthlyInsurance);
	       
	std::cout << "Your estimated monthly payment is: $" << monthlyMortgage << "\n";

	double totalPaid = (monthlyMortgage*mainLoan);
	std::cout << "Total paid: $" << totalPaid << "\n" ;
	std::cout << "Principal paid: $" << mortgagePrinciple << "\n" ;
	
	double additionalPaid = (totalPaid-mortgagePrinciple); 
	std::cout << "Additional paid: $" << additionalPaid << "\n";
	std::cout << "Thank you for using the mortgage calculator." << "\n";

for (int year = 1; year <= 30; ++year) {
  // perform yearly updates
for (int month = 1; month <= 12; ++month) {
// Perform monthly updates
  //lock the ability to switch to rent track until the end of the simulation
}
}
}

double renting(){
for (int year = 1; year <= 30; ++year) {
  // perform yearly updates
for (int month = 1; month <= 12; ++month) {
// Perform monthly updates
}
}
}

int main(){
char choice;

std::cout << "Welcome to the financial calculator!" << std::endl;

std::cout << "Would you like to calculate buying a home (B) or renting a home (R)? :";
std::cin >> choice;

if (choice == 'B'){
mortgage();
}
else {

}

return 0;
}

