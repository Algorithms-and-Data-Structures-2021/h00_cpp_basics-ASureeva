#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if(*a and *b){
        int c = *a;
        *a = *b;
        *b = c;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if ((rows > 0) && (cols > 0)) {
        int **array = new int *[rows];
        for (int i = 0; i < rows; i++) {
            array[i] = new int[cols];
            for (int j = 0; j < cols; j++)
                array[i][j] = value;
        }
        return array;
    }
    else
        return nullptr;
//     return nullptr;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if ((arr != nullptr) && (matrix != nullptr) && (rows > 0) && (cols > 0)) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = arr[i][j];
            }
        }
        return true;
    }
    else
        return false;
//     return false;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    if (!arr.empty()){
        for (int i = 0; i < arr.size()/2; i++) {
            swap(arr[i], arr[arr.size()]);
        }
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if ((left != nullptr) && (right != nullptr)) {
        if (right < left)
            return;
        swap(*left, *right);
        reverse_1d_array(left + 1, right - 1);
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if ((size > 0) && (arr != nullptr)){
        int* ptrmax = &arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > *ptrmax) {
                ptrmax = &arr[i];
            }
        }
        return ptrmax;
    }
    else
        return nullptr;
//     return nullptr;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> odd_elements;
    for (int i = 1; i < arr.size(); i++){
        if (arr[i] % 2 != 0){
            odd_elements.push_back(arr[i]);
        }
    }
    return odd_elements;
    return {};
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> common_elements;
    for (int i = 0; i < arr1.size(); i++) {
        for (int j = 0; j < arr2.size(); j++) {
            if (arr1[i] == arr2[j]) {
                common_elements.push_back(arr1[i]);
            }
        }
    }
    return common_elements;
    return {};
}
