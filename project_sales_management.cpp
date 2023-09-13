#include<iostream>
#include<vector>
using namespace std;
struct sale{
    string name;
    int price, quantity;
};
sale s1;
vector<sale>item;
int main(){
    while(true){
        int value;
        cout<<"1.Add items: "<<endl;
        cout<<"2.Search items: "<<endl;
        cout<<"3.Sold items: "<<endl;
        cout<<"4.Show all items: "<<endl;
        cout<<"0.For exit: "<<endl;
        cout<<"Enter here: ";
        cin>>value;

        if(value==1){
            system("cls");
            int choice;
            do{
                cout<<"Name: ";
                cin>>s1.name;
                cout<<"Price: ";
                cin>>s1.price;
                cout<<"Quantity: ";
                cin>>s1.quantity;
                item.push_back(s1);
                cout<<"Saved successfully; "<<endl;
                cout<<"Enter '1' for continue and '0' for exit: ";
                cin>>choice;
            }
            while(choice!=0 && choice==1);
        }
        else if(value==2){
            system("cls");
            string n;
            cout<<"Enter name for search item: ";
            cin>>n;
            for(int i=0; i<item.size(); i++){
                if(n==item[i].name){
                    cout<<"Name: "<<item[i].name<<endl;
                    cout<<"Price: "<<item[i].price<<endl;
                    cout<<"Quantity: "<<item[i].quantity<<endl<<endl;
                }
            }
        }
        else if(value==3){
            string n;
            cout<<"Enter name of sold items: ";
            cin>>n;
            for(int i=0; i<item.size(); i++){
                if(n== item[i].name){
                    int q;
                    cout<<"Enter sold quantity: ";
                    cin>>q;
                    item[i].quantity=item[i].quantity - q;
                    cout<<"Remaining Quantity of "<<item[i].name<<" is: "<<item[i].quantity<<endl;
                }
            }
        }
        else if(value==4){
            system("cls");
            for(int i=0; i<item.size(); i++){
                cout<<"Name: "<<item[i].name<<endl;
                cout<<"Price: "<<item[i].price<<endl;
                cout<<"Quantity: "<<item[i].quantity<<endl<<endl;
            }
        }
        else if(value==0){
            exit(0);
        }
        else{
            system("cls");
            cout<<"Invalid Input"<<endl<<endl;
        }
    }
}
