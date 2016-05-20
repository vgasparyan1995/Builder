#include "company.h"

#include <iostream>

int main()
{
    company cmp;
    auto product = cmp.get_product("nissan", "toyota", "nissan");
    if (product) {
        std::cout << "Congrats" << std::endl;
        std::cout << "Product engine: " << product->m_engine->get_name() << std::endl;
        std::cout << "Product interior: " << product->m_interior->get_name() << std::endl;
        std::cout << "Product exterior: " << product->m_exterior->get_name() << std::endl;
    } else {
        std::cout << "Totally fucked up" << std::endl;
    }
}
