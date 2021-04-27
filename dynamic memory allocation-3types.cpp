#include<iostream>

using namespace std;

class product{
  int price, qty;
public:
  void input(int x, int y)
  {
    price = x;
    qty = y;
  }
  void result()
  {
    cout<<"The total is: "<<price*qty<<endl;
  }
};
int main()
{
  //memory allocation to class object
  product *a = new product();
  (*a).input(5,6);
  (*a).result();

  a->input(4,4);
  a->result();

  delete a;

//memory allocation to array
int *p = new int[7];

for(int i = 0;i<5;i++)
{
  cin>>p[i];
}
for(int i = 0;i<5;i++)
{
  cout<<p[i]<<endl;
}
  delete []p;

//memory allocation to variable
  float *f = new float(8.6);
  cout<<*f<<endl;
  delete f;
}
