#pragma once

#include "vehicle_parts.h"

class builder
{
public:
    enum class Mark : unsigned char
    {
        NISSAN,
        TOYOTA
    };

public:
    void build_engine(const Mark m);
    void build_interior(const Mark m);
    void build_exterior(const Mark m);
    std::shared_ptr<vehicle> get_vehicle() const;

private:
    std::shared_ptr<vehicle> m_vehicle;

public:
    static builder* get_instance();
    static void remove_instance();

private:
    static builder* s_instance;

private:
    builder()
        : m_vehicle(std::make_shared<vehicle>())
    {}
    ~builder() {}
    builder(const builder&) = delete;
    builder& operator=(const builder&) = delete;
};
