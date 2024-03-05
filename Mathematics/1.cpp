#include <iostream>
using namespace std;

int binaryToDecimal(int n)
{
    int rem, ans = 0, mul = 1;

    while (n != 0)
    {
        /* code */
        rem = n % 10;
        ans = ans + rem * mul;
        mul *= 2;
        n /= 10;
    }
    return ans;
}
int decimalToBinary(int n)
{
    int rem, ans = 0, mul = 1;

    while (n != 0)
    {
        /* code */
        rem = n % 2;
        ans = ans + rem * mul;
        mul *= 10;
        n /= 2;
    }

    return ans;
}

int main()
{
    int n, number;
    cout << "choose the option.\n1.Binary to decimal\n2.Decimal to binary" << endl;

    cin >> n;
    if (n != 1 && n != 2)
    {
        cout << "please enter valid number\n";
    }
    else
    {
        if (n == 1)
        {   cout<<"enter binary number"<<endl;
            cin >> number;
            int btd = binaryToDecimal(number);
            cout << "decimal value for entered binary is : " << btd<<endl;
        }
        else
        {   
            cout<<"enter decimal number"<<endl;
            cin >> number;
            int dtb = decimalToBinary(number);
            cout << "binary value for entered decimal is : " << dtb<<endl;
        }
    }

    return 0;
}