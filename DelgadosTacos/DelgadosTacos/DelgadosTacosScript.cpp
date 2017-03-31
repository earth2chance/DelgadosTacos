//Delgados Tacos
//Chance Daily
// 3-30-2017
#include <iostream>
#include <string>

int main()
{
	const double taxRate = 1.075;

	double tacoPrice = 0.99;
	double steaktacoPrice = 1.99;
	double quesadillaPrice = 3.99;
	double burritoPrice = 2.99;
	double ricePrice = 1.99;
	double beansPrice = 1.99;
	double steakburritoPrice = 5.99;
	double beanburritoPrice = 3.99;
	double surprisePrice = 6.99;
	double sodaPrice = 1.99;
	

	double tacoOrdered, steaktacoOrdered, quesadillaOrdered, burritoOrdered;
	double riceOrdered, beansOrdered, steakburritoOrdered, beanburritoOrdered;
	double surpriseOrdered, sodaOrdered, total, totalWithTax;

	std::cout << "Welcome to Delgados Tacos!" << std::endl;


	std::cout << "How many Tacos would you like? ";
	std::cin >> tacoOrdered;

	std::cout << "How many Steak Tacos would you like? ";
	std::cin >> steaktacoOrdered;

	std::cout << "How many Quesadillas would you like? ";
	std::cin >> quesadillaOrdered;

	std::cout << "How many Burritos would you like? ";
	std::cin >> burritoOrdered;

	std::cout << "How many orders of Rice would you like? ";
	std::cin >> riceOrdered;

	std::cout << "How many orders of Beans would you like? ";
	std::cin >> beansOrdered;

	std::cout << "How many Steak Burritos would you like? ";
	std::cin >> steakburritoOrdered;

	std::cout << "How many Bean Burritos would you like? ";
	std::cin >> beanburritoOrdered;

	std::cout << "How many Delgados Surprises would you like? ";
	std::cin >> surpriseOrdered;

	std::cout << "How many Sodas would you like? ";
	std::cin >> sodaOrdered;

	total = (tacoOrdered * tacoPrice) + (steaktacoOrdered * steaktacoPrice) + (quesadillaOrdered * quesadillaPrice) +
		(burritoOrdered * burritoPrice) + (riceOrdered * ricePrice) + (beansOrdered * beansPrice) + 
		(steakburritoOrdered * steakburritoPrice) + (beanburritoOrdered * beanburritoPrice) + 
		(surpriseOrdered * surprisePrice) + (sodaOrdered * sodaPrice);

	totalWithTax = total * taxRate;
	
	std::cout << "Your total is: " << totalWithTax << "!" << std::endl;
	std::cout << "Come back soon!" << std::endl;
	
}