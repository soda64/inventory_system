#pragma once

#include <vector>
#include <iostream>


#define MAX_ITEMS_COUNT 50
#define MAX_ITEM_RATE 100
#define MIN_ITEM_RATE 1

using namespace std;

class Inventory
{
    protected:
        vector<pair<string, int>> *v = new vector<pair<string, int>>;

    public:
        void add_item(string name, int rate)
        {
            if(v->size() == 100 || 0 > rate || rate > 100)
            {
                cout << "NO" << endl;
            }
            else
            {
                v->push_back(make_pair(name, rate));
            }
        }

        void remove_item(int id)
        {
            if(v->size() == 0)
            {
                cout << "Inventory is empty" << endl;

            }
            else
            {
                v->erase(v->begin() + id);
            }
        }

        void show_items()
        {
            for(int i = 0; i < v->size(); i++)
            {
                cout << i + 1 << " "<< "[" << v->at(i).first << "] [" << v->at(i).second << "]" << endl;
            }
        }
};
