//
// Created by tseyu on 1/12/23.
//
#include <iostream>

enum Color{
    black,
    red,
    blue,
    green,
    white,
    cyan,
    yellow,
    magenta,
};

int main(){
    Color shirt{ blue };

    std::cout << "Your shirt is " <<shirt;

    return 0;
}

