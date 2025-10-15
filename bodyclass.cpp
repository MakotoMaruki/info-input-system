//
//  bodyclass.cpp
//  learnC++
//
//  Created by Makoto Maruki on 2025/9/9.
//

#include "bodyclass.hpp"
#include <iostream>

std::string patient::show_name()
{
    return m_name;
}
void patient::input_name()
{
    std::cin >> m_name;
}
void patient::input_phone_num()
{
    std::cin >> m_phone_num;
}
void patient::input_disease()
{
    std::cin >> m_disease;
}
void patient::input_age()
{
    std::cin >> m_age;
}
//void patient::input_num(){
//    std::cin >> m_num;
//}
void patient::get_p_next(patient *p_next)
{
    m_p_next = p_next;
}
patient* patient::put_p_next()
{
    return m_p_next;
}
