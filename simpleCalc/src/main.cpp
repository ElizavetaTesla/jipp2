#include <iostream>
#include <sstream>
#include "math.h"


using namespace std;

int main(int argc, char *argv[])
{
    for(int i = 0; i < argc ; ++i)
    {
        cout << argv[i] <<endl;
    }
    int a, b, c, z;
    string i = argv[1];
    if (i=="add"&& argc==4)
    {
        stringstream new_a (argv [2]);
        new_a>>a;
        stringstream new_b (argv [3]);
        new_b>>b;
        cout<<"add\n";
        cout<<a+b;
    }

    else if(i=="subtract"&& argc==4)
    {
        stringstream new_a (argv [2]);
        new_a>>a;
        stringstream new_b (argv [3]);
        new_b>>b;
        cout<<"subtract\n";
        cout<<a-b;
    }
    else if(i=="volume"&& argc==6)
    {
        stringstream new_a (argv [2]);
        new_a>>a;
        stringstream new_b (argv [3]);
        new_b>>b;
        stringstream new_c (argv [4]);
        new_c>>c;
        stringstream new_z (argv [5]);
        new_z>>z;
        cout<<"volume\n";
        cout<<(a+b)*sqrt(c*c-(b-a)*(b-a)/4)/2*z;
    }
    else if(i=="help"&& argc==2)
    {
        cout<<"help"
        "Simple calculatur"
        "simpleCalc [nazwa działania]"

        "Działania:"
        "add [a] [b]"
        "Dodawanie dwóch liczb ([a] i [b]) całkowitych."

        "subtract [a] [b]"
        "Odejmowanie dwóch liczb ([a] i [b]) całkowitych."

        "volume [a] [b] [c] [z]"
        "Obliczanie objętości graniastosłupa prostego o podstawie trapezu ([a] [b] [c] i [z]) .";
    }
    else
    {
        cout<<"error"
        "Simple calculatur"
        "simpleCalc [nazwa działania]"

        "Działania:"
        "add [a] [b]"
        "Dodawanie dwóch liczb ([a] i [b]) całkowitych."

        "subtract [a] [b]"
        "Odejmowanie dwóch liczb ([a] i [b]) całkowitych."

        "volume [a] [b] [c] [z]"
        "Obliczanie objętości graniastosłupa prostego o podstawie trapezu ([a] [b] [c] i [z]) .";
    }

    return 0;
}