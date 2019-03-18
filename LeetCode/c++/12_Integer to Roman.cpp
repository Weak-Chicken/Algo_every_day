class Solution 
{
public:
    string intToRoman(int num) 
    {
        string res = "";
        while (num >= 1000)
        {
            num -= 1000;
            res += "M";
        }
        while (num >= 500)
        {
            if (num >= 900) {num -= 900; res += "CM";}
            else {num -= 500; res += "D";}
        }
        while (num >= 100)
        {
            if (num >= 400) {num -= 400; res += "CD";}
            else {num -= 100; res += "C";}
        }
        while (num >= 50)
        {
            if (num >= 90) {num -= 90; res += "XC";}
            else {num -= 50; res += "L";}
        }
        while (num >= 10)
        {
            if (num >= 40) {num -= 40; res += "XL";}
            else {num -= 10; res += "X";}
        }
        while (num >= 5)
        {
            if (num >= 9) {num -= 9; res += "IX";}
            else {num -= 5; res += "V";}
        }
        while (num >= 1)
        {
            if (num >= 4) {num -= 4; res += "IV";}
            else {num -= 1; res += "I";}
        }
        return res;
    }
};