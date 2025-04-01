#include<iostream>
using namespace std;

int value , pos ;

void create (int &size , int box[]){
    if (size == 0)
    {
       cout << "Enter the first value = "; 
       cin >> value;
       box[size] = value ;
    size ++ ;

    }
    else{
        cout << "Enter the position ( 1 to " << size + 1
        
        << " ) = ";
        cin >> pos ;

        if (pos >= 0 && size >= pos){
        
            cout << "Enter the value = "; 
            cin >> value;

            for (int i = size; i >= pos; i--)
            {
                box[i] = box[i-1] ; 

            }
            box[pos] = value ;
            size++;  
         
    }
    else{
        cout << "Invalid position" ;
    }
}
    
}

void read (int size , int box[]){
    for (int i = 0; i < size ; i++)
    {
        cout << "box[" << i << "] = " << box[i] << endl ;
        }
}

int main()
{
    int user ;
    int size = 0 ;
    int box[size] ;
    do
    {
        cout << "1.Insert" << endl ;
        cout << "2.Read" << endl ;
        cout << "3.Update" << endl ;
        cout << "4.Delete" << endl ;
        cout << "0.Exit" << endl ;

        cout << "Enter your choice: ";
        cin >> user ;

        switch (user)
        {
        case 1:
            cout << "Inserting..." << endl ;
            create(size , box);
            break;
        case 2:
            cout << "Reaading..." << endl ;
            read(size , box);
            break;
        case 3:
            cout << "Upadating..." << endl ;
            break;
        case 4:
            cout << "Deleteing..." << endl ;
            break;
        case 5:
            cout << "Exiting..." << endl ;
            break;
        
        default:
            break;
        }

    } while (user != 0) ;
    
}