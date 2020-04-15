#pragma once
#include "department.cpp"

class Store
{
    public:
        Store(const std::string &enev, const std::string &mnev);

        Department* _technical;
        Department* _foods;
};
