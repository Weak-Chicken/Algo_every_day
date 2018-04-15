class Solution 
{
public:
    string intToRoman(int num) 
    {
        string result = "";
        while (num >= 1000)
        {
            result.append("M");
            num -= 1000;
        }
        while (num >= 500)
        {
            if (num / 100 == 9)
            {
                result.append("CM");
                num -= 900;
            }
            else
            {
                result.append("D");
                num -= 500;
            }
        }
        while (num >= 100)
        {
            if (num / 100 == 4)
            {
                result.append("CD");
                num -= 400;
            }
            else
            {
                result.append("C");
                num -= 100;
            }
        }
        while (num >= 50)
        {
            if (num / 10 == 9)
            {
                result.append("XC");
                num -= 90;
            }
            else
            {
                result.append("L");
                num -= 50;
            }
        }
        while (num >= 10)
        {
            if (num / 10 == 4)
            {
                result.append("XL");
                num -= 40;
            }
            else
            {
                result.append("X");
                num -= 10;
            }
        }
        while (num >= 5)
        {
            if (num == 9)
            {
                result.append("IX");
                num -= 9;
            }
            else
            {
                result.append("V");
                num -= 5;
            }
        }
        while (num >= 1)
        {
            if (num == 4)
            {
                result.append("IV");
                num -= 4;
            }
            else
            {
                result.append("I");
                num -= 1;
            }
        }
        return result;
    }
};