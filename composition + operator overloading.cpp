#include<iostream>

using namespace std;

class product{
  int price, qty;
public:
  void input(int x, int y)
  {
    price =x;
    qty =y;
  }
  void result()
  {
    cout<<"The total is: "<<price*qty<<endl;
  }
  void operator ++ (int)
  {
    price++;
    qty++;
  }

  int operator == (product bobj)
  {
    if(price == bobj.price && qty == bobj.qty)
    return 1;
    else
    return 0;
  }
  int operator < (product bobj)
  {
    if(price < bobj.price && qty < bobj.qty)
    return 1;
    else
    return 0;
  }
};

class product2{
  int price, qty;
public:
  void input2(int x, int y)
  {
    price =x;
    qty =y;
  }
  void result2()
  {
    cout<<"The total is: "<<price*qty<<endl;
  }
  void operator += (product2 robj)
  {
    price = price +robj.price;
    qty = qty +robj.qty;
  }
  product2 operator + (product2 cobj)
  {
    product2 bhaji;
    bhaji.price = price + cobj.price;
    bhaji.qty = qty + cobj.qty;
    return bhaji;
  }
};

class m{
  product object;
  product objectb;
  product2 object2;
  product2 object4;
  product2 object5;
public:
  void all()
  {
    object.input(7,7);
    object++;
    object.result();

    objectb.input(7,7);
    objectb++;
    objectb.result();

    if(object == objectb)
    cout<<"same"<<endl;
    else
    cout<<"not same"<<endl;

    if(object < objectb)
    cout<<"shorter"<<endl;
    else
    cout<<"not shorter"<<endl;

    object2.input2(7,7);
    object2.result2();

    object4.input2(8,8);
    object4.result2();

    object2 += object4;
    object2.result2();

    object5 = object4 + object2;
    object5.result2();

  }
};

int main()
{
  m object3;
  object3.all();
}
