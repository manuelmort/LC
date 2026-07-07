#include <iostream> 
#include <string>
#include <vector>

//71A

int main() {

    int num = 0;
    std::vector<std::string> list;
    std::cin >> num;

    
    for(int i = 0; i < num; i++){
        std:: string word; 
        std::cin >>  word;
        
        list.push_back(word);
        //std::cout << word << std::endl;
    }
    
    for(int j = 0; j <  list.size(); j++) {
        
        if(list[j].size() > 10){
            char f = list[j].front();
            char b = list[j].back();
            std::string abrev = f + std::to_string(list[j].size()-2) + b;
            
            list[j] = abrev; 
        }
    }

    for(int j = 0; j < list.size(); j++){

        std::cout << list[j] << std::endl;
    }
    
    return 0;
}
