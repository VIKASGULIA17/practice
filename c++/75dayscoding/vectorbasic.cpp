#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    cout << "First element: " << numbers[0] << endl;
    cout << "Second element: " << numbers[1] << endl;
    numbers[2] = 10;
    cout << "Modified third element: " << numbers[2] << endl;
    cout << "Size of the vector: " << numbers.size() << endl;
    cout << "Elements in the vector: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
   

    return 0;
}
