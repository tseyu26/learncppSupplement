//
// Created by tseyu on 1/12/23.
//
#include <iostream>
#include <utility>

template <typename T, typename U>
void print(std::pair<T,U> p){
    std::cout << '[' << p.first << ", " << p.second << ']';
}

int main(){
    std::pair<int, double> p1{1, 2.3};
    std::pair<int, double> p2{1, 2.3};
    std::pair<int, double> p3{1, 2.3};

    print(p2);
    
    return 0;
}