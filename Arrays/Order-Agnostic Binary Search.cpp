#include <iostream>
using namespace std;

int binary_search(int arr[], int start, int end, int key) 
{ 
    int ascending = 0;

    if (arr[start] < arr[end])
        ascending = 1;


    while (start <= end) 
    { 
        int mid = start + (end - start) / 2; 
        if (arr[mid] == key) 
            return mid; 
  
        if(ascending == 1)
        {
            if (arr[mid] < key) 
                start = mid + 1; 
            else
                end = mid - 1; 

        } else {
            if (arr[mid] < key) 
                end = mid - 1; 
            else
                start = mid + 1; 
        }
    }  
    return -1; 
} 
  
int main(void) 
{ 
    //descending order
    int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; 
    int key = 2; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int result = binary_search(arr, 0, size - 1, key); 
    if(result == -1)
    {  
        cout << "Key is not present in array"<<endl;
    } else {
        cout << "Key is present at index " << result<<endl ;
    }


    //ascending order
    int arr_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int key_1 = 2; 
    int size_1 = sizeof(arr) / sizeof(arr[0]); 
    int result_1 = binary_search(arr_1, 0, size_1 - 1, key_1); 
    if(result_1 == -1)
    {  
        cout << "Key is not present in array"<<endl;
    } else {
        cout << "Key is present at index " << result_1<<endl ;
    }

    return 0; 
} 
