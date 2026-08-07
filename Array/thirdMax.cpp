#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int mx = INT_MIN, sec_mx = INT_MIN, third_mx = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mx) {
            third_mx = sec_mx;
            sec_mx = mx;
            mx = arr[i];
        }
        else if (arr[i] > sec_mx && arr[i] < mx) {
            third_mx = sec_mx;
            sec_mx = arr[i];
        }
        else if (arr[i] > third_mx && arr[i] < sec_mx) {
            third_mx = arr[i];
        }
    }

    cout << "Largest = " << mx << endl;
    cout << "Second Largest = " << sec_mx << endl;
    cout << "Third Largest = " << third_mx << endl;

    return 0;
}
