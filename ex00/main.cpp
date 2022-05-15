/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:50:29 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/31 16:53:16 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.h"

//class A {
//public:
//    int a;
//    A(int a) {
//        this->a = a;
//    }
//    A &operator = (const A &other) {
//        this->a = other.a;
//        return *this;
//    }
//    A(const A &other) {
//        this->a = other.a;
//    }
//    ~A() {
//
//    }
//    bool operator >= (const A &other) const {
//        return this->a >= other.a;
//    }
//    bool operator <= (const A &other) const {
//        return this->a <= other.a;
//    }
//};
//
//std::ostream &operator<<(std::ostream &os, const A &a) {
//    os << "a: " << a.a;
//    return os;
//}


int main() {
    int a = 5;
    int b = 2;
    swap(a, b);
    std::cout << a << std::endl;
    std::cout << max(a, b) << std::endl;
    std::cout << min(a, b) << std::endl;

    std::string str1 = "wc";
    std::string str2 = "echo";
    swap(str1, str2);
    std::cout << str1 << std::endl;

    // A a1(5);
    // A a2(10);
    // swap(a1, a2);
    // std::cout << a1 << std::endl;
    // std::cout << max(a1, a2) << std::endl;
    // std::cout << min(a1, a2) << std::endl;
    return 0;
}
