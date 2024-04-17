#include <iostream>
using namespace std;
int main(){
	
	
//	car, 20 gallon gas tank give average 23.5, driving in town.
//and 23.5, driving on highway
//distance = gallon * average per  gallon

int GG = 20;
double HA = 28.5;
double TA = 23.5;	


double TD = GG * TA;
double HD = GG * HA;
//double total_distance =	highway_distance + town_distance;
 
cout<<"The total distance in town is: "<< TD <<endl;	
cout<<"The total distance on highway is: "<<HD <<endl;

	return 0;
}