This project defines a function  **findSeaViewHouses** that identifies houses that have a sea-view based on their heights, storing their indices in a vector:  <br>
```
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
```
The main function demonstrates the usage of this function by finding sea view houses from a given set of heights and printing their indices:
```
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
```
In this case, with our input being "2, 4, 3", we will get the result <br>

```
 Houses with sea view: 2, 1
```
which are indexes of the third and second houses respectively.
