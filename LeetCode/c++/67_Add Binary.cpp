class Solution 
{
private:
    int binary_add(char a, char b)
    {
        if (a == '0' && b == '0') return 0;
        else if ((a == '1' && b == '0') || (a == '0' && b == '1')) return 1;
        else if (a == '1' && b == '1') return 2;
        return -1;
    }
public:
    string addBinary(string a, string b) 
    {
        if (a.size() < b.size()) return addBinary(b, a);
        int c = 0; string res = "";
        while (b.size() < a.size()) b.insert(0, "0");
        for (int i = a.size() - 1; i >= 0; i--)
        {
            if (binary_add(a[i], b[i]) + c == 3) {c = 1; res.insert(0, "1");}
            else if (binary_add(a[i], b[i]) + c == 2) {c = 1; res.insert(0, "0");}
            else if (binary_add(a[i], b[i]) + c == 1) {c = 0; res.insert(0, "1");}
            else if (binary_add(a[i], b[i]) + c == 0) {c = 0; res.insert(0, "0");}
        }
        if (c == 1) res.insert(0, "1");
        return res;
    }
};