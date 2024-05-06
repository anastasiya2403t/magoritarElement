// magoritarElement.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

using namespace std; 

int main()
{
    
    vector<int> nums;
    int num, Rez = -1, n = -1, maxCount = 0, minCount = 0;
    while (cin >> num) {
        nums.push_back(num);
        if (cin.get() == '\n') break;
    }
    vector<int>::iterator it;

    n = nums.size()%2+ nums.size()/2;
    it = nums.begin();
    maxCount = *it;
    minCount = *it;
    while (it != nums.end())
    {
        if (*it > maxCount) maxCount = *it;
        if (*it < minCount) minCount = *it;
        it++;
    }  
    it = nums.begin();
    if (nums.size() == 1) Rez = nums[0];
    else {
        num = maxCount - minCount + 1;
        vector<vector<int>> vecs;
        vector<vector<int>> ::iterator vecs_it;
        vecs_it = vecs.begin();
        int i = 0;
        while (vecs_it != vecs.end())
        {
            vecs[i][0] = 0;

        }
        while (it != nums.end())
        {
            vecs[num].push_back(*it);
            if (vecs[*it - minCount].size() == n) {
                Rez = *it;
                break;
            }

        }
    }
    cout << Rez;

}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
