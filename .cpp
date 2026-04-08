#include<iostream>

#define MAX 100

using namespace std;

int main() {
    int n;
    int j = 1;
    cout << "Enter the number of elements: ";
    cin >> n;

    int nums[MAX];
    cout << "Enter the elements: ";
    for (int i = 0;i < n;i++) {
        cin >> nums[i];
    }
    for (int i = 1;i < n;i++) {
        if (nums[i] != nums[i - 1]) {
            nums[j] = nums[i];
            j++;
        }
    }
    cout << j << endl;
    int i = 0;
    for (;i < n;i++) {
        cout << nums[i] << " ";
    }
    return 0;
}