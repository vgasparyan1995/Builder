#include "company.h"

#include <iostream>

std::shared_ptr<vehicle> company::get_product(const std::string& engine,
        const std::string& interior,
        const std::string& exterior)
{
    auto bldr = builder::get_instance();
    if (engine == "nissan") {
        bldr->build_engine(builder::Mark::NISSAN);
    } else if (engine == "toyota") {
        bldr->build_engine(builder::Mark::TOYOTA);
    } else {
        std::cout << "Wrong engine" << std::endl;
        return std::shared_ptr<vehicle>();
    }

    if (interior == "nissan") {
        bldr->build_interior(builder::Mark::NISSAN);
    } else if (interior == "toyota") {
        bldr->build_interior(builder::Mark::TOYOTA);
    } else {
        std::cout << "Wrong interior" << std::endl;
        return std::shared_ptr<vehicle>();
    }

    if (exterior == "nissan") {
        bldr->build_exterior(builder::Mark::NISSAN);
    } else if (exterior == "toyota") {
        bldr->build_exterior(builder::Mark::TOYOTA);
    } else {
        std::cout << "Wrong exterior" << std::endl;
        return std::shared_ptr<vehicle>();
    }

    return bldr->get_vehicle();
}
