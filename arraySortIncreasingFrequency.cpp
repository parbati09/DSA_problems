#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, pair<int, int> > p,
			pair<int, pair<int, int> > p1)
{
	if (p.second.second != p1.second.second)
		return (p.second.second < p1.second.second);
	else
		return (p.second.first > p1.second.first);
}
void sortByFrequency(int arr[], int n)
{
	unordered_map<int, pair<int, int> > hash;
	for (int i = 0; i < n; i++) {
		if (hash.find(arr[i]) != hash.end())
			hash[arr[i]].second++;
		else
			hash[arr[i]] = make_pair(i, 1);
	} 

	auto it = hash.begin();

	vector<pair<int, pair<int, int> > > v;
	for (it; it != hash.end(); ++it)
		v.push_back(make_pair(it->first, it->second));

	sort(v.begin(), v.end(), comp);

	for (int i = 0; i < v.size(); i++) {
		int count = v[i].second.second;
		while (count--)
			cout << v[i].first << " ";
	}
}

int main()
{
	int arr[] = { 2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8 };
	int n = sizeof(arr) / sizeof(arr[0]);
	sortByFrequency(arr, n);
	return 0;
}
