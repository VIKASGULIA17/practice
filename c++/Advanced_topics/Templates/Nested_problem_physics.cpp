// Create a nested namespace Physics::Mechanics with a function calculateForce(mass, acceleration) that calculates force using 
// 𝐹
// =
// 𝑚
// 𝑎
// F=ma.
// Create an alias for the nested namespace and call the function.

#include<iostream>
using namespace std;

namespace Physics{
    namespace Mechanice{
        int CalculateForce(int mass,int acc){
            return mass*acc;
        }
    }
}
namespace Phy=Physics::Mechanice;
int main(){
    cout<<Phy::CalculateForce(4,7);
}