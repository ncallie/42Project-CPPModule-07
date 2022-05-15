/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:51:22 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/31 16:51:24 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_ITER_H
#define EX01_ITER_H

#include <iostream>

template <typename T>
void print(const T &elem) {
    std::cout << elem << std::endl;
}

template <typename T>
void fun(T *array, int size, void(*f)(const T &elem)) {
    for (int i = 0; i < size; i++) {
        f(array[i]);
    }
}

#endif //EX01_ITER_H
