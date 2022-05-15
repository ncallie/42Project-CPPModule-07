/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:50:40 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/31 16:50:42 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_WHATEVER_H
#define EX00_WHATEVER_H

template <typename T>
void swap (T &t1, T &t2) {
    T temp = t1;
    t1 = t2;
    t2 = temp;
}

template <typename T>
T const &max(const T &t1,const T &t2) {
    return (t1 >= t2 ? t1 : t2);
}

template <typename T>
T const &min(const T &t1,const T &t2) {
    return (t1 <= t2 ? t1 : t2);
}

#endif //EX00_WHATEVER_H
