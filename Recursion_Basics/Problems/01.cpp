#include<bits/stdc++.h>
using namespace std;

int sum(int n, int arr[]) {
    if(n < 0) return 0;
    return sum(n-1, arr) + arr[n];
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << sum(2, arr);

    return 0;
}