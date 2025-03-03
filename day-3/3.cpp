#include <iostream>
using namespace std;

int main(){
    int first , second , third , fourth , fifth;
    cin >> first >> second >> third >> fourth >> fifth;


    if (first != second && first != third && first != fourth && first != fifth  && second != third && second != fourth && second != fifth && third != fourth && third != fifth && fourth !=fifth){

        if (first > second)
        {
            if (first > third)
            {
                if (first > fourth)
                {
                    if (first > fifth)
                    {
                        cout << "First value is max";
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
                cout << "Third value is max";
            }
        }
            else{
                if (second > third)
                {
                    if (second > fourth)
                    {
                        if (second > fifth)
                        {
                            cout <<  "Second value is max";
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
                            cout << "Third value is max";
                        }
                        else{
    
                            cout << "Fifth value is max";
                        }
                        
                    }
                    else{
                        if (fourth  > fifth)
                        {
                            cout << "Fourth value is max";
                        }
                        else{
                            cout << "Fifth value is max";
                        }
                        
                    }
                    
                }
                
            }
            
            
        }
        else{
            cout << "All values are equal";
        }
    }

   
    

