
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
