#include <iostream>
#include<string>
using namespace std;
int AND(int a, int b)
{
    return a & b;
}

int OR(int a, int b)
{
    return a | b;
}

int XOR(int a, int b)
{
    return a ^ b;
}
int NAND(int a ,int b)
{
    return !(a & b);
}
int NOR(int a ,int b)
{
    return !(a | b);
}

void truthTableAND()
{       
    int a;
    int b;
    cout<<"Enter A and B :";
    while(cin>>a>>b && (a==1 || a==0 && b==1 || b==0 ))
    {
    cout << "\nAND Gate Truth Table\n";
    cout << "A B | Y\n";   
    cout << a << " " << b << " | " << AND(a, b) << "\n\n";
    
    cout<<a<<"  ************* **  "<<endl;
    cout<<"              **     ** "<<endl;
    cout<<"              **      **"<<endl;
    cout<<"              **       ************  "<<AND(a,b)<<endl;
    cout<<"              **      **"<<endl;
    cout<<"              **     ** "<<endl;
    cout<<b<<"  ************* ** "<<endl;
    cout<<"         AND GATE             "<<endl;
    cout<<"Enter value other than 1 and 0 to exist :";
    }    
    
    
}

void truthTableOR()
{
        
    int a;
    int b;
    cout<<"Enter A and B :";
    while(cin>>a>>b && (a==1 || a==0 && b==1 || b==0 ))
    {
    cout << "\nOR Gate Truth Table\n";
    cout << "A B | Y\n";   
    cout << a << " " << b << " | " << OR(a, b) << "\n\n";
      cout<<a<<" ******** ******      "<<endl;
    cout<<"             **    **    "<<endl;
    cout<<"              **      **    "<<endl;
    cout<<"              **       ** **********  "<<OR(a,b)<<endl;
    cout<<"              **      **    "<<endl;
    cout<<"             **    **   "<<endl;
    cout<<b<<" ******** ******          "<<endl;
    cout<<"         OR GATE             "<<endl;
     cout<<"Enter value other than 1 and 0 to exist :";


}
}
void truthTableXOR()
{        
    int a;
    int b;
    cout<<"Enter A and B :";
    while(cin>>a>>b && (a==1 || a==0 && b==1 || b==0 ))
    {
    cout << "\nXOR Gate Truth Table\n";
    cout << "A B | Y\n";   
    cout << a << " " << b << " | " << XOR(a, b) << "\n\n";
     cout<<a<<" ******* **   ******      "<<endl;
    cout<<"            **   **    **    "<<endl;
    cout<<"             **   **      **    "<<endl;
    cout<<"             **   **       ** **********  "<<XOR(a,b)<<endl;
    cout<<"             **   **      **    "<<endl;
    cout<<"            **   **    **   "<<endl;
    cout<<b<<" ******* **   ******          "<<endl;
    cout<<"         XOR GATE             "<<endl;
     cout<<"Enter value other than 1 and 0 to exist :";
    }

}
void truthTableNAND()
{
    int a;
    int b;
    cout<<"Enter A and B :";
    while(cin>>a>>b && (a==1 || a==0 && b==1 || b==0 ))
    {
    cout << "\nNAND Gate Truth Table\n";
    cout << "A B | Y\n";   
    cout << a << " " << b << " | " << NAND(a, b) << "\n\n";
    
    cout<<a<<"  ************* **  "<<endl;
    cout<<"              **     ** "<<endl;
    cout<<"              **      **"<<endl;
    cout<<"              **       *O*********** "<<NAND(a,b)<<endl;
    cout<<"              **      **"<<endl;
    cout<<"              **     ** "<<endl;
    cout<<b<<"  ************* ** "<<endl;
    cout<<"         NAND GATE             "<<endl;
     cout<<"Enter value other than 1 and 0 to exist :";
    }    
}
void truthTableNOR()
{
     int a;
    int b;
    cout<<"Enter A and B :";
    while(cin>>a>>b && (a==1 || a==0 && b==1 || b==0 ))
    {
    cout << "\nNOR Gate Truth Table\n";
    cout << "A B | Y\n";   
    cout << a << " " << b << " | " << NOR(a, b) << "\n\n";
      cout<<a<<" ******** ******      "<<endl;
    cout<<"             **    **    "<<endl;
    cout<<"              **      **    "<<endl;
    cout<<"              **       *O**********  "<<NOR(a,b)<<endl;
    cout<<"              **      **    "<<endl;
    cout<<"             **    **   "<<endl;
    cout<<b<<" ******** ******          "<<endl;
    cout<<"         NOR GATE             "<<endl;
     cout<<"Enter value other than 1 and 0 to exist :";
}
}



void halfAdder()
{
   int a,b;
   cout<<"Enter the value of A and B :";
   
 while(cin>>a>>b && (a==1 || a==0 && b==1 || b==0 ))
 {
    cout << "\nHalf Adder Truth Table\n";
    cout << "A B | Sum Carry\n";
            bool sum = XOR(a, b);
            bool carry = AND(a, b);
            cout << a << " " << b << " |  " << sum << "     " << carry << endl;
        
    cout << "\nHalf Adder Circuit\n";
    cout << a<<"----> XOR ---->" <<sum<<"\n";
    cout << " \\ \n";
    cout << b<<" --> AND ---->" <<carry<<"\n";
     cout<<"Enter value other than 1 and 0 to exist :";
 }
    }
void fullAdder()
{

    int a,b,c;
    cout<<"Enter the value of A , b and Cin";

 while(cin>>a>>b>>c && (a==1 || a==0 && b==1 || b==0 && c==1 || c==0 ))
 {
            cout << "\nFull Adder Truth Table\n";
            cout << "A B Cin | Sum Cout\n";
                int sum = XOR(XOR(a, b), c);
                int carry1 =AND(a,b);
                int carry2=AND(c,XOR(a,b));
                int carry=OR(carry1,carry2); 
                cout << a << " " << b << "  " << c
                     << "  |  " << sum << "    " << carry << endl;
            
        
    

    cout << "\nFull Adder Circuit\n";
    cout << a<<" ----> XOR ----> XOR ----> Sum\n";
    cout << b<<"            \n"<<c;
    cout << " \\ \n";
    cout << "  --> AND ----\\\n";
    cout << "               OR ----> \n"<<c;
    cout << c<<" --> AND ---/\n";
     cout<<"Enter value other than 1 and 0 to exist :";
}
}

int NOT(int a) {
    return (a == 1) ? 0 : 1;
}

void booleanMinimization()
{
    int choice;
    int a;

    cout << "\n--- BOOLEAN MINIMIZATION CALCULATOR ---\n";
    cout << "1. Identity Law (A + 0 = A | A . 1 = A)\n";
    cout << "2. Null Law     (A + 1 = 1 | A . 0 = 0)\n";
    cout << "3. Idempotent   (A + A = A | A . A = A)\n";
    cout << "4. Complement   (A + A' = 1 | A . A' = 0)\n";
    cout << "Enter the law you want to test: ";
    cin >> choice;

    cout << "Enter input value for A (0 or 1): ";
    cin >> a;

   
    if (a != 0 && a != 1) {
        cout << "Invalid input! Please enter 0 or 1.\n";
        return;
    }

    cout << "\n--- Minimization Result ---\n";

    switch (choice)
    {
    case 1: 
        cout << "Operation: A + 0  =>  " << a << " + 0 = " << OR(a, 0) << " (Result matches A)\n";
        cout << "Operation: A . 1  =>  " << a << " . 1 = " << AND(a, 1) << " (Result matches A)\n";
        break;
    case 2: 
        cout << "Operation: A + 1  =>  " << a << " + 1 = " << OR(a, 1) << " (Result is always 1)\n";
        cout << "Operation: A . 0  =>  " << a << " . 0 = " << AND(a, 0) << " (Result is always 0)\n";
        break;
    case 3: 
        cout << "Operation: A + A  =>  " << a << " + " << a << " = " << OR(a, a) << " (Simplified to A)\n";
        cout << "Operation: A . A  =>  " << a << " . " << a << " = " << AND(a, a) << " (Simplified to A)\n";
        break;
    case 4: 
        cout << "Operation: A + A' =>  " << a << " + " << NOT(a) << " = " << OR(a, NOT(a)) << " (Always 1)\n";
        cout << "Operation: A . A' =>  " << a << " . " << NOT(a) << " = " << AND(a, NOT(a)) << " (Always 0)\n";
        break;
    default:
        cout << "Invalid choice!\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n\n--- DIGITAL LOGIC CIRCUIT SIMULATOR ---\n";
        cout << "1. AND Gate\n";
        cout << "2. OR Gate\n";
        cout << "3. XOR Gate\n";
        cout << "4. Half Adder\n";
        cout << "5. Full Adder\n";
        cout << "6. Boolean Minimization\n";
        cout<<  "7. NAND GATE \n";
        cout<<  "8. NOR GATE \n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
           
            truthTableAND();
            break;
        case 2:
           
            truthTableOR();
            break;
        case 3:
           
            truthTableXOR();
            break;
        case 4:
            halfAdder();
            break;
        case 5:
            fullAdder();
            break;
        case 6:
            booleanMinimization();
            break;
        case 7:
         truthTableNAND();
         break;
         case 8:
          truthTableNOR();
          break;
        case 0:
            cout << "Program Exited Successfully.\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}