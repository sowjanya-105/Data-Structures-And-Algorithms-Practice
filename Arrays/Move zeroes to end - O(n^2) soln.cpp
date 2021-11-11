//when you see a 0, go to the right side of it
// and search for the 1st non-zero element.
//Then Swap 0 with thatnon-zero ele.

void moveToEnd(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			for(int j=i+1;j<n;j++)
			if(arr[j]!=0)
			swap(arr[i],arr[j])
		}
	}
}
