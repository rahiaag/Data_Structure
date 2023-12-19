#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it; // syntax container<datatype> :: iterator iterator_name;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // empty list //here we will insert element with push_back
    list1.push_back(22);
    list1.push_back(52);
    list1.push_back(43);

    // Removing of element
    /* list1.pop_back();  // will remove last item
     list1.pop_front(); // will remove first item
     list1.remove(22);  // will remove any item*/

    // sorting the list
    list1.sort();
    display(list1);

    // reversing the list
    cout << "after reversing :";
    list1.reverse();
    display(list1);
    list<int> list2(3);
    // empty list with size 3 IMP:-here we did not do push_back ,here we have element but they dont have any value so we will give them value

    list<int>::iterator rahi;
    rahi = list2.begin();
    *rahi = 32;
    rahi++;
    *rahi = 324;
    rahi++;
    *rahi = 4;
    display(list2);

    // Merging list1 and list2
    cout << "List after merging :";
    list1.merge(list2);
    display(list1);
    return 0;
}