#pragma once

#include <memory>
#include <string>

struct engine
{
    virtual std::string get_name() const = 0;
};

struct interior
{
    virtual std::string get_name() const = 0;
};

struct exterior
{
    virtual std::string get_name() const = 0;
};

struct nissan_engine : public engine
{
    std::string get_name() const override
    {
        return "Nissan engine";
    }
};

struct toyota_engine : public engine
{
    std::string get_name() const override
    {
        return "Toyota engine";
    }
};

struct nissan_interior : public interior
{
    std::string get_name() const override
    {
        return "Nissan interior";
    }
};

struct toyota_interior : public interior
{
    std::string get_name() const override
    {
        return "Toyota interior";
    }
};

struct nissan_exterior : public exterior
{
    std::string get_name() const override
    {
        return "Nissan exterior";
    }
};

struct toyota_exterior : public exterior
{
    std::string get_name() const override
    {
        return "Toyota exterior";
    }
};

struct vehicle
{
    vehicle()
        : m_engine(nullptr)
        , m_interior(nullptr)
        , m_exterior(nullptr)
    {}

    std::shared_ptr<engine> m_engine;
    std::shared_ptr<interior> m_interior;
    std::shared_ptr<exterior> m_exterior;
};
