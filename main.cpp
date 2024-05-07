//algorithim

1. Start
2. Declare variables : sum, average
3. Initialize sum to 0
4. Read the size of the array and create an array of that size
5. Read elements of the array
6. Loop through the array and add each element to sum
7. Calculate average as sum divided by the size of the array
8. Display the average
9. End


//1.2

#include <iostream>
#include <algorithm>

using namespace std;

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortArray(int arr[], int size, bool ascending) {
    if (ascending)
        sort(arr, arr + size);
    else
        sort(arr, arr + size, greater<int>());
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int choice;
    cout << "Choose sorting order:\n1. Ascending\n2. Descending\nEnter your choice: ";
    cin >> choice;

    bool ascending = (choice == 1);

    sortArray(arr, size, ascending);

    cout << "Sorted array: ";
    displayArray(arr, size);

    return 0;
}


//1.3

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int studentId;
    string address;
    string department;
    string faculty;
    string mobileNo;

public:
    // Constructor
    Student() {
        name = "";
        studentId = 0;
        address = "";
        department = "";
        faculty = "";
        mobileNo = "";
    }

    // Destructor
    ~Student() {
        cout << "Object destroyed." << endl;
    }

    // Function to get data
    void getData() {
        cout << "Enter Student Name: ";
        getline(cin >> ws, name);
        cout << "Enter Student ID: ";
        cin >> studentId;
        cout << "Enter Address: ";
        getline(cin >> ws, address);
        cout << "Enter Department: ";
        getline(cin >> ws, department);
        cout << "Enter Faculty: ";
        getline(cin >> ws, faculty);
        cout << "Enter Mobile Number: ";
        cin >> mobileNo;
    }

    // Function to display data
    void displayData() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentId << endl;
        cout << "Address: " << address << endl;
        cout << "Department: " << department << endl;
        cout << "Faculty: " << faculty << endl;
        cout << "Mobile Number: " << mobileNo << endl;
    }
};

int main() {
    // Creating object
    Student stuobj;

    // Calling member functions
    stuobj.getData();
    stuobj.displayData();

    return 0;
}
// section B

//