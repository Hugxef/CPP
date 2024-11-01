/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:44:44 by ael-khni          #+#    #+#             */
/*   Updated: 2023/01/24 15:19:49 by hugo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Adress and Value of str :" << std::endl;
    std::cout << &str << " / " << str << std::endl;
    std::cout << "Adress and Value of stringPTR :" << std::endl;
    std::cout << stringPTR << " / " << *stringPTR << std::endl;
    std::cout << "Adress and Value of stringREF :" << std::endl;
    std::cout << &stringREF << " / " << stringREF << std::endl;

    return 0;
}
