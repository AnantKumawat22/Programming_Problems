// Write a program to print the below pattern.

// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // cin>>n;

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cout<<(j + 1)<<" ";
        cout << endl;
    }
    return 0;
}