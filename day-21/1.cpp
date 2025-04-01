// #include <iostream>
// using namespace std;

// class school
// {
// public:
//     string name;
//     int classes;
//     int students;
//     string teachers;

//     void university(string name, int classes, int students, string teachers)
//     {

//         this->name = name;
//         this->classes = classes;
//         this->students = students;
//         this->teachers = teachers;
//     }

//     void shala()
//     {
//         cout << "School name : " << name << endl;
//         cout << "Number of classes : " << classes << endl;
//         cout << "Number of students : " << students << endl;
//         cout << "Name of teachers : " << teachers << endl;
//         cout << "----------------------------------------------------- " << endl;
//     }
// };

// int main()
// {
//     school Dholkiya, Pratik, Bharti;

//     Dholkiya.university("Dholkiya", 99, 999, "Shital mam");
//     Pratik.university("Pratik", 100, 1000, "Priya  mam");
//     Bharti.university("Bharti", 101, 1001, "Janavi mam");
//     Dholkiya.shala();
//     Pratik.shala();
//     Bharti.shala();
// }


#include<iostream>
using namespace std;


class school {
    
    public:
    string name;
    int classes;
    int students;
    string teachers;    

    void university(string name, int classes, int students, string teachers)
    {
        this->name = name;
        this->classes = classes;
        this->students = students;
        this->teachers = teachers;

        cout << name  << endl;
        cout << classes << endl ;
        cout << students << endl ;
        cout << teachers << endl ;
        }
};

int main()
{
    school Dholkiya, pratik, bharti;

    Dholkiya.university("dholkiya",5 , 4 , "krishna");
    pratik.university("dholkiya",5 , 4 , "krishna");
    bharti.university("dholkiya",5 , 4 , "krishna");
    
}