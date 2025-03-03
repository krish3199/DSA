#include <iostream>
using namespace std;

int main(){
    int first , second , third , fourth , fifth , sixth;
    cin >> first >> second >> third >> fourth >> fifth >> sixth;


    if (first != second && first != third && first != fourth && first != fifth && first != sixth  && second != third && second != fourth && second != fifth && second != sixth && third != fourth && third != fifth  && third != sixth &&   fourth !=fifth && fourth != sixth && fifth != sixth){
        if (first > second)
    {
        if (first > third)
        {
            if (first > fourth)
            {
                if (first > fifth)
                {
                    if (first > sixth)
                    {
                        cout << "First value is max";
                    }
                    else{
                        cout << "Sixth value is max";
                    }
                    
                }
                else{
                    cout << "Fifth value is max";
                }
                
            }
            else{
                cout << "Fourth value is max";
            
        }
        
    }
    else{

        cout << "third value is max";
    } }
    else{
        if (second > third)
        {
            if (second > fourth)
            {
                if (second > fifth)
                {
                    if (second  > sixth)
                    {
                        cout << "second value is max";

                    }
                    else{

                        cout << "Sixth value is max";
                    }
                    
                }
                else{
                    cout << "Fifth value is max";
                }
            }
            else{
                cout << "Fourth value is max";
            }
            
        }
        else{
            if (third > fourth)
            {
                if (third > fifth)
                {
                    if (third > sixth)
                    {
                        cout << "Third value is max";
                    }
                    else{
                        cout << "Sixth value is max";
                    }
                    
                }
                else{
                    cout << "Fifth value is max";
                }
                
            }
            else{
                if (fourth > fifth)
                {
                    if (fourth > sixth)
                    {
                        cout << "Fourt value is max";
                    }
                    else{
                        cout << "Sixth value is max";
                    }
                    
                }
                else{
                    if (fifth > sixth)
                    {
                        cout << "fifth value is max";
                    }
                    else{
                        cout << "Sixth value is max";
                    }
                    
                }
                
            }
            
        }
    }
    

}
else{
    cout << "All values are equal";
}
    }

    