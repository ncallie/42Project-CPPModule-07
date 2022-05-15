/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:52:14 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/31 16:52:16 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EX02_ARRAY_H
#define EX02_ARRAY_H

#include <exception>
#include <ostream>
#include <iostream>

template <typename T>
class Array {
private:
    unsigned int size;
    T *arr;
public:
    Array() {
        size = 1;
        arr = new T[size];
        arr[0] = 0;
    }

    Array(unsigned int size) {
        this->size = size;
        arr = new T[size];
    }

    Array(const Array<T> &other) {
        this->size = other.size;
        this->arr = new T[size];
        for (int i = 0; i < size; i++) {
            this->arr[i] = other.arr[i];
        }
    }

    Array &operator = (const Array<T> &other) {
        delete [] this->arr;
        this->size = other.size;
        this->arr = new T[size];
        for (int i = 0; i < size; i++) {
            this->arr[i] = other.arr[i];
        }
        return *this;
    }

    Array *operator = (Array<T> *other) {
        delete [] this->arr;
        this->size = other->size;
        this->arr = new T[size];
        for (int i = 0; i < size; i++) {
            this->arr[i] = other->arr[i];
        }
        return this;
    }

    ~Array() {
        delete [] arr;
    }

    T &operator [] (int i) {
        if (i < 0 || i >= static_cast<int>(size))
            throw (std::exception());
        else
            return (*(arr + i));
    }

    unsigned int getSize () const{
        return size;
    }

    T *getArray () const {
        return arr;
    }
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T> &array) {
    for (int i = 0; i < array.getSize(); i++) {
        os << "index: " << i << "\t" << "value: " << array.getArray()[i] << std::endl;
    }
    return os;
}


#endif //EX02_ARRAY_H
