// Program 2A - Shop Sales Even and Odd Days
// Statement: A shop owner records daily sales amounts for 5 days.
// Write a C++ program that stores these sales values in a
// single-dimensional array. Pass the array to a function that
// counts and displays how many sales values are even and how many are odd.
#include<iostream>
using namespace std;

void sales(int arr[], int n){
    int even=0, odd=0;
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
}
int main(){
    int arr[5];
    cout << "Enter 5 sales amounts: ";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
   sales(arr, 5);
    return 0;
}
