//
//  main.cpp
//  Sort
//
//  Created by JianingWang on 10/12/18.
//  Copyright © 2018 王嘉宁. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

template<typename T>
T* selectionSort(T* array, int length);

int main(int argc, const char * argv[]) {
    int arr[10] = {4,6,1,32,3,6,2,24,5,1};
    selectionSort(arr, 10);
    for (int i = 0; i < 10; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}

template<typename T>
void selectionSort(T* array, int length){
    for (int i = 0; i < length; i++) {
        int min = i;
        for (int j = i+1; j < length; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
            swap(array[i], array[min]);
        }
    }
}
