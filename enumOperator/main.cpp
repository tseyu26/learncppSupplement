//
// Created by tseyu on 1/11/23.
//

#include <iostream>

enum Color{
    red,
    green,
    blue,
};

int main(){
    Color shirt{ blue };

    if (shirt == blue){
        std::cout << "Your shirt is blue!";
    }else{
        std::cout << "Your shirt is not blue!";
    }

    return 0;
}