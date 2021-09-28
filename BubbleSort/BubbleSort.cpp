// Perform bubble sort on vector

#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> values = { 4, 3, 5, 7, 2, 4, 6, 4, 66, 2, 3, 32, 53, 62 };
	int temp;

	for (unsigned int i = 0; i < values.size() - 1; ++i)
	{
		for (unsigned int j = 1; i + j < values.size(); ++j)
		{
			if (values[i] > values[i + j])
			{
				temp = values[i];
				values[i] = values[i + j];
				values[i + j] = temp;
			}
		}
	}

	for (const auto& value : values) cout << value << " ";

}
