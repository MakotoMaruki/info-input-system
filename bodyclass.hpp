//
//  bodyclass.hpp
//  learnC++
//
//  Created by Makoto Maruki on 2025/9/9.
//

#ifndef bodyclass_hpp
#define bodyclass_hpp

#include <string>

class patient{
    std::string m_name;
    std::string m_phone_num;
    std::string m_disease;
    int m_age;
    //int m_num;
    patient* m_p_next;
    
public:
    std::string show_name();
    void input_name();
    void input_phone_num();
    void input_disease();
    void input_age();
    void input_num();
    void get_p_next(patient *);
    patient* put_p_next();
};

#endif /* bodyclass_hpp */
