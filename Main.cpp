#include <iostream>
#include <ctime>
#include <sstream>
#include <cstdlib>
#include <vector>
#include "Competition.h"

using namespace std;

int contestant0[3];
int contestant1[3];
int contestant2[3];

int main()
{
	// Seed the random number generator
	srand(static_cast<unsigned int>(time(nullptr)));
	// Assign random scores to each contestant
	for (int i = 0; i < 3; i++)
	{
		contestant0[i] = rand() % 100 + 1;
		contestant1[i] = rand() % 100 + 1;
		contestant2[i] = rand() % 100 + 1;
	}

	// Calculate the total scores for each contestant
	int totalScore0 = contestant0[0] + contestant0[1] + contestant0[2];
	int totalScore1 = contestant1[0] + contestant1[1] + contestant1[2];
	int totalScore2 = contestant2[0] + contestant2[1] + contestant2[2];

	cout << "Competition time!" << endl;
	cout << "\n three contestants will compete in a competition, the judges will give out points between 1 and 100" << endl;
	cout << "\n the judges will decide the winner and print out the winners score" << endl;
	cout << "\n the contestants are: " << endl;

	// Print out the contestants
	for (int i = 0; i < 3; i++)
	{
		stringstream ss;
		ss << "\n contestant " << i;
		cout << ss.str() << endl;
	}

	cout << "\n The competitors total score:" << endl;
	cout << "\n contestant 0:\t" << totalScore0 << endl;
	cout << "\n contestant 1:\t" << totalScore1 << endl;
	cout << "\n contestant 2:\t" << totalScore2 << endl;

	// Decide the winner
	pair<int, vector<string>> result =determineMaxScore(totalScore0, totalScore1, totalScore2);
	cout << "\n The highest score is: " << result.first << endl;
	cout << "Achieved by:";
	for (const string& winner : result.second)
	{
		cout << " " << winner;
	}
	cout << endl;

	cin.get();
	
	return 0;
}