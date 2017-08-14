# include <iostream>
using namespace std;
class distance
{
int feet,inches;
public :
void distance_assign(int f, int i)
     {
feet = f;
inches = i;
     }
void display()
     {
             cout << “\nFeet	 : “ << feet << “\tInches : “ << inches;
     }
distance operator+(distance d2)
    {
distance d3;
d3.feet = feet + d2.feet;
d3.inches = (inches + d2.inches) % 12;
d3.feet += (inches + d2.inches)/12;
return d3;
     }
};
int main()
{
clrscr();
distance dist_1,dist_2;
dist_1.distance_assign(12,11);
dist_2.distance_assign(24,1);
distance dist_3 = dist_1 + dist_2;
dist_1.display();
dist_2.display();
dist_3.display();
return 0;
}
