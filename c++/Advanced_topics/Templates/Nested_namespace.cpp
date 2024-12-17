#include <iostream>
namespace Company {
    namespace HR {
        void greet() {
            cout << "Welcome to the HR Department!" << endl;
        }
    }
}

int main() {
    Company::HR::greet(); // Accessing nested namespace
    return 0;
}

//other way doing it

namespace HR = Company::HR; // Alias for Company::HR

int main() {
    HR::greet(); // Using alias instead of full path
    return 0;
}

//other way using namespace 
namespace HR = Company::HR; // Alias for Company::HR

int main() {
    using namespace HR;
    greet(); // Using alias instead of full path
    return 0;
}
