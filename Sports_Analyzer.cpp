#include<iostream>
#include <cstdlib>
#include<string>
#include<iomanip>
using namespace std;


int query(int score)
{
	score = 0;
	char choice;
	string Q[] = { "Do you support this team?",
		"Do you have a favorite player in this team?",
		"Does the public love this team more?",
		"Do you think that this team is better than the other one?",
		"Do you think this team will win ?" };
	for (int i = 0; i < 5; i++)
	{
		cout << Q[i];
		cin >> choice;
		if (choice == 'y' || choice == 'Y') score += 1;
		else;
	}
	return score;
}

int main()
{
	
	int team_1 = 0, team_2 = 0;
	cout << "Please fill in the below forms:\n\n";
	cout << "Answer the following for team 1 (Y/N):\n";
	team_1 = query(team_1);
	cout << "\n\nAnswer the following for team 2 (Y/N):\n";
	team_2 = query(team_2);

	cout << "\n\n\nMy prediction:\n";
	if (team_1 > team_2) cout << "I think team 1 has a better chance of winning.\n\n";
	else if (team_2 > team_1) cout << "I think team 2 has a better chance of winning.\n\n";
	else if (team_1 == team_2) cout << "I think it will be a tie.\n\n";
	return 0;
}