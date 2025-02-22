#include <iostream>
using namespace std;

// Couldn't solve it my self
// i did it after check the prof solution and understand how does it work

int readNumber()
{
    int num = 0;
    cout << "Enter a number : ";
    cin >> num;
    return num;
}

string printTextNumber(int num)
{
    if (num >= 1 && num <= 19)
    {
        string arr[] = { "","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten",
            "Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Ninteen"
        };
        return arr[num] + " ";
    }
    
    if (num >= 20 && num <= 99)
    {
        string arr[] = { "","","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninty" };
        return arr[num / 10] + " " + printTextNumber(num % 10);
    }

    if (num >= 100 && num <= 199)
    {
        return "One Hundred " + printTextNumber(num % 100);
    }

    if (num >= 200 && num <= 999)
    {
        return printTextNumber(num / 100) + "Hundreds " + printTextNumber(num % 100);
    }

    if (num >= 1000 && num <= 1999)
    {
        return "One Thousand " + printTextNumber(num % 1000);
    }

    if (num >= 2000 && num <= 999999)
    {
        return printTextNumber(num / 1000) + "Thousands " + printTextNumber(num % 1000);
    }

    if (num >= 1000000 && num <= 1999999)
    {
        return "One Million " + printTextNumber(num % 1000000);
    }

    if (num >= 2000000 && num <= 999999999)
    {
        return printTextNumber(num / 1000000) + "Millions " + printTextNumber(num % 1000000);
    }

    if (num >= 1000000000 && num <= 1999999999)
    {
        return "One Billion " + printTextNumber(num % 1000000000);
    }
    else
    {
        return printTextNumber(num / 1000000000) + "Billions " + printTextNumber(num % 1000000000);
    }
}

int main()
{
    int num = readNumber();

    cout << num << endl;
    cout << printTextNumber(num);
    
}