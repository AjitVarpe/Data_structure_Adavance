#include <iostream>
#include <array>
using namespace std;

int main()
{

    // normal way to declare array
    int aray[3] = {1, 2, 3};

    // Stl way to declear array
    array<int, 4> newbasicaray = {1, 5, 3};
    array<int, 4> a = {1, 2, 3, 4};

    // size function to check the size of stl array
    int size = newbasicaray.size();

    // printing the stl array
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    // at function is used to print element at perticular index
    cout << newbasicaray.at(1);

    // different functions in stl array
    cout << endl;
    cout << "element at front" << a.front();
    cout << endl;
    cout << "element at end" << a.back();
    cout << endl;
    cout << "size of the array" << a.size();
    cout << endl;
    
    return 0;

}