/*Reverse Roll Numbers List A teacher stores roll numbers of 5 students in an array. Write a C++ program that inputs
5 roll numbers from the user and passes the array to a function. The function should display all roll numbers in reverse order.
Write the above code using return( ) method.*/
#include<iostream>
using namespace std;
int reverse(int arr[], int n)
{
    for(int i = n-1; i >= 0; i--){
        cout << arr[i] << endl;
    }
    return 0;
}
int main()
{
    int arr[5];
    cout << "Enter 5 roll numbers: ";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    cout << "Reversed: "<<endl;
    reverse(arr, 5);
    return 0;
}
