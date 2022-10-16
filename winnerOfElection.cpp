#include "bits/stdc++.h"
using namespace std;

void findWinner(vector<string>& allVotes)
{

	unordered_map<string, int> m;
	for (auto& str : allVotes) {
		m[str]++;
	}

	int max = 0;
	string winner;
	for (auto& entry : m) {
		string key = entry.first;
		int val = entry.second;
		if (val > max) {
			max = val;
			winner = key;
		}

		else if (val == max && winner > key)
			winner = key;
	}
	cout << winner << endl;
}

int main()
{
	vector<string> allVotes = { "Vivian", "Sarah", "John", "Sarah",
			"John", "Vivian", "Violet", "Violet",
			"Vivian", "Sarah", "Violet", "Sarah"
            };
    findWinner(allVotes);
	return 0;
}
