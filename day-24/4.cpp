#include<iostream>
using namespace std;

class a {
    public :
    
    void get (){
    cout << "I AM CLASS A" ;
    }
};
class b : public a {
    public :
    
    void set (){
    cout << "I AM CLASS B" ;
    }
};
class c :   public a{
    public :
    
    void pop (){
    cout << "I AM CLASS B" ;
    }
};

int main()
{
    c obj1 ;
    obj1.get();
}