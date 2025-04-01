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
class d :   public b , public c{
    public :
    
    void pop (){
    cout << "I AM CLASS d" ;
    }
};

int main()
{
    d obj1 ;
    obj1.c::get();
}