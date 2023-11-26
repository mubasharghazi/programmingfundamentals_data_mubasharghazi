// Ghazi is an entrepreneur and he opens small shops in a few 
// cities with different prices in dollars for the following 
// products: cities names
// Product: Lahore Islamabad Karachi
// Coffee:  0.50$    0.40$     0.45$
// Sweets:  1.45$    1.30$     1.35$
// Water :  0.80$    0.70$     0.70$
// Calculate the price (float) by the given city (string), 
// product (string) and quantity (integer).
#include <iostream>
#include <string>
using namespace std;
int main()
{
    float price,pay;
    int quantity;
    string city,product;
    cout<<"Enter Product, You want to buy(Water,Sweets,Coffee)..."<<endl;
    cin>>product;
    cout<<"Where From You Buy? Enter City(Lahore,Islamabad,Karachi)"<<endl;
    cin>>city;
    cout<<"Enter Quantity of Product: "<<endl;
    cin>>quantity;

// With Nested If Condition

    // if(product == "Coffee"){
    //     if(city == "Lahore"){
    //         price = 0.50;
    //         pay = price * quantity;
    //         cout<<"Please Pay Only "<<pay<<"$"<<endl;
    //     }else if(city == "Islamabad"){
    //         price = 0.40;
    //         pay = price * quantity;
    //         cout<<"Please Pay Only "<<pay<<"$"<<endl;
    //     }else if(city == "Karachi"){
    //         price = 0.45;
    //         pay = price * quantity;
    //         cout<<"Please Pay Only "<<pay<<"$"<<endl;
    //     }else{
    //         cout<<"Our Shop is not available in that city.Sorry!"<<endl;
    //     }
    // }else if(product == "Water"){
    //     if(city == "Lahore"){
    //         price = 0.80;
    //         pay = price * quantity;
    //         cout<<"Please Pay Only "<<pay<<"$"<<endl;
    //     }else if(city == "Islamabad"){
    //         price = 0.70;
    //         pay = price * quantity;
    //         cout<<"Please Pay Only "<<pay<<"$"<<endl;
    //     }else if(city == "Karachi"){
    //         price = 0.70;
    //         pay = price * quantity;
    //         cout<<"Please Pay Only "<<pay<<"$"<<endl;
    //     }else{
    //         cout<<"Our Shop is not available in that city.Sorry"<<endl;
    //     }
    // }else if(product == "Sweets"){
    //     if(city == "Lahore"){
    //         price = 1.45;
    //         pay = price * quantity;
    //         cout<<"Please Pay Only "<<pay<<"$"<<endl;
    //     }else if(city == "Islamabad"){
    //         price = 1.30;
    //         pay = price * quantity;
    //         cout<<"Please Pay Only "<<pay<<"$"<<endl;
    //     }else if(city == "Karachi"){
    //         price = 1.35;
    //         pay = price * quantity;
    //         cout<<"Please Pay Only "<<pay<<"$"<<endl;
    //     }else{
    //         cout<<"Our Shop is not available in that city.Sorry"<<endl;
    //     }
    // }else{
    //     cout<<"Enter a Product from available products"<<endl;
    // }

    // Using Logical Operator
    if(product == "Coffee" && city == "Lahore"){
        price = 0.50;
        pay = price * quantity;
    }
    if(product == "Coffee" && city == "Islamabad"){
        price = 0.40;
        pay = price * quantity;
    }
    if(product == "Coffee" && city == "Karachi"){
        price = 0.45;
        pay = price * quantity;
    }
    if(product == "Water" && city == "Lahore"){
        price = 0.80;
        pay = price * quantity;
    }
    if(product == "Water" && city == "Islamabad"){
        price = 0.70;
        pay = price * quantity;
    }
    if(product == "Water" && city == "Karachi"){
        price = 0.70;
        pay = price * quantity;
    }
    if(product == "Sweets" && city == "Lahore"){
        price = 1.45;
        pay = price * quantity;
    }
    if(product == "Sweets" && city == "Islamabad"){
        price = 1.30;
        pay = price * quantity;
    }
    if(product == "Sweets" && city == "Karachi"){
        price = 1.35;
        pay = price * quantity;
    }
    cout<<"Please Pay Only "<<pay<<"$"<<endl;
return 0;
}