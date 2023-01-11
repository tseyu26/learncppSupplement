//
// Created by tseyu on 1/12/23.
//
#include <iostream>

enum Pet{
    cat,
    dog,
    pig,
    whale,
};

int main(){
    Pet pet{ static_cast<Pet>(2)};
    pet = static_cast<Pet>(3);

    std::cout << "Enter a pet (0=cat, 1=dog, 2=pig, 3=whale): ";
    int input{};
    std::cin >> input;
    Pet pet1{static_cast<Pet>(input)};

    return 0;
}