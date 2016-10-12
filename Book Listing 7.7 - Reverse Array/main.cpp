//
//  main.cpp
//  Book Listing 7.7 - Reverse Array
//
//  Created by ax on 10/12/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
using namespace std;

void reverse(const int list[], int new_list[], int size) {
    for (int i = 0, j = size - 1; i< size; i++, j--) {
        new_list[j] = list[i];
    }
}

void print_array(const int list[], int size) {
    for (int i = 0; i < size; i++) {
        cout << list[i] << " ";
    }
}

int main() {

    const int SIZE = 6;
    int list[] = {1, 2, 3, 4, 5, 6};
    int new_list[SIZE];
    
    reverse(list, new_list, SIZE);
    
    cout << "The initial array: ";
    print_array(list, SIZE);
    cout << endl;
    
    cout << "The reversed array: ";
    print_array(new_list, SIZE);
    cout << endl;
    
    return 0;
}
