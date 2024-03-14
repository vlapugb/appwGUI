#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <matio.h>
#include <eigen3>
using namespace std;


struct obolochka
{
 vector <double> vec1;
 vector<vector<vector<double>>> vec2;
 vector<vector<vector<double>>> vec3;
};


obolochka SavingFunction ()
{
    obolochka MyObject;

    MyObject.vec1 = {1.0,1.0};
    MyObject.vec2 = {{{1.0, 1.0, 1.0}, {4.0, 5.0, 1.0}},{{1.0, 1.0, 1.0}, {2.0, 5.0, 4.0}}};
    MyObject.vec3 = {{{2.0, 3.0, 4.0}, {5.0, 1.0, 5.0}},{{9.0, 6.0, 1.0}, {2.0, 5.0, 4.0}}};
    

    return MyObject;
}

int main ()
{

 obolochka result = SavingFunction();

    // Использование результатов
    cout << "vec1: ";
    for (const auto &value : result.vec1)
    {
        cout << value << " ";
    }
    cout << endl<< " ";

    cout << "vec2:" << endl;
    for (const auto &matrix : result.vec2)
    {
        for (const auto &row : matrix)
        {
            for (const auto &value : row)
            {
                cout << value << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    cout << "vec3:" << endl;
    for (const auto &matrix : result.vec3)
    {
        for (const auto &row : matrix)
        {
            for (const auto &value : row)
            {
                cout << value << " ";
            }
            cout << std::endl;
        }
        cout << std::endl;
    }
    return 0;
}
