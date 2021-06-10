// Given a vector of numbers determine duplicates

#include <vector>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	vector<int> values = { 0, 4, 4, 1, 2, 2, 3, 2, 3 };
	set<int> results;

	cout << "Find duplicates in following vector:" << endl;

	for (const auto& value : values) cout << value << " ";
	
	cout << endl;
	cout << "Sorted vector:" << endl;
	
	sort(values.begin(), values.end());

	for (const auto& value : values) cout << value << " ";

	cout << endl;

	// Previous value to compare
	int prev = 0;
	bool start = true;

	for (const auto& value : values)
	{
		if (prev == value && !start)
		{
			results.insert(value);
		}
		else
		{
			prev = value;
		}
		start = false;
	}

	cout << "Duplicates found:" << endl;

	for (const auto& result : results) cout << result << " ";
}
