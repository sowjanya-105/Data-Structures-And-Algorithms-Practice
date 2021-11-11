//Majority element is an element that appears more than n/2 times in an array of size n.
int maj(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		int count=1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			count++;
			
			if(count>n/2)
			return i;
		}
	}
	return -1;
}
