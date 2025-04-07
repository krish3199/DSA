#include <iostream>
using namespace std;

class website
{
public:
    virtual void Navbar() = 0;
    virtual void Hero() = 0;
    virtual void Header() = 0;
    virtual void Sections() = 0;
    virtual void About() = 0;
    virtual void Blog() = 0;
    virtual void Contect() = 0;
    virtual void Servise() = 0;
    virtual void Footer() = 0;
};

class all
{
public:
    void Navbar()
    {
        cout << "========================" << endl;
        cout << "|       NAVBAR         |" << endl;
        cout << "========================" << endl;
    }
    void Hero()
    {
        cout << "========================" << endl;
        cout << "|      HERO SECTION    |" << endl;
        cout << "========================" << endl;
    }
    void Header()
    {
        cout << "========================" << endl;
        cout << "|       HEADER         |" << endl;
        cout << "========================" << endl;
    }
    void Sections()
    {
        cout << "========================" << endl;
        cout << "|      SECTIONS        |" << endl;
        cout << "========================" << endl;
    }
    void About()
    {
        cout << "========================" << endl;
        cout << "|       ABOUT US       |" << endl;
        cout << "========================" << endl;
    }
    void Blog()
    {
        cout << "========================" << endl;
        cout << "|       BLOG           |" << endl;
        cout << "========================" << endl;
    }
    void Contect()
    {
        cout << "========================" << endl;
        cout << "|      CONTACT US      |" << endl;
        cout << "========================" << endl;
    }
    void Servise()
    {
        cout << "========================" << endl;
        cout << "|      SERVICES        |" << endl;
        cout << "========================" << endl;
    }
    void Footer()
    {
        cout << "========================" << endl;
        cout << "|       FOOTER         |" << endl;
        cout << "========================" << endl;
    }
};

int main()
{
    all a;
    a.Navbar();
    a.Hero();
    a.Header();
    a.Sections();
    a.About();
    a.Blog();
    a.Contect();
    a.Servise();
    a.Footer();
}
