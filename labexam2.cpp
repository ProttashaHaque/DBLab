#include<iostream>
using namespace std;
class product
{
public:
    string product_name;
    int product_id;
    string product_category;
    int unite_price;
};
int main()
{
    int i,j,n;
    cout<<"ENTER THE PRODUCTS WITH DETAILS:";
    cin>>n;
    product p[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter product "<<i+1<<" details:"<<endl;
        cout<<"Enter product name:";
        cin>>p[i].product_name;
        cout<<"Enter product id:";
        cin>>p[i].product_id;
        cout<<"Enter product category:";
        cin>>p[i].product_category;
        cout<<"Enter unite price:";
        cin>>p[i].unite_price;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i].unite_price>p[j].unite_price)
            {
                product temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
int press;
cout << "1.Bubble Sorting: " << endl;
cout << "2.Selection Sorting: " << endl;
cout << "3.Search Product Name: " << endl;
cout << " Push the button which sort you want : ";





cin>>press;





switch (press) {
  case 1:
    cout << "Bubble Short";
    cout<<"The products sorted according to unite price are:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Product "<<i+1<<" details:"<<endl;
        cout<<"Product name:"<<p[i].product_name<<endl;
        cout<<"Product id:"<<p[i].product_id<<endl;
        cout<<"Product category:"<<p[i].product_category<<endl;
        cout<<"Unite price:"<<p[i].unite_price<<endl;
    }





  break;
  case 2:
    cout << "Selection Short";



   cout<<" Sorting by selection sort";
for(int i=0;i<5;i++)
{
     int min_index =1;
    for(int j=i+1;j<5;j++)
    {
      if(p[min_index].unite_price>p[j].unite_price)
    {
    min_index=j;
    product temp=p[j];
    p[j]=p[i];
    p[i]=temp;



    }

    }



   }
    cout<<endl;



    break;
    case 3:
    cout<<"SEARCHING NAME OF PRODUCT"<<endl;

    string product_name;

       cin>>product_name;
    for(i=0;i<5;i++)
{
        if(p[i].product_name == product_name)



{
    cout<<"Product's ID:"<<p[i].product_id<<endl;
    cout<<"Product's Name:"<<p[i].product_name<<endl;
    cout<<"Product's Price:"<<p[i].unite_price<<endl;
    cout<<"Product's Category:"<<p[i].product_category<<endl;
}
}

}

  return 0;
}
