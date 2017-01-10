#include<iostream>
using namespace std;
class staticfunction 
{
	private:
     static int count; 
public: 
   static void setCount()
    {
      count++; 
    }
    void displayCount()
   {
      cout << count;
   }
}myk;
int staticfunction::count = 10;
int main()
{
	myk.setCount();
    staticfunction obj1;
    obj1.setCount();
    staticfunction::setCount();
    obj1.displayCount();
}

