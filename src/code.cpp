#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

    // Task 1
    int squared_diff(int left, int right) {
        int a = left - right;
        return a * a;
    }

    // Task 2
    bool check_bit(int mask, int bit_pos) {
        if (mask >= 0 && bit_pos >= 0) {
            int mask1 = mask;
            int k = 0;
            while (mask1) {
                mask1 = mask1 / 2;
                k++;
            }
            int A[k], i = 0;
            while (mask) {
                A[i] = mask % 2;
                mask = mask / 2;
                i++;
            }
            if (k > bit_pos && A[bit_pos] == 1) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }

    // Task 3
    int max3(int left, int middle, int right) {
        int maxim = middle;
        if (right > middle) {
            maxim = right;
        }
        if (left > maxim) {
            maxim = left;
        }
        return maxim;
    }

    // Task 4
    void swap_args(int *left, int *right) {
        if (left != nullptr && right != nullptr) {
            int ukazleft = *left;
            int ukazright = *right;
            *right = ukazleft;
            *left = ukazright;
        }
    }

    // Task 5
    int arr_sum(int *arr, int length)
    {
        if (arr != nullptr)
        {
            if (length > 0)
            {
                int a = 0;
                for (int i = 0; i < length; i++)
                {
                    a += arr[i];
                }
                return a;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }

    // Task 6
    int *find_max_elem(int *arr, int length)
    {
        if (arr != nullptr && length > 0)
        {
            int max = arr[0];
            int maxptr = 0;
            for (int i = 0; i < length; i++)
            {
                if(max<=arr[i])
                {
                    maxptr = i;
                }
            }
            return arr + maxptr;
        }
        else
        {
            return nullptr;
        }
    }

    // Task 7
    int *allocate_arr(int length, int init_value)
    {
        if (length > 0) {
            int arr[length];
            for (int i = 0; i < length; i++)
            {
                arr[i] = init_value;
            }
            return arr;
        }
        else
        {
            return nullptr;
        }
    }

    // Task 8
    int *clone_arr(int *arr_in, int length)
    {
        if (arr_in != nullptr && length > 0)
        {
            int arr[length];
            for (int i = 0; i < length; i++)
            {
                arr[i] = arr_in[i];
            }
            return arr;
        }
        else
        {
            return nullptr;
        }
    }


    // Task 9
    void print_kth_elements(int *arr, int length, int k, std::ostream &os)
    {
        if(arr!=nullptr)
        {
            if(length > 0)
            {
                if(k > 0)
                {
                    std::cout<<"1\t"<<arr[k]<<"\t"<<std::endl;
                }
                else
                {
                    std::cout<<"Invalid argument: k\n"<<std::endl;
                }
            }
            else
            {
                std::cout<<"Invalid argument: length\n"<<std::endl;
            }
        }
        else
        {
            std::cout<<"Invalid argument: arr\n"<<std::endl;
        }
    }  // namespace assignment
}
