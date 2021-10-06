#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
	int val;
	cin >> val;
	vector<string> str(val);
	unordered_map<char, int> str_stat;
	for (int i = 0; i < val; i++)
		cin >> str[i];
	for (auto tmp : str)
	{
		if (tmp.size() % 2)
		{
			cout << "No\n";
			continue;
		}
			
		for (auto ch :tmp)
		{
			str_stat[ch]++;
		}
		if (str_stat['A'] + str_stat['C'] == str_stat['B'])
			cout << "Yes\n";
		else
			cout << "No\n";
		str_stat.clear();
	}
}
