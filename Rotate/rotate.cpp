// Rotate a vector of values by a specified number of positions.

#include <vector>
#include <iostream>

using namespace std;

int main()
{
	const vector<int> values = {12, 45, 32, 23, 54, 2, 25, 23, 13};
	vector<int> results;

	const int size = values.size();
	results.resize(size);

	cout << "Rotate the following vector: " << endl;

	for (const auto& value : values) cout << value << " ";

	cout << endl << "Number of positions: ";

	int rot;
	cin >> rot; 
	cout << endl;

	// insure rot is not bigger than size of vector
	rot = rot % size;

	// insure positive rotation amount
	rot = rot < 0 ? rot + size : rot;

	// set starting position for rotation
	const int pos = size - rot;

	// copy values to results and handle rollover
	for (int i = 0; i < size; i++) results[(i + pos) % size] = values[i];

	for (const auto& result : results) cout << result << " ";

	return 0;
}
