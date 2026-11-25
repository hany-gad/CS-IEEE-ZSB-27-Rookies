#include <iostream>

using namespace std;

int main()
{
 int rating ;
 cin>>rating;
 if(rating>=1900)
    cout<<"Division 1";
 else if(1600<=rating&rating<=1899)
    cout<<"Division 2";
 else if (1400<=rating &rating<=1599)
  cout<<"Division 3";
 else if(rating<=1399)
  cout<<"Division 4";




    return 0;
}
