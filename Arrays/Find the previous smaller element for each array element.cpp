#include <stdio.h>
using namespace std;

void findPrevSmaller(int arr[], int n)
{
  
    for (int i = 0; i < n; i++)
    {
       int prev = -1;
 
        for (int j = i - 1; j >= 0; j--)
        {
           if (arr[j] < arr[i])
            {
                prev = arr[j];
                break;
            }
        }
 
        printf("%d ", prev);
    }
}
 
int main(void)
{
    int arr[] = { 2, 5, 3, 7, 8, 1, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findPrevSmaller(arr, n);
 
    return 0;
}



