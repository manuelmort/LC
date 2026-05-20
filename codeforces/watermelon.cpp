// 4A. Watermelon
#include <iostream>

int main(){
    int num;
    std::cin >> num; 
    if(num > 2 && num % 2 == 0) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}
