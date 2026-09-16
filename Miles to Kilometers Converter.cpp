#include <iostream>
using namespace std;

int main ()
{
	cout << "Welcome To The World Travel Planner! " << endl;
	float d_miles;
	float d_km;
	
	cout << "Enter the distance you plan to travel in miles : " << endl;
	cin >> d_miles;

	d_km = (d_miles * 1.60934);

	cout << "Converted distance: " << d_km << endl;

	cout << "you plan to travel: " << d_miles << " miles"<< endl;
	cout << "In International Matrics, that is approximately: " << d_km << " kilometers"<< endl;

	return 0;

}