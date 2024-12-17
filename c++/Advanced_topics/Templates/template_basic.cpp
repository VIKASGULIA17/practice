#include<iostream>
using namespace std;

namespace name{
    int v=23;
    void display(){
        cout<<"hello";
    }
}
int main(){
    name::display();
}

////Other way for doing this 


#include<iostream>
using namespace std;

namespace name{
    int v=23;
    void display(){
        cout<<"hello";
    }
}
int main(){
    using namespace name;
    display();
}