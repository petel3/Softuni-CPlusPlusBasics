#include <iostream>
#include <string>

using namespace std;

int main()
{
    string movie,typeTickets;
	double totalKidTicketCount = 0, totalStudentTicketCount = 0, totalStandardTicketCount = 0;
    cin >> ws;
	cout.setf(ios::fixed);
	cout.precision(2);
	while (getline(cin,movie) && movie!="Finish")
	{
		int tickets,sumOfTickets;
		double kidTicketCount = 0, studentTicketCount = 0, standardTicketCount = 0;
		cin >> tickets;
		int ticketsForMovie;
		ticketsForMovie = tickets;

		

		while (tickets>0 && cin>>typeTickets && typeTickets!="End")
		{
			if (typeTickets=="kid")
			{
				kidTicketCount++;
				totalKidTicketCount++;
			}
			else if (typeTickets=="standard")
			{
				standardTicketCount++;
				totalStandardTicketCount++;
			}
			else if (typeTickets=="student")
			{
				studentTicketCount++;
				totalStudentTicketCount++;
			}
			
			tickets--;

		}
		sumOfTickets = kidTicketCount + standardTicketCount + studentTicketCount;
		cout << movie << " - " << 100.0 * sumOfTickets / ticketsForMovie << "% full." << endl;
		cin >> ws;
	}
	int totalTicketsCount = totalStandardTicketCount + totalKidTicketCount + totalStudentTicketCount;
	cout << "Total tickets: " << totalTicketsCount<<endl;
	cout << 100.0*totalStudentTicketCount / totalTicketsCount << "% student tickets." << endl;
	cout << 100.0*totalStandardTicketCount / totalTicketsCount << "% standard tickets." << endl;
	cout << 100.0*totalKidTicketCount / totalTicketsCount << "% kids tickets." << endl;
}
