#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the length of the array";
    cin >>n;
    char arr[n+1];
    cin >> arr;
    bool check =1;
    for (int i=0;i<n; i++){
        if (arr[i] != arr[n-1-i]){
            check=0;
            break;
        }
    }
    if (check==1){
        cout << " this is palindrome";
    }
    else{
        cout << "this is not a palindrome";
    }
    
}