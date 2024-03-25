#include <iostream>
#include <fstream>
#include <string>
#include "unordered.h"

using namespace std;

void readFile(unorderedLinkedList<string> groups[],string names[])
{
    ifstream file("groups.txt");
    string groupNames,phoneNumber;
    int numberOfPhone;
    int index = 0;
    while(file >> groupNames >> numberOfPhone)
    {
        names[index] = groupNames;
        for (int i = 0; i < numberOfPhone; ++i) {
            file >> phoneNumber;
            groups[index].insertLast(phoneNumber);
        }
        index++;
    }
}

void listMembers(unorderedLinkedList<string> groups[],string names[])
{
    cout << "Which group: ";
    string group;
    cin >> group;
    int i = 0;
    for (;i < 10; ++i) {
        if(names[i] == group)
        {
            cout << groups[i] <<endl;
            break;
        }
    }


}

void changeMembers(unorderedLinkedList<string> groups[])
{
    cout << "Old & new phone numbers: ";
    string old,newPhone;
    cin >> old >> newPhone;

    node<string> *current;
    for (int i = 0; i < 10; ++i) {
        current = groups[i].getHead();
        while(current != NULL)
        {
            if(current->info == old)
            {
                current->info = newPhone;
                break;
            }
            else
                current = current->link;
        }
    }
}

int main() {

    unorderedLinkedList<string> groups[10];
    string names [10];
    string chk;
    readFile(groups,names);
    do {
        cout << "Change | List | Quit: ";
        cin >> chk;
        if(chk == "Change")
            changeMembers(groups);
        else if(chk == "List")
            listMembers(groups,names);
    }while(chk != "Quit");

}

