// #include<iostream>
// using namespace std;

// struct node
// {
//    int data;
//    node* next;

//    node(int val){
//     data = val;
//     next = NULL;
//    };

// };

// void begnig(int val , node *&head){
//     node* head ;
//     if (head == NULL)
//     {
//         head = new node(val);
//         head->next = NULL;
//         cout << "Create a node" << endl ;
//     }
//     else{
//         node* temp = new node(val);
//         temp->next = head;
//         head = temp;
//         cout << "Create a node" << endl ;

//     }
    
// }

// void read(){

// }


// int main()
// {
//     int user,uservalue;
//     node *head = NULL;

//     do
//     {
//         cout << "--------chose any one------------" << endl;
//         cout << "1. Insert at the beginning" << endl;
//         cout << "2. Read at the end" << endl;
//         cout << "3. Update at the beginning" << endl;
//         cout << "4. Delete at the beginning" << endl;
//         cout << "5. Exiting .... >>>>>>" << endl;

//         cin >> user ;

//         switch (user)
//         {
//         case 1:
//              int insertval;
//              cout << "Enter the value to be inserted at the beginning" << endl;
//              cout << "Enter the value to be inserted at the position" << endl;
//              cout << "Enter the value to be ending" << endl;
             
//              cin >> insertval ;

//              switch (insertval)
//              {
//              case 1:
//              cout << "Enter the value" << endl;
//              cin >> uservalue ;
//                 break;


//              case 2:
//                 /* code */
//                 break;
//              case 3:
//                 /* code */
//                 break;
             
//              default:
//                 break;
//              }
//             break;
        
//         default:
//             break;
//         }

//     } while (user != 0);
    
// }