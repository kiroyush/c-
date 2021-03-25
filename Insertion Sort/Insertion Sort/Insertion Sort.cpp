#include <iostream>

#include<vector>

using namespace std;

//Separate method to print the list provided by the calling method
void printElems(vector < int > list) {
    int i;
    int len = list.size();
    for (i = 0; i < len; i++)
        cout << list[i] << "  ";

}

//The Insertion sort logic
void insertionSort(vector < int >& a) {
    int i, loc, temp;
    int len = a.size();

    for (i = 1; i < len; i++) {
        temp = a[i];
        loc = i - 1;

        /* Move elements of arr[0..i-1], that are greater than temp, to one position ahead
        of their current position as need to bring in the temp to it's correct place */
        while (loc >= 0 && temp < a[loc]) {
            a[loc + 1] = a[loc];
            loc--;
        }

        a[loc + 1] = temp;

        cout << "\n\nThe elements of the list after Pass " << i << " are  : ";
        printElems(a);
    }
}

int main() {
    int i, num, n;

    //Declaring the Vector to store the integer elements to be sorted
    vector < int > v;

    cout << "\n\nWelcome to kiroyush coding zone  :-)\n\n\n";
    cout << " =====  Program to implement the Insertion Sort algo using Vectors, in CPP  ===== \n\n";

    //taking input from the command line (user)
    cout << " Enter the number of integers you want to sort : ";
    cin >> n;
    cout << "\n\n";

    for (i = 0; i < n; i++) {
        cout << "Enter number" << i + 1 << " :  ";
        cin >> num;
        v.push_back(num);

    }

    cout << "\n\nThe elements of the list before applying the Insertion sort algorithm are : ";

    //Calling the method to print the actual list
    printElems(v);

    //Calling the insertion sort algorithm
    insertionSort(v);

    cout << "\n\nThe elements of the list after applying the Insertion sort algorithm are  : ";

    //Calling the method to print the sorted list
    printElems(v);

    cout << "\n\n\n";

    return 0;
}