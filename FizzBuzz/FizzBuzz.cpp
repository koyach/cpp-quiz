// FizzBuzz using transform

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	vector<int> values(100);
	vector<string> results;
	results.resize(values.size());

	iota(values.begin(), values.end(), 1);

	auto fizzbuzz = [](int i) -> string
	{
		if ((i % 15) == 0) return "fizzbuzz";
		if ((i % 5) == 0)  return "buzz";
		if ((i % 3) == 0)  return "fizz";
		return to_string(i);
	};

	transform(values.begin(), values.end(), results.begin(), fizzbuzz);

	for (auto& str : results) cout << str << endl;
}