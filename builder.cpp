#include "builder.h"

builder* builder::s_instance = nullptr;

void builder::build_engine(const Mark m)
{
    switch (m) {
        case Mark::NISSAN:
            m_vehicle->m_engine = std::make_shared<nissan_engine>();
            break;
        case Mark::TOYOTA:
            m_vehicle->m_engine = std::make_shared<toyota_engine>();
            break;
        default:
            break;
    }
}

void builder::build_interior(const Mark m)
{
    switch (m) {
        case Mark::NISSAN:
            m_vehicle->m_interior = std::make_shared<nissan_interior>();
            break;
        case Mark::TOYOTA:
            m_vehicle->m_interior = std::make_shared<toyota_interior>();
            break;
        default:
            break;
    }
}

void builder::build_exterior(const Mark m)
{
    switch (m) {
        case Mark::NISSAN:
            m_vehicle->m_exterior = std::make_shared<nissan_exterior>();
            break;
        case Mark::TOYOTA:
            m_vehicle->m_exterior = std::make_shared<toyota_exterior>();
            break;
        default:
            break;
    }
}

std::shared_ptr<vehicle> builder::get_vehicle() const
{
    return m_vehicle;
}

builder* builder::get_instance()
{
    if (!s_instance) {
        s_instance = new builder();
    }
    return s_instance;
}

void builder::remove_instance()
{
    delete s_instance;
    s_instance = nullptr;
}
