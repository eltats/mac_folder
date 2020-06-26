#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> rolf(3, 1);
	for (auto i : rolf){
		cout << i << '\n';
	}
}
