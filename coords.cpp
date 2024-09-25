#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using std::cout;
using std::cin;

int main()
{
    std::vector<std::pair<std::pair<int, int>, double>> coords;
    int size;
    
    cin >> size;
    coords.reserve(size);  

    for(int i = 0; i < size; ++i)
    {
        int x, y;
        cin >> x >> y;
        double distance = std::sqrt(x * x + y * y);  
        coords.push_back({{x, y}, distance});
    }

    std::sort(coords.begin(), coords.end(), [](const auto& lhs, const auto& rhs) {
        return lhs.second < rhs.second;
    });

    for(const auto& elm : coords)
    {
        cout << elm.first.first << ", " << elm.first.second << '\n'; 
    }

    return 0;
}
