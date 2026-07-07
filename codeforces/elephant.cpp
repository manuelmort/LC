#include <iostream> 

//617A Elephant

/*
The trick here is to use the ceiling function (x + m - 1) / m
*/
using namespace std;


int main() {
    
    int steps; 
    cin >> steps;
    
    int min = (steps + 4) / 5;
    
    cout << min << endl;
    return 0;
}
