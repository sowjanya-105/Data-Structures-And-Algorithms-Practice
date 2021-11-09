//Approach:
//The idea is to traverse every array element and find the highest bars on the left and right sides. Take the smaller of two heights. The difference between the smaller height and height of the current element is the amount of water that can be stored in this array element.
//
//Algorithm:
//
//Traverse the array from start to end.
//For every element, traverse the array from start to that index and find the maximum height (a) and traverse the array from the current index to end, and find the maximum height (b).
//The amount of water that will be stored in this column is min(a,b) – array[i], add this value to the total amount of water stored
//Print the total amount of water stored.

class Solution {
public:

int trap(vector<int>& arr)
{
	int res = 0;
	int n=arr.size();
	
	// For every element of the array
	for(int i = 1; i < n - 1; i++)
	{
	 // Find the maximum element on its left	
		int lMax = arr[i];

		for(int j = 0; j < i; j++)
			lMax = max(lMax, arr[j]);
	// Find the maximum element on its right  
		int rMax = arr[i];

		for(int j = i + 1; j < n; j++)
			rMax = max(rMax, arr[j]);
	 // Update the maximum water   
		res+= (min(lMax, rMax) - arr[i]);
	}

	return res;
}
};

