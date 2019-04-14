/*
Due to vscode "c++ complie run" extension has some problems on supporting linking libraries,
I just put my debug assistant declaration and definition together in this .h file. It is
better to put them into .h and .cpp file separatly if possible later.
*/

#ifndef __DEBUG_ASSISTANT_H__
#define __DEBUG_ASSISTANT_H__

#include "leetcode_datatype_support.h"

using namespace std;

void debug_assistant_include_tester()
{
    cout << "INCLUDE OK";
}

string int_vector_to_string(vector<int> nums)
{
    stringstream ss;
    ss << "[";
    for (int i = 0; i < nums.size(); i++)
    {
        ss << nums[i] ;
        if (i != nums.size() - 1) ss << ",";
    }
    ss << "]";
    string res;
    ss >> res;
    return res;
}

void print_int_vector(vector<int> nums)
{
    cout << "[";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] ;
        if (i != nums.size() - 1) cout << ",";
    }
    cout << "]" << endl;
}

stringstream treenode_vector_to_stringstream(vector<TreeNode*> p)
{
    stringstream ss;
    for (int i = 0; i < p.size(); i++)
        ss << treeNodeToString(p[i]) << endl;
    ss << endl;
    return ss;
}

string print_treenode_vector(vector<TreeNode*> p)
{
    stringstream ss = treenode_vector_to_stringstream(p);
    string temp;
    while (ss >> temp)
    {
        cout << temp;
    }
    return "***output finish***";
}

void print_int_vector_vector(vector<vector<int>> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        print_int_vector(nums[i]);
    }
}

string bool_vector_to_string(vector<bool> nums)
{
    stringstream ss;
    ss << "[";
    for (int i = 0; i < nums.size(); i++)
    {
        ss << nums[i] ;
        if (i != nums.size() - 1) ss << ",";
    }
    ss << "]";
    string res;
    ss >> res;
    return res;
}

#endif