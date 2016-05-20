#pragma once

#include "builder.h"

class company
{
public:
    std::shared_ptr<vehicle> get_product(const std::string& engine,
            const std::string& interior,
            const std::string& exterior);    
};
