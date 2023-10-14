#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
	double minRating = INT_MAX;
	double maxRating = INT_MIN;
	double sumRating = 0;
	string minRatingMovieName,maxRatingMovieName;

	for (int i = 1; i <= n; i++)
	{
		string movieName;
		cin >> ws;
		getline(cin, movieName);
		
		double rating;
		cin >> rating;

		if (maxRating<rating)
		{
			maxRatingMovieName = movieName;
			maxRating = rating;
		}
		else if (minRating>rating)
		{
			minRatingMovieName = movieName;
			minRating = rating;
		}
		sumRating += rating;

	}
	cout.setf(ios::fixed);
	cout.precision(1);

	cout << maxRatingMovieName << " is with highest rating: " << maxRating << endl;
	cout << minRatingMovieName << " is with lowest rating: " << minRating << endl;
	cout << "Average rating: " << sumRating / n << endl;
}
