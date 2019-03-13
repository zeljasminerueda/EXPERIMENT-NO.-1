#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double ticketbox, ticketsideline, ticketpremium, ticketgenad;
	double pricebox, priceside, pricepremium, pricegenad;
	double totalbox, totalside, totalpremium, totalgenad;

	cout << "Input number of Tickets Sold in box, sideline, premium, and general admission separated by space" << endl;
	cin >> ticketbox >> ticketsideline >> ticketpremium >> ticketgenad;
	cout << " " << endl;

	pricebox = 250;
	priceside = 100;
	pricepremium = 50;
	pricegenad= 25;

	totalbox = pricebox * ticketbox;
	totalside = priceside * ticketsideline;
	totalpremium = pricepremium * ticketpremium;
	totalgenad = pricegenad * ticketgenad;

	cout << "Ticket Price" << "			" << "Number of Tickets Sold" << "			" << "Total Ticket Sales" << endl;
	cout << pricebox << "			        " <<    ticketbox << "					" << totalbox << endl;
	cout << priceside << "			        " <<    ticketsideline << "					" << totalside << endl;
	cout << pricepremium << "				" <<    ticketpremium << "					" << totalpremium << endl;
	cout << pricegenad << "			        " <<    ticketgenad << "					" << totalgenad << endl;

	cout << " " << endl;
	cout << "Overall ticket sales" << endl;
	cout << totalbox + totalside + totalpremium + totalgenad << endl; 


	_getch();
	return 0;
}