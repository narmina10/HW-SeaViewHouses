#include <iostream>
#include <vector>
using namespace std;

vector<int> findSeaViewHouses(const std::vector<int>& heights) {
	int n = heights.size();
	vector<int> seaViewHouses;
	int maxHeight = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (heights[i] > maxHeight) {
			seaViewHouses.push_back(i);
			maxHeight = heights[i];}
		}
	reverse(seaViewHouses.begin(), seaViewHouses.end());
	return seaViewHouses;
}

int main() {
	vector<int> heights = {2, 4, 3};
	vector<int> seaViewHouses = findSeaViewHouses(heights);
	cout << "Houses with sea view: ";
	for (int i : seaViewHouses) {
		std::cout << i << " ";
	}
	cout << std::endl;
	return 0;
}