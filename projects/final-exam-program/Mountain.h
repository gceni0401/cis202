#include <iostream>

using namespace std;

class Mountain

{
    private:
    string name;
    string country;
    int elevation;
    
    public:
    void setter(string name,string country, int elevation)
    {
        this -> name = name;
        this -> country = country;
        this -> elevation = elevation;
    }
    string get_name()
    {
        return this->name;
    }
    string get_country()
    {
        return this->country;
    }
    int get_elevation()
    {

        return this->elevation;
    }
    float toMeters()
    {
        return this->elevation / 3.2808;
    }
};