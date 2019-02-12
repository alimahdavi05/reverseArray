#include<iostream>

using namespace std;


void revereseArray(int arr[], int start, int end) // defining function for reverse array
{
   while (start < end) 
   {
       int temp = arr[start];
       arr[start] = arr[end];
       arr[end] = temp;
       start++;
       end--;
   }
}

void printArray(int arr[], int size) // function to print an array
{

for (int i = 0; i < size; i++)

cout << arr[i] << " "<<endl;
}


int main() 
{
   int arr[] = {1, 2, 3, 4};
cout << "Before:" << endl;
   printArray(arr, 4);     // print original array
   revereseArray(arr, 0, 3); // Function calling
   cout << "After:" << endl; // print the Reversed array
   printArray(arr, 4);
   return 0;
}
