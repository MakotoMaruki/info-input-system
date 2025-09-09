//
//  main.cpp
//  learnC++
//
//  Created by Makoto Maruki on 2025/9/8.
//

#include <iostream>
#include <string>
#include "bodyclass.hpp"

int main(){
    int cnt=1;
    std::string ch;
    patient *p_head = nullptr;
    patient *p_temp1 = nullptr;
    patient *p_temp2 = nullptr;
    
    p_temp1 = new patient;
    p_head = p_temp1;
    
    std::cout << "欢迎使用录入系统\n";
    
    while(1){
        std::cout << "请输入第" << cnt << "位的姓名:\n";
        p_temp1->input_name();
        std::cout << "请输入" << p_temp1->show_name() << "的年龄:\n";
        p_temp1->input_age();
        std::cout << "请输入" << p_temp1->show_name() << "的电话号码:\n";
        p_temp1->input_phone_num();
        std::cout << "请输入" << p_temp1->show_name() << "的症状:\n";
        p_temp1->input_disease();
        std::cout << "第" << cnt << "位录入完成\n";
        
        p_temp2 = p_temp1;
        p_temp1 = new patient;
        p_temp2->get_p_next(p_temp1);
        
        cnt++;
        
        while(1){
        std::cout << "是否录入下一位的信息？（y/n）\n";
            std::cin >> ch;
            if(ch=="y"){
                break;
            }
            else if (ch=="n"){
                std::cout << "结束，辛苦了\n";
                return 0;
            }
            else {
                std::cout << "你的输入不合法\n";
            }
        }
    }
    
    return 0;
}
