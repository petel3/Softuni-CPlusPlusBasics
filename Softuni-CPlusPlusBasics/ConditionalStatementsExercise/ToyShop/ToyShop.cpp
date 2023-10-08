#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
	const double PUZZLE_PRICE = 2.60;
	const double TALKING_DOLL = 3;
	const double TEDDY_BEAR = 4.1;
	const double MINION = 8.2;
	const double TRUCK = 2;

	double priceOfVacation;
	int countPuzzles, countTalkingDolls, countTeddyBears, countMinions, countTrucks;
	cin >> priceOfVacation >> countPuzzles >> countTalkingDolls >> countTeddyBears >> countMinions >> countTrucks;

	int totalCountOfToys = countPuzzles + countTalkingDolls + countTeddyBears + countMinions + countTrucks;

	double totalPrice = countPuzzles * PUZZLE_PRICE + countTalkingDolls * TALKING_DOLL + countTeddyBears * TEDDY_BEAR
		+ countMinions * MINION + countTrucks * TRUCK;

	if (totalCountOfToys >= 50)
	{
		totalPrice = totalPrice - totalPrice * 0.25;
	}
	double rent = totalPrice * 0.1;
	totalPrice -= rent;

	if (priceOfVacation <= totalPrice)
	{
		totalPrice -= priceOfVacation;

		cout.setf(ios::fixed);
		cout.precision(2);
		cout << "Yes! " << totalPrice << " lv left." << endl;
		//o	"Yes! {оставащите пари} lv left."
	}
	else
	{
		priceOfVacation -= totalPrice;

		cout.setf(ios::fixed);
		cout.precision(2);
		cout << "Not enough money! " << priceOfVacation << " lv needed." << endl;
	}

}
