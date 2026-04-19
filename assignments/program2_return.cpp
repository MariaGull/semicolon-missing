// Program 2B - Shop Sales Even and Odd Days
// Statement: A shop owner records daily sales amounts for 5 days.
// Write a C++ program that stores these sales values in a
// single-dimensional array. Pass the array to a function that
// counts and displays how many sales values are even and how many are odd.
// Note: Using return() method.

#include<iostream>
using namespace std;
int countEven(int arr[], int n){
    int even = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i] % 2 == 0)
            even++;
    }
    return even;
}

int main(){
    int arr[5];
    cout << "Enter 5 sales amounts: ";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    int even = countEven(arr, 5);
    int odd = 5 - even;
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    return 0;
}
