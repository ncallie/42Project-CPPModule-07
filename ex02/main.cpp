/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:52:08 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/31 16:52:09 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.h"

int main() {
    Array<int> arr1(5);
    arr1[0] = 32;
    arr1[1] = 6;
    arr1[2] = 4;
    arr1[3] = 0;
    arr1[4] = -54;
    std::cout << arr1 << std::endl;


    Array<int> *arr = new  Array<int>[2];
    arr[0] = new Array<int>(5);
    arr[1] = new Array<int>(3);
    arr[0][0] = 34;
    arr[1][0] = 231;
    std::cout << arr[0] << std::endl;
    std::cout << arr[1] << std::endl;

    Array<int> arr2(5);
    arr2[0] = 32;
    arr2[1] = 6;
    arr2[2] = 4;
    arr2[3] = 0;
    arr2[4] = -54;
    Array<int> arr3(arr2);
    std::cout << arr3 << std::endl;


    Array<int> arr4(5);
    arr4[0] = 3280;
    arr4[1] = 679868;
    arr4[2] = 4769;
    arr4[3] = 0465456;
    arr4[4] = -54646;
    Array<int> arr5(arr2);
    arr5[0] = 32;
    arr5[1] = 6;
    arr5[2] = 4;
    arr5[3] = 0;
    arr5[4] = -54;
    arr5 = arr4;
    std::cout << arr5 << std::endl;
}
