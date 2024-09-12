#include <bits/stdc++.h>
using namespace std;

void swapIfLarger(vector<long long> &a, vector<long long> &b, int ind1, int ind2) {
    if (ind1 >= 0 && ind2 >= 0 && a[ind1] > b[ind2]) {
        swap(a[ind1], b[ind2]);
    }
}

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b) {
    int n = a.size();
    int m = b.size();
    int len = n + m;

    int gap = (len + 1) / 2;  // Initialize the first gap value

    while (gap > 0) {
        int left = 0;
        int right = gap;

        while (right < len) {
            // When both pointers are in the first array
            if (left < n && right < n) {
                if (a[left] > a[right]) {
                    swap(a[left], a[right]);
                }
            }
            // When left pointer is in the first array and right pointer is in the second array
            else if (left < n && right >= n) {
                swapIfLarger(a, b, left, right - n);
            }
            // When both pointers are in the second array
            else if (left >= n) {
                if (b[left - n] > b[right - n]) {
                    swap(b[left - n], b[right - n]);
                }
            }
            left++;
            right++;
        }

        if (gap == 1) break; // If gap is 1, end the loop

        gap = (gap + 1) / 2; // Reduce the gap for the next iteration
    }
}

// Example usage
int main() {
    vector<long long> a = {1, 4, 7, 8, 10};
    vector<long long> b = {2, 3, 9};

    mergeTwoSortedArraysWithoutExtraSpace(a, b);

    cout << "Array A: ";
    for (long long x : a) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Array B: ";
    for (long long x : b) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
