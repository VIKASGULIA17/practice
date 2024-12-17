#include <iostream>
using namespace std;
namespace First {

    void display() {
        cout << "First namespace" << endl;
    }
}

namespace Second {
    void display() {
        cout << "Second namespace" << endl;
    }
}

int main() {
    First::display(); // Calls display() from First
    Second::display(); // Calls display() from Second
    return 0;
}
