#include "inventory.hpp"

using namespace std;

int main()
{
    
    Inventory *inv = new Inventory;
    /*
    cout << "Hello [user]!" << endl;
    cout << "this is my beginner pet project for a joke."<< endl;
    cout << "1) show inventory"<< endl;
    cout << "2) add item to inv"<< endl;
    cout << "3) remove item from inv"<< endl; */
    
    /*
    while(true)
    {
    switch(enter)
    {
        case 1:
            inv->show_items();
            break;
        case 2:
            string name;
            int rate;
            dostuff(name, rate);
            cout << "enter name of item-> ";
            cin >> name;
            cout << "enter rate of item-> ";
            cin >> rate;
            inv->add_item(name, rate);
            break;
        case 3:
            int id;
            dostuff(id);
            cout << "enter id of item-> ";
            cin >> id;
            inv->remove_item(id);
            break;
        case 0:
            system("exit");
        default:
            cout << "Invalid option!";

    }
    }
    */
    while(true)
    {
        system("clear");
        cout << "Hello [user]!" << endl;
        cout << "this is my beginner pet project for a joke."<< endl;
        cout << "1) show inventory"<< endl;
        cout << "2) add item to inv"<< endl;
        cout << "3) remove item from inv"<< endl;
        char a;
        int enter;
        cin >> enter;

        if(enter == 1)
        {
            inv->show_items();
            cin >> a;
            
        }
        if(enter == 2)
        {
           string name;
            int rate;
            
            cout << "enter name of item-> ";
            cin >> name;
            cout << "enter rate of item-> ";
            cin >> rate;
            inv->add_item(name, rate);
            cin >> a;
        }
        if(enter == 3)
        {
            int id;
            
            cout << "enter id of item-> ";
            cin >> id;
            inv->remove_item(id);
            cin >> a;
        }
        

        
    }
    delete inv;
    return 1;
}