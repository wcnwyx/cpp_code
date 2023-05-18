#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool sortMethod(const int & i, const int & j);
int main()
{
    using std::cout;
    using std::endl;
    using std::vector;

    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);

    cout << "size():" << v.size() << endl;
    
    int size = v.size();
    vector<int>::iterator ite = v.begin();
    for(int i=0;i<size;i++)
    {
        cout << "v[" << i << "]=" << v[i] << "; ite[" << i << "]=" << ite[i] << endl;
    }

    sort(v.begin(), v.end());
    cout << "after sort------------------" << endl;
    for(int i:v)
    {
        cout << i << endl;
    }

    sort(v.begin(), v.end(), sortMethod);
    cout << "after sort1------------------" << endl;
    for(int i=0;i<size;i++)
    {
        cout << "v[" << i << "]=" << v[i] << endl;
    }

    return 0;
}

bool sortMethod(const int &i, const int &j)
{
    return i>j;
}