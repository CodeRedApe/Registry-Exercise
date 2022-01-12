#include<iostream>
#include<string>
using namespace std;

int main()
{
string NameFirst,NameLast,DateOfBirth;
string AddressStreet,AddressCity,AddressState;
string AddressZIP;

cout<<"Enter Demographic Information Below\n\n";
cout<<"First Name: ";
cin>>NameFirst;
cout<<"Last Name: ";
cin>>NameLast;
cin.ignore();

cout<<"Date Of Birth: ";
cin>>DateOfBirth;
cin.ignore();

cout<<"\nEnter Address Below\n";
cout<<"\nStreet: ";
getline(cin, AddressStreet);
cout<<"City: ";
getline(cin, AddressCity);
cout<<"State: ";
getline(cin, AddressState);
cout<<"Zip: ";
cin>>AddressZIP;

cout<<endl<<endl;
cout<<"\nRegistered:\n";
cout<<"     Demographic Info\n";
cout<<"First Name: "<<NameFirst<<endl;
cout<<"Last Name: "<<NameLast<<endl;
cout<<"Date Of Birth: "<<DateOfBirth<<endl;
cout<<"\n     ADDRESS\n";
cout<<"Street: "<<AddressStreet<<endl;
cout<<"City: "<<AddressCity<<endl;
cout<<"State: "<<AddressState<<endl;
cout<<"Zip Code: "<<AddressZIP<<endl;

return 0;
}
