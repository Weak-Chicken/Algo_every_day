class Solution 
{
public:
    int hammingDistance(int x, int y) 
    {
        bitset<32> bit_x(x); bitset<32> bit_y(y);
        return (bit_x ^ bit_y).count();
    }
};