//This program asks a user to define 3D vectors and calculates their magnitude
#include <iostream>
#include <vector>
#include "Vector3D.h"
using namespace std;

int main(){
    //Here the user chooses how many 3D vectors he/she wants to define
    int n;
    cout << "How many 3D vectors do you want to define? " << endl;
    cin >> n;
    //Here the user defines the vectors and we save all those 3D vectors on a "C++ vector"
    vector<Vector3D> v;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    for (int i=0; i<n; i++){
        double x, y, z;
        cout << "Write a 3D vector in rectangular coordinates as: x y z" << endl;
        cin >> x >> y >> z;
        v.push_back(Vector3D(x,y,z));
    };
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    //Finally, we print the defined vectors and their magnitudes
    for (int j=0; j<n; j++){
        cout<< j+1 <<": "; v[j].print(); cout<<"\t ||v|| = "<< v[j].magnitude() << endl;
    };
    return 0;}
