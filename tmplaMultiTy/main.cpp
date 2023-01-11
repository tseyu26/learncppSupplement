//
// Created by tseyu on 1/12/23.
//
#include <iostream>

template <typename T, typename U>
struct Pair{
    T first {};
    U second {};
};

template <typename T, typename U>
void  print(Pair<T,U> p){
    std::cout << '[' << p.first << ", " <<p.second <<']';
}

int main(){
    Pair<int, double> p1{1,2.3};
    Pair<double, int> p2{4.5,6};
    Pair<int, int> p3{7,8};

    print(p2);

    return 0;
}