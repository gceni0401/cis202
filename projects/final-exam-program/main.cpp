#include <iostream>
#include "Mountain.h"
#include <iomanip>
#include <climits>

using namespace std;

int minElevation(Mountain mt[],int x)

{
    int min = INT_MAX;
    for (int i = 0; i < 7; i++)
    {
        if(mt[i].get_elevation() < min)
        min = mt[i].get_elevation();
    }
    return min;
}

int main()
{
    Mountain mt[7];
    mt[0].setter("Chimborazo", "Ecuador", 20549);
    mt[1].setter("Matterhorn","Switzerland", 14692);
    mt[2].setter("Olympus", "Greece", 9573);
    mt[3].setter("Everest", "Nepal", 29029);
    mt[4].setter("Mount Marcy Adirondacks", "United States", 5344);
    mt[5].setter("Mount Mitchell Blue Ridge", "United States", 6684);
    mt[6].setter("Zugspitze", "Switzerland", 9719);
    cout << setw(30) << "Mountain" << setw(20) << " Country " << setw(30) << " Elevation " << endl;
    for (int i = 0; i < 7; i++)
    
    {
        cout << setw(30) << mt[i].get_name() << " " << setw(20)<<mt[i].get_country() << " " << setw(20) << mt[i].get_elevation() << " feet, " << mt[i].toMeters() << " meters" << endl;
    }
    int min = minElevation(mt,7);
    for(int i = 0; i < 7; i++)
    {
        if(min == mt[i].get_elevation())
        {
            cout << "The shortest mountain is: " << mt[i].get_name() << ", with elevation: " << mt[i].get_elevation() << endl;
            break;
        }
    }
    return 0;
}