//// 做题调试用.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////
//
#include "pch.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <math.h>
#include<algorithm>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <regex>
#include <set>
#include <stack>
using namespace std;
//
//vector<vector<int>> result;
//vector<vector<string>> result1;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}	
//};
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Node1 {
//public:
//	int val;
//	Node1* left;
//	Node1* right;
//	Node1* next;
//
//	Node1() : val(0), left(NULL), right(NULL), next(NULL) {}
//
//	Node1(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
//
//	Node1(int _val, Node1* _left, Node1* _right, Node1* _next)
//		: val(_val), left(_left), right(_right), next(_next) {}
//};
//
//class Node {
//public:
//	int val;
//	vector<Node*> neighbors;
//
//	Node() {}
//
//	Node(int _val, vector<Node*> _neighbors) {
//		val = _val;
//		neighbors = _neighbors;
//	}
//};
//
//class Node2 {
//public:
//	int val;
//	Node2* next;
//	Node2* random;
//
//	Node2() {}
//
//	Node2(int _val, Node2* _next, Node2* _random) {
//		val = _val;
//		next = _next;
//		random = _random;
//	}
//};
//
//double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//	if (nums1.size() <= nums2.size())
//	{
//		int num = nums1.size() + nums2.size();
//		int cut = 0;
//		if (num % 2)
//		{
//			//总数为奇数，找到第num/2+1个数
//			cut = num / 2 + 1;
//			if (nums1.size() == 0)
//			{
//				return nums2[cut];
//			}
//			int leftMax = nums2[cut - 1];
//			int rightMin = 0;
//			if (cut < nums2.size())
//			{
//				rightMin = nums1[0] < nums2[cut] ? nums1[0] : nums2[cut];
//			}
//			else
//			{
//				rightMin = nums1[0];
//			}
//			int i = 0;
//			while (leftMax > rightMin)
//			{
//				leftMax = nums1[i];
//				if (cut - i - 2 > 0)
//				{
//					leftMax = nums1[i] > nums2[cut - i - 2] ? nums1[i] : nums2[cut - i - 2];
//				}
//				if (++i < nums1.size())
//				{
//					rightMin = nums1[i] < nums2[cut - i] ? nums1[i] : nums2[cut - i];
//				}
//				else
//				{
//					rightMin = nums2[cut - i];
//				}
//			}
//			return leftMax;
//		}
//		else
//		{
//			cut = num / 2;
//			if (nums1.size() == 0)
//			{
//				return (nums1[cut] + nums1[cut + 1]) / 2;
//			}
//			int leftMax = nums2[cut - 1];
//			int rightMin = nums1[0];
//			if (cut < nums2.size())
//			{
//				rightMin = nums1[0] < nums2[cut] ? nums1[0] : nums2[cut];
//			}
//			int i = 0;
//			while (leftMax > rightMin)
//			{
//				leftMax = nums1[i];
//				if (cut - i - 2 >= 0)
//				{
//					leftMax = nums1[i] > nums2[cut - i - 2] ? nums1[i] : nums2[cut - i - 2];
//				}
//				rightMin = nums2[cut - i - 1];
//				if (++i < nums1.size())
//				{
//					rightMin = nums1[i] < nums2[cut - i] ? nums1[i] : nums2[cut - i];
//				}
//			}
//			return (leftMax + rightMin) / 2.0;
//		}
//	}
//	else
//	{
//		return findMedianSortedArrays(nums2, nums1);
//	}
//}
//
//string longestPalindrome(string s) {
//	int length = s.size();
//	if (length == 1)
//	{
//		return s;
//	}
//	int maxSize = 0;
//	string result;
//	for (int i = 0; i != length; i++)
//	{
//		for (int j = (length - 1); j != i; j--)
//		{
//			if (s[j] == s[i])
//			{
//				int k = 1;
//				while (s[j-k] == s[i + k] && ((j-k) >= (i + k)))
//				{
//					k++;
//				}
//				if ((j-k) < (i + k))
//				{
//					int size = j - i + 1;
//					if (size > maxSize)
//					{
//						maxSize = size;
//						result = s.substr(i, size);
//					}
//				}
//			}
//		}
//	}
//	if (result.size() == 0)
//	{
//		result = s.substr(0, 1);
//	}
//	return result;
//}
//
//string convert(string s, int numRows) {
//	if (numRows == 1)
//	{
//		return s;
//	}
//	vector<vector<char> > v(numRows);
//	int j = 1;
//	int dir = 1;
//	for (int i = 0; i < s.size(); i++)
//	{
//		v[j - 1].push_back(s[i]);
//		if (j == numRows)
//		{
//			dir = -1;
//		}
//		else if (j == 1)
//		{
//			dir = 1;
//		}
//		j += dir;
//	}
//	string s1;
//	for (int i = 0; i < numRows; i++)
//	{
//		for (int j = 0; j < v[i].size(); j++)
//		{
//			s1.append(1,v[i][j]);
//		}
//	}
//	return s1;
//}
//
//int reverse(int x) {
//	long sum = 0;
//	while (x != 0)
//	{
//		int pop = x % 10;
//		if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && pop > 7)) return 0;
//		if (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && pop < -8)) return 0;
//		sum = sum * 10 + pop;
//		x = x / 10;
//	}
//	return sum;
//}
//
//int myAtoi(string str) {
//	while (str.size() == 0)
//	{
//		return 0;
//	}
//	int i = 0;
//	char c = str[i];
//	while (c == ' ')
//	{
//		i++;
//		c = str[i];
//	}
//	int sum = 0;
//	if (c == '-')
//	{
//		i++;
//		c = str[i];
//		while (c >= 48 && c <= 57)
//		{
//			int num = c - 48;
//			if (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && num > 8)) return INT_MIN;
//			sum = sum * 10 - num;
//			i++;
//			c = str[i];
//		}
//		return sum;
//	}
//	else if ((c >= 48 && c <= 57) || c == '+')
//	{
//		if (c == '+')
//		{
//			i++;
//			c = str[i];
//		}
//		while (c >= 48 && c <= 57)
//		{
//			int num = c - 48;
//			if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && num > 7)) return INT_MAX;
//			sum = sum * 10 + num;
//			i++;
//			c = str[i];
//		}
//		return sum;
//	}
//	return 0;
//}
//
//bool isPalindrome(int x) {
//	int ini = x;
//	if (x < 0)
//	{
//		return false;
//	}
//	if (x < 10)
//	{
//		return true;
//	}
//	int num = 0;
//	while (x)
//	{
//		int pop = x % 10;
//		if (num > INT_MAX / 10 || (num == INT_MAX && pop > 7)) return false;
//		num = num * 10 + pop;
//		x = x / 10;
//	}
//	if (num == ini)
//	{
//		return true;
//	}
//	return false;
//}
//
//bool isMatch(string s, string p) {
//	int slen = s.length() + 1;
//	int plen = p.length() + 1;
//	bool **dp = new bool*[slen];
//	for (int i = 0; i < slen; ++i) dp[i] = new bool[plen];
//	for (int i = 0; i < slen; ++i)
//	{
//		for (int j = 0; j < plen; ++j)
//		{
//			dp[i][j] = false;
//		}
//	}
//	dp[0][0] = true;
//	for (int j = 0; j < plen - 1; ++j)
//	{
//		if (p[j] == '*')
//		{
//			dp[0][j + 1] = (j >= 1 && dp[0][j - 1]);
//		}
//	}
//	for (int i = 0; i < s.length(); i++) {
//		for (int j = 0; j < p.length(); j++) {
//			if (p[j] == s[i] || p[j] == '.')
//			{
//				dp[i+1][j+1] = dp[i][j];
//			}
//			else if (p[j] == '*')
//			{
//				if (p[j - 1] == s[i] || p[j - 1] == '.')
//				{
//					dp[i + 1][j + 1] = (dp[i][j] || dp[i][j + 1] || dp[i + 1][j - 1]);
//				}
//				else
//				{
//					dp[i + 1][j + 1] = dp[i + 1][j - 1];
//				}
//			}
//			/*if (j > 1 && p[j - 1] == '*') {
//				dp[i][j] = dp[i][j - 2] || (i > 0 && (s[i - 1] == p[j - 2] || p[j - 2] == '.') && dp[i - 1][j]);
//			}
//			else {
//				dp[i][j] = i > 0 && dp[i - 1][j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.');
//			}*/
//		}
//	}
//	return dp[slen - 1][plen - 1];
//}
//
//int maxArea(vector<int>& height) {
//	int size = height.size() - 1;
//	int max = 0;
//	int left = 0;
//	int right = size;
//
//	while (left < right)
//	{
//		int num1 = height.at(left);
//		int num2 = height.at(right);
//		if (num1 < num2)
//		{
//			int v = num1 * (right - left);
//			if (v > max)
//			{
//				max = v;
//			}
//			left++;
//		}
//		else if (num1 >= num2)
//		{
//			int v = num2 * (right - left);
//			if (v > max)
//			{
//				max = v;
//			}
//			right--;
//		}
//	}
//	return max;
//}
//
//string intToRoman(int num) {
//	int i = 1;
//	string result;
//	while (num)
//	{
//		int tmpNum = num % 10;
//		//个位
//		if (i == 1)
//		{
//			//0-3
//			if (tmpNum < 4)
//			{
//				string tmpStr(tmpNum, 'I');
//				result = tmpStr + result;
//			}
//			else if (tmpNum == 4)
//			{
//				result = "IV" + result;
//			}
//			else if (tmpNum > 4 && tmpNum < 9)
//			{
//				string tmpStr = "V";
//				tmpStr.append(tmpNum - 5, 'I');
//				result = tmpStr + result;
//			}
//			else
//			{
//				result = "IX" + result;
//			}
//		}
//		//十位
//		else if (i == 2)
//		{
//			//0-3
//			if (tmpNum < 4)
//			{
//				string tmpStr(tmpNum, 'X');
//				result = tmpStr + result;
//			}
//			else if (tmpNum == 4)
//			{
//				result = "XL" + result;
//			}
//			else if (tmpNum > 4 && tmpNum < 9)
//			{
//				string tmpStr = "L";
//				tmpStr.append(tmpNum - 5, 'X');
//				result = tmpStr + result;
//			}
//			else
//			{
//				result = "XC" + result;
//			}
//		}
//		//百位
//		else if (i == 3)
//		{
//			//0-3
//			if (tmpNum < 4)
//			{
//				string tmpStr(tmpNum, 'C');
//				result = tmpStr + result;
//			}
//			else if (tmpNum == 4)
//			{
//				result = "CD" + result;
//			}
//			else if (tmpNum > 4 && tmpNum < 9)
//			{
//				string tmpStr = "D";
//				tmpStr.append(tmpNum - 5, 'C');
//				result = tmpStr + result;
//			}
//			else
//			{
//				result = "CM" + result;
//			}
//		}
//		//千位
//		else
//		{
//			string tmpStr(tmpNum, 'M');
//			result = tmpStr + result;
//		}
//		i++;
//		num = num / 10;
//	}
//	return result;
//}
//
//int romanToInt(string s) {
//	char pre = ' ';
//	int result = 0;
//	for (auto it = s.rbegin(); it != s.rend(); it++)
//	{
//		char tmpC = *it;
//		if (tmpC == 'I')
//		{
//			if (pre != 'V'&&pre != 'X')
//			{
//				result++;
//			}
//			else
//			{
//				result--;
//			}
//		}
//		else if (tmpC == 'V')
//		{
//			result += 5;
//		}
//		else if (tmpC == 'X')
//		{
//			if (pre != 'L'&&pre != 'C')
//			{
//				result += 10;
//			}
//			else
//			{
//				result -= 10;
//			}
//		}
//		else if (tmpC == 'L')
//		{
//			result += 50;
//		}
//		else if (tmpC == 'C')
//		{
//			if (pre != 'D'&&pre != 'M')
//			{
//				result += 100;
//			}
//			else
//			{
//				result -= 100;
//			}
//		}
//		else if (tmpC == 'D')
//		{
//			result += 500;
//		}
//		else if (tmpC == 'M')
//		{
//			result += 1000;
//		}
//		pre = tmpC;
//	}
//	return result;
//}
//
//string longestCommonPrefix(vector<string>& strs) {
//	string result;
//	if (strs.size() == 0)
//	{
//		return result;
//	}
//	result = strs.front();
//	for (auto it = strs.begin(); it != strs.end(); it++)
//	{
//		string same;
//		string tmp = *it;
//		int size = result.size() < tmp.size() ? result.size() : tmp.size();
//		for (int i = 0; i < size; i++)
//		{
//			if (result[i] == (tmp[i]))
//			{
//				same.append(1, result[i]);
//			}
//			else
//			{
//				break;
//			}
//		}
//		result = same;
//	}
//	return result;
//}
//
//vector<vector<int>> threeSum(vector<int>& nums) {
//	vector<vector<int>> result;
//	int size = nums.size() - 1;
//	if (size < 2)
//	{
//		return result;
//	}
//	sort(nums.begin(), nums.end());
//	for (int i = 0; i < size+1; i++)
//	{
//		int ni = nums[i];
//		for (int j = size; j > i; j--)
//		{
//			int nj = nums[j];
//			if (ni == nj)
//			{
//				if (ni != 0)
//				{
//					break;
//				}
//			}
//			if (ni > 0 && nj > 0)
//			{
//				return result;
//			}
//			else if (ni < 0 && nj < 0)
//			{
//				break;
//			}
//			int num = -ni - nj;
//			if (num <= 0)
//			{
//				for (int k = i + 1; k < j; k++)
//				{
//					int nk = nums[k];
//					if (nk > num)
//					{
//						break;
//					}
//					else if (nk == num)
//					{
//						result.push_back({ ni, nk, nj });
//						break;
//					}
//				}
//			}
//			else if (num > 0)
//			{
//				for (int k = j - 1; k > i; k--)
//				{
//					int nk = nums[k];
//					if (nk < num)
//					{
//						break;
//					}
//					else if (nk == num)
//					{
//						int t[3] = { ni,nk,nj };
//						vector<int> tmp(t, t + 3);
//						result.push_back(tmp);
//						break;
//					}
//				}
//			}
//			while (j - 1 > i && nj == nums.at(j - 1))
//			{
//				j--;
//			}
//		}
//		while (i < size && ni == nums.at(i + 1))
//		{
//			i++;
//		}
//	}
//	return result;
//}
//
//int threeSumClosest(vector<int>& nums, int target) {
//	int size = nums.size() - 1;
//	int min=INT_MAX;
//	int result = 0;
//	sort(nums.begin(), nums.end());
//	for (int i = 0; i < size + 1; i++)
//	{
//		int ni = nums[i];
//		for (int j = size; j > i; j--)
//		{
//			int nj = nums[j];
//			int num = target - ni - nj;
//			if (num <= 0)
//			{
//				for (int k = i + 1; k < j; k++)
//				{
//					int nk = nums[k];
//					if (nk > num)
//					{
//						if (nk - num < min)
//						{
//							min = nk - num;
//							result = nk + ni + nj;
//						}
//						break;
//					}
//					else if (nk == num)
//					{
//						return target;
//					}
//					else if (nk < num)
//					{
//						if (num - nk < min)
//						{
//							min = num - nk;
//							result = nk + ni + nj;
//						}
//					}
//				}
//			}
//			else if (num > 0)
//			{
//				for (int k = j - 1; k > i; k--)
//				{
//					int nk = nums[k];
//					if (nk < num)
//					{
//						if (num - nk < min)
//						{
//							min = num - nk;
//							result = nk + ni + nj;
//						}
//						break;
//					}
//					else if (nk == num)
//					{
//						return target;
//					}
//					else if (nk > num)
//					{
//						if (nk - num < min)
//						{
//							min = nk - num;
//							result = nk + ni + nj;
//						}
//					}
//				}
//			}
//			while (j - 1 > i && nj == nums.at(j - 1))
//			{
//				j--;
//			}
//		}
//		while (i < size && ni == nums.at(i + 1))
//		{
//			i++;
//		}
//	}
//	return result;
//}
//
//vector<string> letterCombinations(string digits) {
//	vector<string> tmp;	//存放每一位的备选字符
//	vector<string> result;	//存放结果
//	map<char, string> m = { {'2',"abc"},{'3',"def"} ,{'4',"ghi"} ,{'5',"jkl"} ,{'6',"mno"} ,{'7',"pqrs"} ,{'8',"tuv"} ,{'9',"wxyz"} };
//	for (auto it = digits.begin(); it != digits.end(); it++)
//	{
//		tmp.push_back(m[*it]);
//	}
//	for (auto it = tmp.begin(); it != tmp.end(); it++)
//	{
//		if (result.size() == 0)
//		{
//			for (auto it1 = (*it).begin(); it1 != (*it).end(); it1++)
//			{
//				string s;
//				s.append(1, *it1);
//				result.push_back(s);
//			}
//		}
//		else
//		{
//			vector<string> tmp;
//			for (auto it1 = (*it).begin(); it1 != (*it).end(); it1++)
//			{
//				for (auto it2 = result.begin(); it2 != result.end(); it2++)
//				{
//					string s = *it2;
//					tmp.push_back(s.append(1, *it1));
//				}
//			}
//			result = tmp;
//		}
//
//	}
//	return result;
//}
//
//vector<vector<int>> fourSum(vector<int>& nums, int target) {
//	vector<vector<int>> result;
//	int size = nums.size() - 1;
//	if (size < 3)
//	{
//		return result;
//	}
//	sort(nums.begin(), nums.end());
//	for (int i = 0; i < size + 1; i++)
//	{
//		int ni = nums[i];
//		for (int j = size; j > i; j--)
//		{
//			int nj = nums[j];
//			for (int k = i + 1; k < j; k++)
//			{
//				int nk = nums[k];
//				int num = target - ni - nj - nk;
//				if (num < nk)
//				{
//					break;
//				}
//				for (int l = k + 1; l < j; l++)
//				{
//					int nl = nums[l];
//					if (nl > num)
//					{
//						break;
//					}
//					else if (num == nl)
//					{
//						result.push_back({ ni, nk, nl, nj });
//						break;
//					}
//				}
//				while (k + 1 < j && nums[k] == nums[k + 1])
//				{
//					k++;
//				}
//			}
//			while (j - 1 > i && nj == nums.at(j - 1))
//			{
//				j--;
//			}
//		}
//		while (i < size && ni == nums.at(i + 1))
//		{
//			i++;
//		}
//	}
//	return result;
//}
//
//ListNode* removeNthFromEnd(ListNode* head, int n) {
//	ListNode* preNode = NULL;
//	ListNode* deleteNode = head;
//	ListNode* tmp = head;
//	while (tmp != NULL && n != 1)
//	{
//		tmp = tmp->next;
//		n--;
//	}
//	while (tmp->next != NULL)
//	{
//		preNode = deleteNode;
//		deleteNode = deleteNode->next;
//		tmp = tmp->next;
//	}
//	if (preNode == NULL)
//	{
//		ListNode* t = head;
//		head = head->next;
//		delete t;
//	}
//	else
//	{
//		preNode->next = deleteNode->next;
//		delete deleteNode;
//	}
//
//	//两次遍历
//	/*int num = 0;
//	ListNode* preNode = NULL;
//	ListNode* tmp = head;
//	while (tmp != NULL)
//	{
//		tmp = tmp->next;
//		num++;
//	}
//	if(num<n)
//	{
//		return NULL;
//	}
//	int time = num - n;
//	tmp = head;
//	while (time)
//	{
//		preNode = tmp;
//		tmp = tmp->next;
//		time--;
//	}
//	if (preNode == NULL)
//	{
//		ListNode* t = head;
//		head = head->next;
//		delete t;
//	}
//	else
//	{
//		preNode->next = tmp->next;
//		delete tmp;
//	}*/
//	return head;
//}
//
//bool isValid(string s) {
//	if (s.size() == 0)
//	{
//		return true;
//	}
//	vector<char> tmp;
//	map<char, char> m = { { '(',')' }, { '[',']' }, { '{','}' } };
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (m[s[i]])
//		{
//			tmp.push_back(s[i]);
//		}
//		else
//		{
//			if (tmp.size() == 0)
//			{
//				return false;
//			}
//			char last = tmp.back();
//			if (m[last] != s[i])
//			{
//				return false;
//			}
//			tmp.pop_back();
//		}
//	}
//	if (tmp.size() != 0)
//	{
//		return false;
//	}
//	return true;
//}
//
//ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//	if (l1 == NULL)
//	{
//		return l2;
//	}
//	else if (l2 == NULL)
//	{
//		return l1;
//	}
//	ListNode* preTmp = NULL;
//	ListNode* tmp = l1;
//	ListNode* tmp2 = l2;
//	while (tmp != NULL && tmp2 != NULL)
//	{
//		if (tmp2->val < tmp->val)
//		{
//			ListNode* ttmp2 = tmp2->next;
//			tmp2->next = tmp;
//			if (preTmp != NULL)
//			{
//				preTmp->next = tmp2;
//			}
//			tmp = tmp2;
//			tmp2 = ttmp2;
//		}
//		else
//		{
//			preTmp = tmp;
//			tmp = tmp->next;
//		}
//	}
//	if (tmp2 != NULL)
//	{
//		preTmp->next = tmp2;
//	}
//	return l1->val <= l2->val ? l1 : l2;
//}
//
//void backCheck(vector<string> &result, string track, int left, int right)
//{
//	if (left == 0 && right == 0) result.push_back(track);
//	if (right == 0)
//	{
//		backCheck(result, track + "(", left - 1, right + 1);
//	}
//	if (right > 0 && left > 0)
//	{
//		backCheck(result, track + "(", left - 1, right + 1);
//		backCheck(result, track + ")", left, right - 1);
//	}
//	if (right > 0 && left == 0)
//	{
//		backCheck(result, track + ")", left, right - 1);
//	}
//}
//
//vector<string> generateParenthesis(int n) {
//	int left = n;
//	int right = 0;
//	vector<string> result;
//	string track;
//	backCheck(result, track, left, right);
//	return result;
//}
//
//ListNode* mergeKLists(vector<ListNode*>& lists) {
//	ListNode* tmpNode = NULL;
//	for (auto it = lists.begin(); it != lists.end(); it++)
//	{
//		tmpNode = mergeTwoLists(tmpNode, *it);
//	}
//	return tmpNode;
//}
//
//ListNode* swapPairs(ListNode* head) {
//	ListNode* ppreNode = NULL;
//	ListNode* preNode = NULL;
//	ListNode* tmpNode = head;
//	if (head != NULL)
//	{
//		if (head->next != NULL)
//		{
//			head = head->next;
//		}
//		else
//		{
//			return head;
//		}
//	}
//	while (tmpNode != NULL)
//	{
//		if (preNode != NULL)
//		{
//			if (ppreNode != NULL)
//			{
//				ppreNode->next = tmpNode;
//			}
//			preNode->next = tmpNode->next;
//			tmpNode->next = preNode;
//			tmpNode = preNode->next;
//			ppreNode = preNode;
//			preNode = NULL;
//		}
//		else
//		{
//			preNode = tmpNode;
//			tmpNode = tmpNode->next;
//		}
//	}
//	return head;
//}
//
//void reverse(ListNode* head)
//{
//	ListNode* cur = head;
//	ListNode* pre = NULL;
//	while (cur!= NULL)
//	{
//		ListNode* tmp = cur->next;
//		cur->next = pre;
//		pre = cur;
//		cur = tmp;
//	}
//}
//
//ListNode* reverseKGroup(ListNode* head, int k) {
//	ListNode* result = head;
//	for (int i = 1; i < k; i++)
//	{
//		if (result->next != NULL)
//		{
//			result = result->next;
//		}
//		else
//		{
//			return head;
//		}
//	}
//	ListNode* startNode = head;
//	ListNode* preNode = NULL;
//	while (startNode != NULL)
//	{
//		ListNode* endNode = startNode;
//		for (int i = 1; i < k; i++)
//		{
//			if (endNode->next != NULL)
//			{
//				endNode = endNode->next;
//			}
//			else
//			{
//				return result;
//			}
//		}
//		ListNode* tmpNode;
//		if (endNode != NULL)
//		{
//			tmpNode = endNode->next;
//			endNode->next = NULL;
//			reverse(startNode);
//			startNode->next = tmpNode;
//			if (preNode != NULL)
//			{
//				preNode->next = endNode;
//			}
//			preNode = startNode;
//			startNode = tmpNode;
//		}
//	}
//	return result;
//}
//
//int removeDuplicates(vector<int>& nums) {
//	if (nums.size() == 0)
//	{
//		return 0;
//	}
//	vector<int>::iterator it = nums.begin();
//	int pre = nums.front();
//	it++;
//	while (it != nums.end())
//	{
//		if (*it == pre)
//		{
//			it = nums.erase(it);
//		}
//		else
//		{
//			pre = *it++;
//		}
//	}
//	return nums.size();
//}
//
//int removeElement(vector<int>& nums, int val) {
//	for (auto it = nums.begin(); it != nums.end();)
//	{
//		if (*it == val)
//		{
//			it = nums.erase(it);
//		}
//		else
//		{
//			it++;
//		}
//	}
//	return nums.size();
//}
//
//int strStr(string haystack, string needle) {
//	if (needle.size() == 0)
//	{
//		return 0;
//	}
//	char first = needle[0];
//	int size = haystack.size();
//	int needleSize = needle.size();
//	for (int i = 0; i < size; i++)
//	{
//		if (haystack[i] == first)
//		{
//			int j = 1;
//			for (; j < needleSize; j++)
//			{
//				if (i + j < size)
//				{
//					if (haystack[i + j] != needle[j])
//					{
//						break;
//					}
//				}
//				else
//				{
//					return -1;
//				}
//			}
//			if (j == needleSize)
//			{
//				return i;
//			}
//		}
//	}
//	return -1;
//}
//
//int divide(int dividend, int divisor) {
//	if (dividend == INT_MIN && divisor == -1)
//	{
//		return INT_MAX;
//	}
//	// 符号同化,正数转为负数
//	int flag1 = -1;
//	int flag2 = -1;
//	if (dividend >= 0)
//	{
//		flag1 = 1;
//		dividend = 0 - dividend;
//	}
//	if (divisor >= 0)
//	{
//		flag2 = 1;
//		divisor = 0 - divisor;
//	}
//	// 结果符号
//	int flag = 1;
//	if (flag1 != flag2) flag = -1;
//	// 特殊值处理 -2 / -4 
//	if (dividend > divisor) return 0;
//
//	int num = 0;
//	int count = 0;
//	while (dividend < 0)
//	{
//		int divisor_pow_current = divisor;
//		int divisor_pow_last = 0;
//		int result = -1;
//		while (true)
//		{
//			divisor_pow_last = divisor_pow_current;
//			// 越界处理 防止 divisor_pow_current += divisor_pow_current 越界
//			if (INT_MIN - divisor_pow_current > divisor_pow_current) break;
//			divisor_pow_current += divisor_pow_current;
//			if (divisor_pow_current < dividend) break;
//			result += result;
//		}
//		dividend -= divisor_pow_last;
//		num += result;
//	}
//	if (dividend != 0) num++;
//
//	if (flag < 0) return num;
//	else return 0 - num;
//}
//
//vector<int> findSubstring(string s, vector<string>& words) {
//	if (s.empty()||words.empty())
//	{
//		return {};
//	}
//	vector<int> result;
//	map<string, int> m_map;
//	int one_word_size = words[0].size();
//	int word_number = words.size();
//	for (auto it = words.begin(); it != words.end(); it++)
//	{
//		auto it1 = m_map.find(*it);
//		if (it1 != m_map.end())
//		{
//			(*it1).second++;
//		}
//		else
//		{
//			m_map.insert({ *it,1 });
//		}
//	}
//	int size = s.size();
//	int right_border = size - one_word_size * word_number;
//	for (int i = 0; i <= right_border; i++)
//	{
//		map<string, int> tmpMap = m_map;
//		int match_num = 0;
//		int right = i;
//		string tmp = s.substr(right, one_word_size);
//		while (tmpMap[tmp] > 0)
//		{
//			tmpMap[tmp]--;
//			right += one_word_size;
//			tmp = s.substr(right, one_word_size);
//			match_num++;
//		}
//		if (match_num == word_number)
//		{
//			result.push_back(i);
//		}
//	}
//	return result;
//}
//
//void nextPermutation(vector<int>& nums) {
//	if (nums.size() == 0 || nums.size() == 1)
//	{
//		return;
//	}
//	int size = nums.size();
//	int pre = nums.back();
//	int preIndex = size - 1;
//	//int nextBiggerMin = nums[0];
//	//int nextBiggerMinIndex = 0;
//	int i = size - 1;
//	for (; i >= 0; i--)
//	{
//		if (nums[i] < pre)
//		{
//			break;
//		}
//		pre = nums[i];
//	}
//	if (i < 0)
//	{
//		reverse(nums.begin(), nums.end());
//		return;
//	}
//	int j = i + 1;
//	int nextBiggerMin = nums[j];
//	for (; j < size; j++)
//	{
//		if (nums[j] <= nums[i])
//		{
//			j--;
//			nextBiggerMin = nums[j];
//			break;
//		}
//	}
//	if (j == size)
//	{
//		j--;
//		nextBiggerMin = nums[j];
//	}
//	nums[j] = nums[i];
//	nums[i] = nextBiggerMin;
//	j = size - 1;
//	i++;
//	while (i < j)
//	{
//		int tmp = nums[i];
//		nums[i] = nums[j];
//		nums[j] = tmp;
//		i++;
//		j--;
//	}
//}
//
//int longestValidParentheses(string s) {
//	int size = s.size();
//	if (size == 0 || size == 1)
//	{
//		return 0;
//	}
//	int maxSize = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (s[i] == ')')
//		{
//			continue;
//		}
//		int leftNum = 1;
//		int tmpSize = 0;
//		for (int j = i + 1; j < size; j++)
//		{
//			if (leftNum == 0)
//			{
//				if (s[j] == ')')
//				{
//					break;
//				}
//				leftNum++;
//			}
//			else
//			{
//				if (s[j] == '(')
//				{
//					leftNum++;
//				}
//				else
//				{
//					leftNum--;
//				}
//			}
//			if (leftNum == 0)
//			{
//				tmpSize = j - i + 1;
//			}
//		}
//		if (tmpSize > maxSize)
//		{
//			maxSize = tmpSize;
//		}
//	}
//	return maxSize;
//}
//
//int search(vector<int>& nums, int target) {
//	int size = nums.size();
//	if(size==0)
//	{
//		return -1;
//	}
//	int start = 0;
//	int end = size - 1;
//	while (start <= end)
//	{
//		int mid = (start + end) / 2;
//		if (target == nums[mid])
//		{
//			return mid;
//		}
//		//前半部有序
//		if (nums[start] <= nums[mid])
//		{
//			//位于前半部
//			if (target < nums[mid] && target >= nums[start])
//			{
//				end = mid - 1;
//			}
//			//位于后半部
//			else
//			{
//				start = mid + 1;
//			}
//		}
//		else
//		{
//			//位于后半部
//			if (target > nums[mid] && target <= nums[end])
//			{
//				start = mid + 1;
//			}
//			//位于前半部
//			else
//			{
//				end = mid - 1;
//			}
//		}
//	}
//	return -1;
//}
//
//vector<int> searchRange(vector<int>& nums, int target) {
//	int size = nums.size();
//	if (size == 0)
//	{
//		return { -1,-1 };
//	}
//	int start = 0;
//	int end = size - 1;
//	while (start <= end)
//	{
//		int mid = (end + start) / 2;
//		if (nums[mid] == target)
//		{
//			int left = mid - 1;
//			int right = mid + 1;
//			while (left >= 0 && nums[left] == target)
//			{
//				left--;
//			}
//			while (right < size && nums[right] == target)
//			{
//				right++;
//			}
//			return { left + 1,right - 1 };
//		}
//		else if (nums[mid] < target)
//		{
//			start = mid + 1;
//		}
//		else
//		{
//			end = mid - 1;
//		}
//	}
//	return { -1,-1 };
//}
//
//int searchInsert(vector<int>& nums, int target) {
//	int size = nums.size();
//	if (size == 0)
//	{
//		nums.push_back(target);
//		return 0;
//	}
//	int start = 0;
//	int end = size - 1;
//	while (start <= end)
//	{
//		int mid = (end + start) / 2;
//		if (nums[mid] == target)
//		{
//			return mid;
//		}
//		else if (nums[mid] < target)
//		{
//			start = mid + 1;
//		}
//		else
//		{
//			end = mid - 1;
//		}
//	}
//	auto it = nums.begin() + start;
//	nums.insert(it, target);
//	return start;
//}
//
//bool isValidSudoku(vector<vector<char>>& board) {
//	vector<vector<char>> col;
//	vector<vector<char>> block;
//	vector<vector<char>> line;
//	col.resize(9);
//	block.resize(9);
//	line.resize(9);
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			char tmp = board[i][j];
//			if (tmp == '.')
//			{
//				continue;
//			}
//			int blockNum = i / 3 + j / 3 * 3;
//			auto it = find(block[blockNum].begin(), block[blockNum].end(), tmp);
//			if (it != block[blockNum].end())
//			{
//				return false;
//			}
//			block[blockNum].push_back(tmp);
//			auto it2 = find(col[j].begin(), col[j].end(), tmp);
//			if (it2 != col[j].end())
//			{
//				return false;
//			}
//			col[j].push_back(tmp);
//			auto it3 = find(line[i].begin(), line[i].end(), tmp);
//			if (it3 != line[i].end())
//			{
//				return false;
//			}
//			line[i].push_back(tmp);
//		}
//	}
//	return true;
//}
//
//bool line[10][10], col[10][10], block[10][10];	//存储各行、列、块已用的数字
//bool diguiSolveSudoku(vector<vector<char>>& board, int i, int j)
//{
//	bool ifFound = false;
//	bool ifCan = false;
//	int m, l;
//	l = i;
//	for (int k = 1; k < 10; k++)
//	{
//		if (line[i][k] == 1)
//		{
//			continue;
//		}
//		if (col[j][k] == 1)
//		{
//			continue;
//		}
//		if (block[i / 3 + j / 3 * 3][k] == 1)
//		{
//			continue;
//		}
//		line[i][k] = 1;
//		col[j][k] = 1;
//		block[i / 3 + j / 3 * 3][k] = 1;
//		board[i][j] = '0' + k;
//		for (m = j + 1; m < 9; m++)
//		{
//			if (board[i][m] == '.')
//			{
//				ifFound = true;
//				break;
//			}
//		}
//		if (m == 9)
//		{
//			for (l = i + 1; l < 9; l++)
//			{
//				for (m = 0; m < 9; m++)
//				{
//					if (board[l][m] == '.')
//					{
//						ifFound = true;
//						break;
//					}
//				}
//				if (ifFound)
//				{
//					break;
//				}
//			}
//		}
//		if (ifFound)
//		{
//			ifCan = diguiSolveSudoku(board, l, m);
//		}
//		else
//		{
//			return true;
//		}
//		if (!ifCan)
//		{
//			line[i][k] = 0;
//			col[j][k] = 0;
//			block[i / 3 + j / 3 * 3][k] = 0;
//			board[i][j] = '.';
//			continue;
//		}
//		else
//		{
//			return true;
//		}
//	}
//	return false;
//}
//void solveSudoku(vector<vector<char>>& board) {
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			if (board[i][j] != '.')
//			{
//				int num = board[i][j] - '0';
//				line[i][num] = 1;
//				col[j][num] = 1;
//				block[i / 3 + j / 3 * 3][num] = 1;
//			}
//		}
//	}
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			if (board[i][j] == '.')
//			{
//				diguiSolveSudoku(board, i, j);
//				return;
//			}
//		}
//	}
//}
//
//string countAndSay(int n) {
//	if (n == 1)
//	{
//		return "1";
//	}
//	string tmp = countAndSay(n - 1);
//	string result;
//	char pre = tmp.front();
//	int count = 1;
//	for (auto it = tmp.begin() + 1; it != tmp.end(); it++)
//	{
//		if (*it == pre)
//		{
//			count++;
//		}
//		else
//		{
//			char num = count + '0';
//			result.append(1, num);
//			result.append(1, pre);
//			pre = *it;
//			count = 1;
//		}
//	}
//	char num = count + '0';
//	result.append(1, num);
//	result.append(1, pre);
//	return result;
//}
//
//void diguiCombinationSum(vector<int>& candidates, int size, int target, vector<int> tmpResult) {
//	int max = tmpResult.back();
//	for (int i = 0; i < size; i++)
//	{
//		if (candidates[i] >= max)
//		{
//			if (candidates[i] == target)
//			{
//				tmpResult.push_back(target);
//				result.push_back(tmpResult);
//				return;
//			}
//			else if (candidates[i] < target)
//			{
//				tmpResult.push_back(candidates[i]);
//				diguiCombinationSum(candidates, size, target - candidates[i], tmpResult);
//				tmpResult.pop_back();
//			}
//			else
//			{
//				return;
//			}
//		}
//		else
//		{
//			continue;
//		}
//	}
//}
//vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//	sort(candidates.begin(), candidates.end());
//	int size = candidates.size();
//	for (int i = 0; i < size; i++)
//	{
//		vector<int> tmpResult;
//		if (candidates[i] < target)
//		{
//			tmpResult.push_back(candidates[i]);
//			diguiCombinationSum(candidates, size, target - candidates[i], tmpResult);
//		}
//		else if (candidates[i] == target)
//		{
//			tmpResult.push_back(candidates[i]);
//			result.push_back(tmpResult);
//		}
//		else
//		{
//			break;
//		}
//	}
//	return result;
//}
//
//void diguiCombinationSum2(vector<int> candidates,int lastI, int target, vector<int> tmpResult) {
//	tmpResult.push_back(candidates[lastI]);
//	int size = candidates.size();
//	int pre = -1;
//	for (int i = lastI+1; i < size; i++)
//	{
//		if (candidates[i] != pre)
//		{
//			pre = candidates[i];
//			if (candidates[i] < target)
//			{
//				diguiCombinationSum2(candidates, i, target - candidates[i], tmpResult);
//			}
//			else if (candidates[i] == target)
//			{
//				tmpResult.push_back(target);
//				result.push_back(tmpResult);
//				return;
//			}
//			else
//			{
//				return;
//			}
//		}
//	}
//}
//vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//	sort(candidates.begin(), candidates.end());
//	int size = candidates.size();
//	int pre = -1;
//	for (int i = 0; i < size; i++)
//	{
//		if (candidates[i] != pre)
//		{
//			pre = candidates[i];
//			vector<int> tmpResult;
//			if (candidates[i] < target)
//			{
//				diguiCombinationSum2(candidates, i, target - candidates[i], tmpResult);
//			}
//			else if (candidates[i] == target)
//			{
//				tmpResult.push_back(candidates[i]);
//				result.push_back(tmpResult);
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	return result;
//}
//
//int firstMissingPositive(vector<int>& nums) {
//	int size = nums.size();
//	for (int i = 0; i < size; i++)
//	{
//		int tmp = nums[i];
//		if (tmp <= size && tmp > 0)
//		{
//			if (tmp - 1 != i && nums[tmp - 1] != tmp)
//			{
//				nums[i] = nums[tmp - 1];
//				nums[tmp - 1] = tmp;
//				i--;
//			}
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		if (i + 1 != nums[i])
//		{
//			return i + 1;
//		}
//	}
//	return size + 1;
//}
//
//int trap(vector<int>& height) {
//	int size = height.size();
//	if (size == 0 || size == 1 || size == 2)
//	{
//		return 0;
//	}
//	int result = 0;
//	for (int i = 1; i < size; i++)
//	{
//		int left = i - 1;
//		int preLeft = height[i];
//		int right = i + 1;
//		int preRight = height[i];
//		while (left >= 0)
//		{
//			if (height[left] > preLeft)
//			{
//				preLeft = height[left];
//			}
//			left--;
//		}
//		while (right < size)
//		{
//			if (height[right] > preRight)
//			{
//				preRight = height[right];
//			}
//			right++;
//		}
//		result += preLeft <= preRight ? preLeft : preRight;
//		result -= height[i];
//	}
//	return result;
//}
//
//string multiply(string num1, string num2) {
//	int n1 = num1.size();
//	int n2 = num2.size();
//	string res(n1 + n2, '0');
//	for (int i = n2 - 1; i >= 0; i--) 
//	{
//		//int add = 0;
//		for (int j = n1 - 1; j >= 0; j--)
//		{
//			int temp = (res[i + j + 1] - '0') + (num1[j] - '0')*(num2[i] - '0');
//			res[i + j + 1] = temp % 10 + '0';//当前位
//			res[i + j] += temp / 10;
//		}
//	}
//
//	//去除首位'0'
//	for (int i = 0; i < n1 + n2; i++)
//	{
//		if (res[i] != '0')
//		{
//			return res.substr(i);
//		}
//	}
//	return "0";
//}
//
//bool isMatch2(string s, string p) {
//	int j = 0;
//	for (int i = 0, lastStar = -1, lastMatch = 0; i < s.size();)
//	{
//		if (s[i] == p[j] || p[j] == '?')
//		{
//			i++;
//			j++;
//		}
//		else if (p[j] == '*')
//		{
//			lastStar = j++;
//			lastMatch = i;
//		}
//		else if (lastStar != -1)
//		{
//			i = lastMatch++;
//			j = lastStar + 1;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	while (j < p.length() && p[j] == '*') ++j;
//
//	return j == p.length();
//}
//
//int jump(vector<int>& nums) {
//	int ans = 0;
//	int begin = 0;
//	int end = 1;
//	while (end < nums.size())
//	{
//		int temp = 0;
//		for (int i = begin; i < end; i++)
//		{
//			temp = max(temp, i + nums[i]);
//		}
//		begin = end;
//		end = temp + 1;
//		ans++;
//	}
//	return ans;
//}
//
//void diguiPermute(vector<int> nums, int remove, vector<int> oneResult)
//{
//	auto iter = find(nums.begin(), nums.end(), remove);
//	nums.erase(iter);
//	oneResult.push_back(remove);
//	if (nums.size() == 0)
//	{
//		result.push_back(oneResult);
//		return;
//	}
//	for (auto it = nums.begin(); it != nums.end(); it++)
//	{
//		diguiPermute(nums, *it, oneResult);
//	}
//}
//vector<vector<int>> permute(vector<int>& nums) {
//	vector<int> oneResult;
//	for (auto it = nums.begin(); it != nums.end(); it++)
//	{
//		diguiPermute(nums, *it, oneResult);
//	}
//	return result;
//}
//
//void diguiPermuteUnique(vector<int> nums, int remove, vector<int> oneResult)
//{
//	auto iter = find(nums.begin(), nums.end(), remove);
//	nums.erase(iter);
//	oneResult.push_back(remove);
//	int size = nums.size();
//	if (size == 0)
//	{
//		result.push_back(oneResult);
//		return;
//	}
//	for (int i = 0; i < size;)
//	{
//		int tmp = nums[i];
//		diguiPermuteUnique(nums, tmp, oneResult);
//		i++;
//		while (i < nums.size() && tmp == nums[i])
//		{
//			i++;
//		}
//	}
//}
//vector<vector<int>> permuteUnique(vector<int>& nums) {
//	sort(nums.begin(), nums.end());
//	vector<int> oneResult;
//	for (int i = 0; i < nums.size();)
//	{
//		int tmp = nums[i];
//		diguiPermuteUnique(nums, tmp, oneResult);
//		i++;
//		while (i < nums.size() && tmp == nums[i])
//		{
//			i++;
//		}
//	}
//	return result;
//}
//
//void rotate(vector<vector<int>>& matrix) {
//	int size = matrix.size();
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//			int tmp = matrix[i][j];
//			matrix[i][j] = matrix[j][i];
//			matrix[j][i] = tmp;
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size/2; j++)
//		{
//			int tmp = matrix[i][j];
//			matrix[i][j] = matrix[i][size - j - 1];
//			matrix[i][size - j - 1] = tmp;
//		}
//	}
//}
//
//vector<vector<string>> groupAnagrams(vector<string>& strs) {
//	vector<vector<string>> result;
//	vector<map<char,int>> mapChar;
//	for (int i = 0; i < strs.size(); i++)
//	{
//		string str = strs[i];
//		map<char, int> tmpMap;
//		for (int j = 0; j < str.size(); j++)
//		{
//			auto it = tmpMap.find(str[j]);
//			if (it == tmpMap.end())
//			{
//				tmpMap.insert({ str[j],1 });
//			}
//			else
//			{
//				(*it).second++;
//			}
//		}
//		if (result.size() == 0)
//		{
//			vector<string> tmp;
//			mapChar.push_back(tmpMap);
//			tmp.push_back(str);
//			result.push_back(tmp);
//		}
//		else
//		{
//			int j = 0;
//			for (; j < result.size(); j++)
//			{
//				if (result[j][0].size() == str.size())
//				{
//					bool b = true;
//					for (auto it = tmpMap.begin(); it != tmpMap.end(); it++)
//					{
//						if (mapChar[j][(*it).first] != (*it).second)
//						{
//							b = false;
//							break;
//						}
//					}
//					if (b)
//					{
//						result[j].push_back(str);
//						break;
//					}
//				}
//			}
//			if (j == result.size())
//			{
//				vector<string> tmp;
//				mapChar.push_back(tmpMap);
//				tmp.push_back(str);
//				result.push_back(tmp);
//			}
//		}
//	}
//	return result;
//}
//
//double qpow(double a, long long b) {
//	double res = 1;
//	while (b) {
//		if (b & 1) res = res * a;
//		b >>= 1;
//		a *= a;
//	}
//	return res;
//}
//
//double myPow(double x, long long n) {
//	if (n == 0) return 1;
//	if (n > 0) return qpow(x, n);
//	if (n < 0) return 1 / qpow(x, -n);
//	return 1.0;
//}
//
//void huisuSolveNQueues(vector<vector<bool>> v, vector<string> oneResult, int line, int col, int n)
//{
//	if (v[line][col])
//	{
//		return;
//	}
//	string tmp(n, '.');
//	tmp[col] = 'Q';
//	oneResult.push_back(tmp);
//	if (line == n - 1)
//	{
//		result1.push_back(oneResult);
//		return;
//	}
//	//能被该点攻击的点
//	for (int i = 0; i < n; i++)
//	{
//		v[i][col] = true;
//		if (line - i >= 0 && col - i >= 0)
//		{
//			v[line - i][col - i] = true;
//		}
//		if (line - i >= 0 && col + i < n)
//		{
//			v[line - i][col + i] = true;
//		}
//		if (line + i < n&&col - i >= 0)
//		{
//			v[line + i][col - i] = true;
//		}
//		if (line + i < n&&col + i < n)
//		{
//			v[line + i][col + i] = true;
//		}
//	}
//	for (int j = 0; j < n; j++)
//	{
//		huisuSolveNQueues(v, oneResult, line + 1, j, n);
//	}
//}
//vector<vector<string>> solveNQueens(int n) {
//	vector<vector<bool>> v(n, vector<bool>(n));
//	vector<string> oneResult;
//
//	for (int j = 0; j < n; j++)
//	{
//		huisuSolveNQueues(v, oneResult, 0, j, n);
//	}
//	return result1;
//}
//
//void huisuTotalNQueens(vector<vector<bool>> v, int& result, int line, int col, int n)
//{
//	if (v[line][col])
//	{
//		return;
//	}
//	if (line == n - 1)
//	{
//		result++;
//		return;
//	}
//	//能被该点攻击的点
//	for (int i = 0; i < n; i++)
//	{
//		v[i][col] = true;
//		if (line - i >= 0 && col - i >= 0)
//		{
//			v[line - i][col - i] = true;
//		}
//		if (line - i >= 0 && col + i < n)
//		{
//			v[line - i][col + i] = true;
//		}
//		if (line + i < n&&col - i >= 0)
//		{
//			v[line + i][col - i] = true;
//		}
//		if (line + i < n&&col + i < n)
//		{
//			v[line + i][col + i] = true;
//		}
//	}
//	for (int j = 0; j < n; j++)
//	{
//		huisuTotalNQueens(v, result, line + 1, j, n);
//	}
//}
//int totalNQueens(int n) {
//	vector<vector<bool>> v(n, vector<bool>(n));
//	int result = 0;
//
//	for (int j = 0; j < n; j++)
//	{
//		huisuTotalNQueens(v, result, 0, j, n);
//	}
//	return result;
//}
//
//int maxSubArray(vector<int>& nums) {
//	int size = nums.size();
//	if (size == 0)
//	{
//		return 0;
//	}
//	int j = 0;
//	int result = nums[0];
//	int tmp = 0;
//	while (j < size)
//	{
//		tmp += nums[j];
//		if (tmp > result)
//		{
//			result = tmp;
//		}
//		if (tmp < 0)
//		{
//			tmp = 0;
//		}
//		j++;
//	}
//	return result;
//}
//
//vector<int> spiralOrder(vector<vector<int>>& matrix) {
//	vector<int> result;
//	int lineSize = matrix.size();
//	if (lineSize == 0)
//	{
//		return result;
//	}
//	int colSize = matrix[0].size();
//	int lineTop = 0;
//	int lineBot = lineSize - 1;
//	int colFront = 0;
//	int colBack = colSize - 1;
//	int colAdd = 1;
//	int lineAdd = 0;
//	int curLine = 0;
//	int curCol = 0;
//	while (true)
//	{
//		result.push_back(matrix[curLine][curCol]);
//		if (colAdd == 1 && lineAdd == 0)
//		{
//			if (curCol == colBack)
//			{
//				if (lineTop == lineBot)
//				{
//					break;
//				}
//				lineAdd = 1;
//				colAdd = 0;
//				lineTop++;
//			}
//		}
//		else if (colAdd == 0 && lineAdd == 1)
//		{
//			if (curLine == lineBot)
//			{
//				if (colFront == colBack)
//				{
//					break;
//				}
//				lineAdd = 0;
//				colAdd = -1;
//				colBack--;
//			}
//		}
//		else if (colAdd == -1 && lineAdd == 0)
//		{
//			if (curCol == colFront)
//			{
//				if (lineTop == lineBot)
//				{
//					break;
//				}
//				lineAdd = -1;
//				colAdd = 0;
//				lineBot--;
//			}
//		}
//		else if (colAdd == 0 && lineAdd == -1)
//		{
//			if (curLine == lineTop)
//			{
//				if (colFront == colBack)
//				{
//					break;
//				}
//				lineAdd = 0;
//				colAdd = 1;
//				colFront++;
//			}
//		}
//		curLine += lineAdd;
//		curCol += colAdd;
//	}
//	return result;
//}
//
//bool diguiCanJump(vector<int> &nums, int cur, int& size)
//{
//	int step = nums[cur];
//	if (step >= size - cur)
//	{
//		return true;
//	}
//	for (int i = step; i > 0; i--)
//	{
//		if (diguiCanJump(nums, cur + i, size))
//		{
//			return true;
//		}
//	}
//	return false;
//}
//bool canJump(vector<int>& nums) {
//	int size = nums.size();
//	if (size == 0 || size == 1)
//	{
//		return true;
//	}
//	return diguiCanJump(nums, 0, size);
//}
//
//vector<vector<int>> merge(vector<vector<int>>& intervals) {
//	vector<vector<int>> result;
//	int size = intervals.size();
//	if (size == 0)
//	{
//		return result;
//	}
//	sort(intervals.begin(), intervals.end(), [=](vector<int> v1,vector<int> v2) {
//		return v1[0] < v2[0];
//	});
//	result.push_back(intervals[0]);
//	for (int i = 0; i < size; i++)
//	{
//		int rSize = result.size();
//		for (int j = 0; j < rSize; j++)
//		{
//			if (intervals[i][0] <= result[j][1])
//			{
//				if (intervals[i][1] > result[j][1])
//				{
//					result[j][1] = intervals[i][1];
//				}
//				break;
//			}
//			else if (intervals[i][0] > result[j][1])
//			{
//				if (j + 1 == rSize)
//				{
//					result.push_back(intervals[i]);
//					break;
//				}
//				continue;
//			}
//		}
//	}
//	return result;
//}
//
//vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
//	vector<vector<int>> result;
//	if (newInterval.size() == 0)
//	{
//		return intervals;
//	}
//	if (intervals.size() == 0)
//	{
//		result.push_back(newInterval);
//		return result;
//	}
//	int size = intervals.size();
//	int b = true;
//	for (int i = 0; i < size; i++)
//	{
//		if (b&&intervals[i][0] > newInterval[0])
//		{
//			b = false;
//			if (i != 0)
//			{
//				if (intervals[i - 1][1] >= newInterval[0])
//				{
//					result.pop_back();
//					newInterval[0] = intervals[i - 1][0];
//					if (intervals[i - 1][1] > newInterval[1])
//					{
//						newInterval[1] = intervals[i - 1][1];
//					}
//				}
//			}
//			int j = i;
//			for (; j < size; j++)
//			{
//				if (newInterval[1] <= intervals[j][1])
//				{
//					if (newInterval[1] >= intervals[j][0])
//					{
//						newInterval[1] = intervals[j][1];
//						result.push_back(newInterval);
//						i = j;
//						break;
//					}
//					else
//					{
//						result.push_back(newInterval);
//						i = j - 1;
//						break;
//					}
//				}
//			}
//			if (j == size)
//			{
//				result.push_back(newInterval);
//				break;
//			}
//		}
//		else
//		{
//			result.push_back(intervals[i]);
//		}
//	}
//	if (b)
//	{
//		if (intervals.back()[1] < newInterval[1])
//		{
//			if (intervals.back()[1] >= newInterval[0])
//			{
//				result.pop_back();
//				newInterval[0] = intervals.back()[0];
//			}
//			result.push_back(newInterval);
//		}
//	}
//	return result;
//}
//
//int lengthOfLastWord(string s) {
//	int size = s.size();
//	if (size == 0)
//	{
//		return 0;
//	}
//	int result = 0;
//	bool clear = false;
//	for (int i = 0; i < size; i++)
//	{
//		if (s[i] == ' ')
//		{
//			clear = true;
//		}
//		else
//		{
//			if (clear)
//			{
//				clear = false;
//				result = 0;
//			}
//			result++;
//		}
//	}
//	return result;
//}
//
//vector<vector<int>> generateMatrix(int n) {
//	vector<vector<int>> result(n, vector<int>(n));
//	if (n == 0)
//	{
//		return result;
//	}
//	int lineTop = 0;
//	int lineBot = n - 1;
//	int colFront = 0;
//	int colBack = n - 1;
//	int colAdd = 1;
//	int lineAdd = 0;
//	int curLine = 0;
//	int curCol = 0;
//	int num = 1;
//	while (true)
//	{
//		result[curLine][curCol] = num++;
//		if (colAdd == 1 && lineAdd == 0)
//		{
//			if (curCol == colBack)
//			{
//				if (lineTop == lineBot)
//				{
//					break;
//				}
//				lineAdd = 1;
//				colAdd = 0;
//				lineTop++;
//			}
//		}
//		else if (colAdd == 0 && lineAdd == 1)
//		{
//			if (curLine == lineBot)
//			{
//				if (colFront == colBack)
//				{
//					break;
//				}
//				lineAdd = 0;
//				colAdd = -1;
//				colBack--;
//			}
//		}
//		else if (colAdd == -1 && lineAdd == 0)
//		{
//			if (curCol == colFront)
//			{
//				if (lineTop == lineBot)
//				{
//					break;
//				}
//				lineAdd = -1;
//				colAdd = 0;
//				lineBot--;
//			}
//		}
//		else if (colAdd == 0 && lineAdd == -1)
//		{
//			if (curLine == lineTop)
//			{
//				if (colFront == colBack)
//				{
//					break;
//				}
//				lineAdd = 0;
//				colAdd = 1;
//				colFront++;
//			}
//		}
//		curLine += lineAdd;
//		curCol += colAdd;
//	}
//	return result;
//}
//
//string getPermutation(int n, int k) {
//	vector<int> nums;
//	for (int i = 1; i <= n; i++)
//	{
//		nums.push_back(i);
//	}
//	int nn = 1;
//	for (int i = 2; i < n; i++)
//	{
//		nn *= i;
//	}
//	string result;
//	k--;
//	while (n > 1)
//	{
//		n--;
//		int idex = k / nn;
//		result.append(1, nums[idex] + '0');
//		nums.erase(nums.begin() + idex);
//		k = k % nn;
//		nn /= n;
//	}
//	result.append(1, nums[0] + '0');
//	return result;
//}
//
//ListNode* rotateRight(ListNode* head, int k) {
//	if (head == NULL || head->next == NULL)
//	{
//		return head;
//	}
//	ListNode* lastNode = head;
//	ListNode* firstNode = head;
//	int num = 1;
//	while (lastNode->next != NULL)
//	{
//		num++;
//		lastNode = lastNode->next;
//	}
//	lastNode->next = firstNode;
//	k = k % num;
//	k = num - k;
//	while (k != 0)
//	{
//		lastNode = lastNode->next;
//		k--;
//	}
//	firstNode = lastNode->next;
//	lastNode->next = NULL;
//	return firstNode;
//}
//
//int uniquePaths(int m, int n) {
//	int result = 0;
//	if (m == 1 || n == 1)
//	{
//		return 1;
//	}
//	if (m > 1)
//	{
//		result += uniquePaths(m - 1, n);
//	}
//	if (n > 1)
//	{
//		result += uniquePaths(m, n - 1);
//	}
//	return result;
//}
//
//int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//	if (obstacleGrid.size() == 0)
//	{
//		return 0;
//	}
//	int xSize = obstacleGrid[0].size();
//	int ySize = obstacleGrid.size();
//	vector<vector<long long>> dp(ySize, vector<long long>(xSize, 0));
//	for (int i = 0; i < xSize; i++)
//	{
//		if (obstacleGrid[0][i] != 1)
//		{
//			dp[0][i] = 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	for (int i = 0; i < ySize; i++)
//	{
//		if (obstacleGrid[i][0] != 1)
//		{
//			dp[i][0] = 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	for (int i = 1; i < ySize; i++)
//	{
//		for (int j = 1; j < xSize; j++)
//		{
//			if (obstacleGrid[i][j] != 1)
//			{
//				dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
//			}
//		}
//	}
//	return dp[ySize - 1][xSize - 1];
//}
//
//int minPathSum(vector<vector<int>>& grid) {
//	int xSize = grid.size();
//	if (xSize == 0)
//	{
//		return 0;
//	}
//	int ySize = grid[0].size();
//	vector<vector<long long>> dis(xSize, vector<long long>(ySize, 0));
//	dis[0][0] = grid[0][0];
//	for (int i = 1; i < ySize; i++)
//	{
//		dis[0][i] = dis[0][i - 1] + grid[0][i];
//	}
//	for (int i = 1; i < xSize; i++)
//	{
//		dis[i][0] = dis[i - 1][0] + grid[i][0];
//	}
//	for (int i = 1; i < xSize; i++)
//	{
//		for (int j = 1; j < ySize; j++)
//		{
//			dis[i][j] = grid[i][j] + min(dis[i - 1][j], dis[i][j - 1]);
//		}
//	}
//	return dis[xSize - 1][ySize - 1];
//}
//
//bool isNumber(string s) {
//	int size = s.size();
//	if (size == 0)
//	{
//		return false;
//	}
//	bool num = false;
//	bool point = false;
//	bool e = false;
//	bool backSpace = false;
//	int i = 0;
//	for (; i < size; i++)
//	{
//		if (s[i] != ' ')
//		{
//			break;
//		}
//	}
//	for (; i < size; i++)
//	{
//		if (!backSpace)
//		{
//			if (s[i] == '0')
//			{
//				if (!num)
//				{
//					num = true;
//					if (i + 1 == size)
//					{
//						return true;
//					}
//					if (s[i + 1] == '.')
//					{
//						continue;
//					}
//				}
//			}
//			else if ('1' <= s[i] && s[i] <= '9')
//			{
//				if (!num)
//				{
//					num = true;
//				}
//				continue;
//			}
//			else if (s[i] == '.')
//			{
//				if (e || point)
//				{
//					return false;
//				}
//				point = true;
//			}
//			else if (s[i] == 'e')
//			{
//				if (e||!num)
//				{
//					return false;
//				}
//				num = false;
//				e = true;
//			}
//			else if (s[i] == '-' || s[i] == '+')
//			{
//				if (i != 0 && (s[i - 1] != 'e' && s[i - 1] != ' '))
//				{
//					return false;
//				}
//			}
//			else if (s[i] == ' ')
//			{
//				backSpace = true;
//			}
//			else
//			{
//				return false;
//			}
//		}
//		else
//		{
//			if (s[i] != ' ')
//			{
//				return false;
//			}
//		}
//	}
//	return num;
//}
//
//vector<int> plusOne(vector<int>& digits) {
//	for (int i = digits.size() - 1; i >= 0; i--)
//	{
//		int k = digits[i] + 1;
//		digits[i] = k % 10;
//		if (k / 10 == 0)
//		{
//			return digits;
//		}
//	}
//	digits[0] = 1;
//	digits.push_back(0);
//	return digits;
//}
//
//string addBinary(string a, string b) {
//	if (a.size() < b.size())
//	{
//		return addBinary(b, a);
//	}
//	int aIndex = a.size() - 1;
//	int num0 = aIndex - b.size() + 1;
//	for (int i = 0; i < num0; i++)
//	{
//		b = "0" + b;
//	}
//	int add = 0;
//	while (aIndex >= 0)
//	{
//		int num = a[aIndex] - '0' + b[aIndex] - '0' + add;
//		a[aIndex] = num % 2 + '0';
//		add = num / 2;
//		aIndex--;
//	}
//	if (add)
//	{
//		a = "1" + a;
//	}
//	return a;
//}
//
//vector<string> fullJustify(vector<string>& words, int maxWidth) {
//	vector<string> result;
//	int size = words.size();
//	vector<string> tmp;
//	int length = 0;
//	for (int i = 0; i < size; i++)
//	{
//		length += words[i].size() + 1;
//		if (length - 1 > maxWidth)
//		{
//			int size = tmp.size();
//			int spaceNum = maxWidth - (length - words[i].size() - 2);
//			string line;
//			if (size > 1)
//			{
//				int eachNum = spaceNum / (size - 1) + 1;
//				int restNum = spaceNum % (size - 1);
//				for (int j = 0; j < size; j++)
//				{
//					if (j < size - 1)
//					{
//						line = line + tmp[j];
//						line.append(eachNum, ' ');
//						if (restNum)
//						{
//							line = line + " ";
//							restNum--;
//						}
//					}
//					else
//					{
//						line = line + tmp[j];
//					}
//				}
//			}
//			else
//			{
//				line = line + tmp[0];
//				line.append(spaceNum, ' ');
//			}
//			result.push_back(line);
//			i--;
//			length = 0;
//			tmp.clear();
//		}
//		else
//		{
//			tmp.push_back(words[i]);
//		}
//	}
//	if (tmp.size() > 0)
//	{
//		string line;
//		for (int i = 0; i < tmp.size(); i++)
//		{
//			line = line + tmp[i] + " ";
//		}
//		if (maxWidth > length)
//		{
//			line.append(maxWidth - length, ' ');
//		}
//		else if (maxWidth < length)
//		{
//			line.pop_back();
//		}
//		result.push_back(line);
//	}
//	return result;
//}
//
//int mySqrt(int x) {
//	long long left = 0;
//	long long right = x;
//	while (left <= right)
//	{
//		long long mid = (left + right) / 2;
//		if ((mid*mid) < x)
//		{
//			left = mid+1;
//		}
//		else if ((mid*mid) > x)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return right;
//
//	//if (x == 0)
//	//{
//	//	return 0;
//	//}
//	//if (x < 4)
//	//{
//	//	return 1;
//	//}
//	//long long i = 2;
//	//while (i*i <= x)
//	//{
//	//	i *= 2;
//	//}
//	//for (long long j = i / 2; j < i; j++)
//	//{
//	//	if (j*j > x)
//	//	{
//	//		return j - 1;
//	//	}
//	//	else if (j*j == x)
//	//	{
//	//		return j;
//	//	}
//	//}
//	//return 0;
//}
//
//int climbStairs(int n) {
//	if (n == 1 || n == 2 || n == 3)
//	{
//		return n;
//	}
//	vector<int> dp(n);
//	dp[0] = 1;
//	dp[1] = 2;
//	for (int i = 2; i < n; i++)
//	{
//		dp[i] = dp[i - 1] + dp[i - 2];
//	}
//	return dp[n - 1];
//	//if (n == 1 || n == 2 || n == 3)
//	//{
//	//	return n;
//	//}
//	//return climbStairs(n - 1) + climbStairs(n - 2);
//}
//
//string simplifyPath(string path) {
//	int size = path.size();
//	string tmp;
//	vector<string> tmpVec;
//	for (int i = 0; i < size; i++)
//	{
//		if (path[i] != '/')
//		{
//			tmp.push_back(path[i]);
//		}
//		else if (path[i] == '/' && !tmp.empty())
//		{
//			if (tmp == ".." )
//			{
//				if (!tmpVec.empty())
//				{
//					tmpVec.pop_back();
//				}
//			}
//			else if (tmp != ".")
//			{
//				tmpVec.push_back(tmp);
//			}
//			tmp.clear();
//			continue;
//		}
//	}
//	if (tmp == "..")
//	{
//		if (!tmpVec.empty())
//		{
//			tmpVec.pop_back();
//		}
//	}
//	else if (tmp != "."&&tmp != "")
//	{
//		tmpVec.push_back(tmp);
//	}
//	string result = "/";
//	if (tmpVec.empty())
//	{
//		return result;
//	}
//	for (auto it = tmpVec.begin();;)
//	{
//		result += *it;
//		it++;
//		if (it != tmpVec.end())
//		{
//			result += "/";
//		}
//		else
//		{
//			break;
//		}
//	}
//	return result;
//}
//
//int minDistance(string word1, string word2) {
//	int size1 = word1.size() + 1;
//	int size2 = word2.size() + 1;
//	if (size1 == 0)
//	{
//		return size2;
//	}
//	if (size2 == 0)
//	{
//		return size1;
//	}
//	//第0行0列是空字符
//	vector<vector<int>> dp(size1, vector<int>(size2, 0));
//	for (int i = 1; i < size2; i++)
//	{
//		dp[0][i] = i;
//	}
//	for (int i = 1; i < size1; i++)
//	{
//		dp[i][0] = i;
//	}
//	for (int i = 1; i < size1; i++)
//	{
//		for (int j = 1; j < size2; j++)
//		{
//			if (word1[i - 1] != word2[j - 1])
//			{
//				dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]);
//				dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]) + 1;
//			}
//			else if (word1[i - 1] == word2[j - 1])
//			{
//				dp[i][j] = dp[i - 1][j - 1];
//			}
//		}
//	}
//	return dp[size1 - 1][size2 - 1];
//}
//
//void setZeroes(vector<vector<int>>& matrix) {
//	int lineSize = matrix.size();
//	if (lineSize == 0)
//	{
//		return;
//	}
//	int colSize = matrix[0].size();
//	vector<int> line;
//	vector<int> col;
//	for (int i = 0; i < lineSize; i++)
//	{
//		for (int j = 0; j < colSize; j++)
//		{
//			if (matrix[i][j] == 0)
//			{
//				line.push_back(i);
//				col.push_back(j);
//			}
//		}
//	}
//	for (vector<int>::iterator it = line.begin(); it != line.end(); it++)
//	{
//		for (int i = 0; i < colSize; i++)
//		{
//			matrix[*it][i] = 0;
//		}
//	}
//	for (vector<int>::iterator it = col.begin(); it != col.end(); it++)
//	{
//		for (int i = 0; i < lineSize; i++)
//		{
//			matrix[i][*it] = 0;
//		}
//	}
//}
//
//bool searchMatrix(vector<vector<int>>& matrix, int target) {
//	int lineSize = matrix.size();
//	if (lineSize == 0)
//	{
//		return false;
//	}
//	int colSize = matrix[0].size();
//	int i1 = 0;
//	int j1 = 0;
//	int i2 = lineSize - 1;
//	int j2 = colSize - 1;
//	while (i1 < i2 || (i1 == i2 && j1 <= j2))
//	{
//		int index = (i1 + i2)*colSize + j1 + j2;
//		index /= 2;
//		int iMid = index / colSize;
//		int jMid = index % colSize;
//		if (matrix[iMid][jMid] == target)
//		{
//			return true;
//		}
//		else if (matrix[iMid][jMid] < target)
//		{
//			if (jMid + 1 < colSize)
//			{
//				j1 = jMid + 1;
//				i1 = iMid;
//			}
//			else
//			{
//				j1 = 0;
//				i1 = iMid + 1;
//			}
//		}
//		else
//		{
//			if (jMid - 1 >= 0)
//			{
//				j2 = jMid - 1;
//				i2 = iMid;
//			}
//			else
//			{
//				j2 = colSize - 1;
//				i2 = iMid - 1;
//			}
//		}
//	}
//	return false;
//}
//
//void sortColors(vector<int>& nums) {
//	///两次扫描
//	/*int size = nums.size();
//	if (size == 0 || size == 1)
//	{
//		return;
//	}
//	int num0 = 0;
//	int num1 = 0;
//	int num2 = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (nums[i] == 0)
//		{
//			num0++;
//		}
//		else if (nums[i] == 1)
//		{
//			num1++;
//		}
//		else
//		{
//			num2++;
//		}
//	}
//	int i = 0;
//	for (; i < num0; i++)
//	{
//		nums[i] = 0;
//	}
//	for (; i < num0+num1; i++)
//	{
//		nums[i] = 1;
//	}
//	for (; i < size; i++)
//	{
//		nums[i] = 2;
//	}*/
//
//	///一次扫描
//	int size = nums.size();
//	if (size == 0 || size == 1)
//	{
//		return;
//	}
//	int num0 = 0;
//	int num2 = size - 1;
//	int i = 0;
//	while (i <= num2)
//	{
//		if (nums[i] == 0)
//		{
//			nums[i] = nums[num0];
//			nums[num0] = 0;
//			i++;
//			num0++;
//		}
//		else if (nums[i] == 1)
//		{
//			i++;
//		}
//		else
//		{
//			nums[i] = nums[num2];
//			nums[num2] = 2;
//			num2--;
//		}
//	}
//}
//
//string minWindow(string s, string t) {
//	int size = s.size();
//	if (size < t.size())
//	{
//		return "";
//	}
//	int AIndex = -1;
//	int BIndex = -1;
//	int CIndex = -1;
//	//map<char, int> tmpMap;
//	int minSize = size;
//	string result;
//	for (int i = 0; i < size; i++)
//	{
//		if (s[i] == 'A')
//		{
//			if (AIndex != -1)
//			{
//				if (BIndex < AIndex)
//				{
//					BIndex = -1;
//				}
//				if(CIndex<AIndex)
//				{
//					CIndex = -1;
//				}
//			}
//			AIndex = i;
//			if (BIndex >= 0 && CIndex >= 0)
//			{
//				int min = BIndex < CIndex ? BIndex : CIndex;
//				int tmp = AIndex - min;
//				if (tmp < minSize)
//				{
//					minSize = tmp;
//					result = s.substr(min, tmp + 1);
//				}
//			}
//		}
//		if (s[i] == 'B')
//		{
//			if (BIndex != -1)
//			{
//				if (AIndex < BIndex)
//				{
//					AIndex = -1;
//				}
//				if (CIndex < BIndex)
//				{
//					CIndex = -1;
//				}
//			}
//			BIndex = i;
//			if (AIndex >= 0 && CIndex >= 0)
//			{
//				int min = AIndex < CIndex ? AIndex : CIndex;
//				int tmp = BIndex - min;
//				if (tmp < minSize)
//				{
//					minSize = tmp;
//					result = s.substr(min, tmp + 1);
//				}
//			}
//		}
//		if (s[i] == 'C')
//		{
//			if (CIndex != -1)
//			{
//				if (BIndex < CIndex)
//				{
//					BIndex = -1;
//				}
//				if (AIndex < CIndex)
//				{
//					AIndex = -1;
//				}
//			}
//			CIndex = i;
//			if (AIndex >= 0 && BIndex >= 0)
//			{
//				int min = AIndex < BIndex ? AIndex : BIndex;
//				int tmp = CIndex - min;
//				if (tmp < minSize)
//				{
//					minSize = tmp;
//					result = s.substr(min, tmp + 1);
//				}
//			}
//		}
//	}
//	return result;
//}
//
//vector<vector<int>> combine(int n, int k) {
//	vector<vector<int>> result;
//	int dif = n - k;
//	if (dif < 0)
//	{
//		result;
//	}
//	vector<int> tmp(k, 0);
//	for (int i = 0; i < k; i++)
//	{
//		tmp[i] = i + 1;
//	}
//	result.push_back(tmp);
//	int cur = k - 1;
//	while (tmp[0] <= dif)
//	{
//		if (tmp[cur] == n + cur - k + 1)
//		{
//			while (tmp[cur] == n + cur - k + 1)
//			{
//				cur--;
//			}
//			if (cur < 0)
//			{
//				cur = k - 1;
//				for (int i = 1; i < k; i++)
//				{
//					tmp[i] = tmp[i - 1] + 1;
//				}
//			}
//			else
//			{
//				tmp[cur]++;
//				cur++;
//				while (cur < k)
//				{
//					tmp[cur] = tmp[cur - 1] + 1;
//					cur++;
//				}
//				result.push_back(tmp);
//				cur = k - 1;
//			}
//		}
//		else
//		{
//			tmp[cur]++;
//			result.push_back(tmp);
//		}
//	}
//	return result;
//}
//
//vector<vector<int>> subsets(vector<int>& nums) {
//	vector<vector<int>> result;
//	result.push_back({});
//	int size = nums.size();
//	if (size == 0)
//	{
//		return result;
//	}
//	for (int i = 0; i < size; i++)
//	{
//		int size = result.size();
//		for (int j = 0; j < size; j++)
//		{
//			vector<int> tmp = result[j];
//			tmp.push_back(nums[i]);
//			result.push_back(tmp);
//		}
//	}
//	return result;
//}
//
//bool huisuExist(vector<vector<char>> board,int curX, int curY, int idex, string& word)
//{
//	idex++;
//	if (idex == word.size())
//	{
//		return true;
//	}
//	char search = word[idex];
//	board[curX][curY] = '0';
//	if (curY - 1 >= 0 && board[curX][curY - 1] == search)
//	{
//		if (huisuExist(board, curX, curY - 1, idex, word))
//		{
//			return true;
//		}
//	}
//	if (curX - 1 >= 0 && board[curX - 1][curY] == search)
//	{
//		if (huisuExist(board, curX - 1, curY, idex, word))
//		{
//			return true;
//		}
//	}
//	if (curY + 1 < board[0].size() && board[curX][curY + 1] == search)
//	{
//		if (huisuExist(board, curX, curY + 1, idex, word))
//		{
//			return true;
//		}
//	}
//	if (curX + 1 < board.size() && board[curX + 1][curY] == search)
//	{
//		if (huisuExist(board, curX + 1, curY, idex, word))
//		{
//			return true;
//		}
//	}
//	return false;
//}
//bool exist(vector<vector<char>>& board, string word) {
//	if (word.size() == 0)
//	{
//		return true;
//	}
//	int size = board.size();
//	if (size == 0)
//	{
//		return false;
//	}
//	int size2 = board[0].size();
//	char first = word[0];
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size2; j++)
//		{
//			if (board[i][j] == first)
//			{
//				if (huisuExist(board, i, j, 0, word))
//				{
//					return true;
//				}
//			}
//		}
//	}
//	return false;
//}
//
//int removeDuplicates2(vector<int>& nums) {
//	int size = nums.size();
//	if (size == 0)
//	{
//		return 0;
//	}
//	int pre = nums[0];
//	int count = 1;
//	for (auto it = nums.begin()+1; it != nums.end();)
//	{
//		if (*it == pre)
//		{
//			if (count == 2)
//			{
//				it = nums.erase(it);
//			}
//			else
//			{
//				count++;
//				it++;
//			}
//		}
//		else
//		{
//			pre = *it;
//			count = 1;
//			it++;
//		}
//	}
//	return nums.size();
//}
//
//bool search2(vector<int>& nums, int target) {
//	int size = nums.size();
//	if (size == 0)
//	{
//		return false;
//	}
//	int left = 0;
//	int right = size - 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (nums[mid] == target)
//		{
//			return true;
//		}
//		if (nums[mid] == nums[left])
//		{
//			left++;
//		}
//		else if (nums[mid] > nums[left])
//		{
//			if (nums[mid] > target&&target >= nums[left])
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				left = mid + 1;
//			}
//		}
//		else
//		{
//			if (nums[mid] < target&&target <= nums[right])
//			{
//				left = mid + 1;
//			}
//			else
//			{
//				right = mid - 1;
//			}
//		}
//	}
//	return false;
//}
//
//ListNode* deleteDuplicates(ListNode* head) {
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	ListNode* last = NULL;
//	ListNode* pre = head;
//	ListNode* cur = head->next;
//	if (cur == NULL)
//	{
//		return head;
//	}
//	int preVal = head->val;
//	while (cur != NULL)
//	{
//		if (cur->val == preVal)
//		{
//			//找到第一个与之前数字不同的节点
//			while (cur != NULL && cur->val == preVal)
//			{
//				cur = cur->next;
//			}
//			if (cur == NULL)
//			{
//				if (last!=NULL)
//				{
//					last->next = NULL;
//					return head;
//				}
//				return NULL;
//			}
//			preVal = cur->val;
//			pre = cur;
//			cur = cur->next;
//			continue;
//		}
//		else
//		{
//			if (last == NULL)
//			{
//				head = pre;
//			}
//			else
//			{
//				last->next = pre;
//			}
//			last = pre;
//			pre = cur;
//			preVal = pre->val;
//			cur = cur->next;
//		}
//	}
//	if (last != NULL)
//	{
//		last->next = pre;
//		return head;
//	}
//	return pre;
//}
//
//ListNode* deleteDuplicates2(ListNode* head) {
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	int preVal = head->val;
//	ListNode* pre = head;
//	ListNode* cur = head->next;
//	while (cur != NULL)
//	{
//		if (cur->val == preVal)
//		{
//			pre->next = cur->next;
//		}
//		else
//		{
//			pre = cur;
//			preVal = cur->val;
//		}
//		cur = cur->next;
//	}
//	return head;
//}
//
//int largestRectangleArea(vector<int>& heights) {
//	int size = heights.size();
//	if (size == 0)
//	{
//		return 0;
//	}
//	int result = heights[0];
//	vector<int> found;
//	for(int k = 0; k < size; k++)
//	{
//		int i = heights[k];
//		auto it = find(found.begin(), found.end(), i);
//		if (it != found.end())
//		{
//			continue;
//		}
//		found.push_back(i);
//		int left = -1;
//		int right = -1;
//		for (int j = 0; j < size; j++)
//		{
//			if (heights[j] >= i)
//			{
//				if (left < 0)
//				{
//					left = j;
//				}
//				right = j;
//			}
//			else
//			{
//				if (right >= 0)
//				{
//					int tmp = (right - left + 1)*i;
//					result = tmp > result ? tmp : result;
//					left = -1;
//					right = -1;
//				}
//			}
//		}
//		if (right > 0)
//		{
//			int tmp = (right - left + 1)*i;
//			result = tmp > result ? tmp : result;
//		}
//	}
//	return result;
//}
//
//int maximalRectangle(vector<vector<char>>& matrix) {
//	int sizeX = matrix.size();
//	if (sizeX == 0)
//	{
//		return 0;
//	}
//	int sizeY = matrix[0].size();
//	for (int i = 0; i < sizeX; i++)
//	{
//		for (int j = 0; j < sizeY; j++)
//		{
//			if (matrix[i][j] == '1'&&j != 0)
//			{
//				matrix[i][j] = matrix[i][j - 1] + 1;
//			}
//		}
//	}
//	int result = 0;
//	for (int i = 0; i < sizeX; i++)
//	{
//		for (int j = 0; j < sizeY; j++)
//		{
//			if (matrix[i][j] >= '1')
//			{
//				int min = matrix[i][j];
//				for (int k = i; k >= 0; k--)
//				{
//					min = matrix[k][j] < min ? matrix[k][j] : min;
//					int tmp = (min - '0') * (i - k + 1);
//					result = result > tmp ? result : tmp;
//				}
//			}
//		}
//	}
//	return result;
//}
//
//ListNode* partition(ListNode* head, int x) {
//	ListNode* firstSmall = NULL;
//	ListNode* lastSmall = NULL;
//	ListNode* firstBig = NULL;
//	ListNode* lastBig = NULL;
//	ListNode* cur = head;
//	while (cur != NULL)
//	{
//		if (cur->val < x)
//		{
//			if (lastSmall == NULL)
//			{
//				firstSmall = cur;
//				lastSmall = cur;
//				cur = cur->next;
//				lastSmall->next = firstBig;
//			}
//			else
//			{
//				lastSmall->next = cur;
//				lastSmall = cur;
//				cur = cur->next;
//				lastSmall->next = firstBig;
//			}
//		}
//		else
//		{
//			if (lastBig == NULL)
//			{
//				firstBig = cur;
//				if (lastSmall != NULL)
//				{
//					lastSmall->next = firstBig;
//				}
//				lastBig = cur;
//			}
//			else
//			{
//				lastBig->next = cur;
//				lastBig = cur;
//			}
//			cur = cur->next;
//			lastBig->next = NULL;
//		}
//	}
//	if (firstSmall != NULL)
//	{
//		return firstSmall;
//	}
//	return head;
//}
//
//bool isScramble(string s1, string s2) {
//	if (s1 == s2)
//	{
//		return true;
//	}
//	int size1 = s1.size();
//	int size2 = s2.size();
//	if (size1 != size2) 
//	{
//		return false;
//	}
//	string ss1(s1);
//	string ss2(s2);
//	sort(ss1.begin(), ss1.end());
//	sort(ss2.begin(), ss2.end());
//	if (ss1 != ss2) {
//		return false;
//	}
//	for (int i = 1; i < size1; i++)
//	{
//		if(isScramble(s1.substr(0,i),s2.substr(0,i))&&
//			isScramble(s1.substr(i), s2.substr(i)))
//		{
//			return true;
//		}
//		if (isScramble(s1.substr(0, i), s2.substr(size2 - i)) &&
//			isScramble(s1.substr(i), s2.substr(0, size2 - i)))
//		{
//			return true;
//		}
//	}
//	return false;
//}
//
//void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//	if (n == 0)
//	{
//		return;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		if (nums1[i] > nums2[0])
//		{
//			int tmp = nums2[0];
//			nums2[0] = nums1[i];
//			nums1[i] = tmp;
//			for (int j = 1; j < n; j++)
//			{
//				if (nums2[j] < nums2[j - 1])
//				{
//					int tmp2 = nums2[j];
//					nums2[j] = nums2[j - 1];
//					nums2[j - 1] = tmp2;
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//	}
//	for (int i = m; i < n + m; i++)
//	{
//		nums1[i] = nums2[i - m];
//	}
//}
//
//vector<int> grayCode(int n) {
//	vector<int> res;
//	res.push_back(0);
//	if (n == 0)
//	{
//		return res;
//	}
//	int tmp = 1;
//	while (n > 0)
//	{
//		for (int i = res.size() - 1; i >= 0; i--)
//		{
//			res.push_back(res[i] + tmp);
//		}
//		n--;
//		tmp *= 2;
//	}
//	return res;
//}
//
//void diguiSubsetsWithDup(vector<vector<int>> &result, vector<int> &nums, int i, vector<int> cur, int &size)
//{
//	if (i == size - 1)
//	{
//		return;
//	}
//	int pre = nums[i+1];
//	cur.push_back(pre);
//	result.push_back(cur);
//	diguiSubsetsWithDup(result, nums, i + 1, cur, size);
//	cur.pop_back();
//	for (int j = i + 2; j < size; j++)
//	{
//		if (nums[j] != pre)
//		{
//			cur.push_back(nums[j]);
//			result.push_back(cur);
//			diguiSubsetsWithDup(result, nums, j, cur, size);
//			cur.pop_back();
//			pre = nums[j];
//		}
//	}
//}
//vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//	vector<vector<int>> result;
//	result.push_back({});
//	int size = nums.size();
//	if (size == 0)
//	{
//		return result;
//	}
//	sort(nums.begin(), nums.end());
//	int pre = nums[0];
//	result.push_back({ pre });
//	diguiSubsetsWithDup(result, nums, 0, { pre }, size);
//	for (int i = 1; i < nums.size(); i++)
//	{
//		if (nums[i] != pre)
//		{
//			result.push_back({ nums[i] });
//			diguiSubsetsWithDup(result, nums, i, { nums[i] }, size);
//			pre = nums[i];
//		}
//	}
//	return result;
//}
//
//int numDecodings(string s) {
//	int size = s.size();
//	if (size == 0)
//	{
//		return 1;
//	}
//	if (s[0] == '0')
//	{
//		return 0;
//	}
//	if (size == 1)
//	{
//		return 1;
//	}
//	int result = 0;
//	if (s[0] > '2')
//	{
//		result += numDecodings(s.substr(1));
//	}
//	else if (s[0] == '2')
//	{
//		if (s[1] <= '6')
//		{
//			result += numDecodings(s.substr(2));
//			result += numDecodings(s.substr(1));
//		}
//		else
//		{
//			result += numDecodings(s.substr(1));
//		}
//	}
//	else
//	{
//		result += numDecodings(s.substr(2));
//		result += numDecodings(s.substr(1));
//	}
//	return result;
//}
//
//ListNode* reverseBetween(ListNode* head, int m, int n) {
//	ListNode* pre = NULL;
//	ListNode* cur = head;
//	while (cur != NULL && m > 1)
//	{
//		pre = cur;
//		cur = cur->next;
//		m--;
//		n--;
//	}
//	ListNode* ppre = pre;
//	pre = cur;
//	cur = cur->next;
//	while (cur != NULL && n > 1)
//	{
//		ListNode* tmp = cur->next;
//		cur->next = pre;
//		pre = cur;
//		cur = tmp;
//		n--;
//	}
//	if (ppre != NULL)
//	{
//		ppre->next->next = cur;
//		ppre->next = pre;
//	}
//	else
//	{
//		head->next = cur;
//		head = pre;
//
//	}
//	return head;
//}
//
//void diguiRestoreIpAddresses(string s, int pntNum, string tmp, vector<string> &result)
//{
//	int size = s.size();
//	if (size < pntNum + 1)
//	{
//		return;
//	}
//	if (pntNum == 0)
//	{
//		if (size > 3 || size > 1 && s[0] == '0')
//		{
//			return;
//		}
//		if (size == 3)
//		{
//			if (s[0] > '2' || (s[0] == '2'&&s[1] > '5') || (s[0] == '2'&&s[1] == '5'&&s[2] > '5'))
//			{
//				return;
//			}
//		}
//		tmp = tmp + "." + s;
//		result.push_back(tmp);
//		return;
//	}
//	if (s[0] == '0')
//	{
//		if (size - 1 <= 3 * pntNum)
//		{
//			tmp = tmp + "." + s.substr(0, 1);
//			diguiRestoreIpAddresses(s.substr(1), pntNum - 1, tmp, result);
//		}
//		return;
//	}
//	if (size - 1 <= 3 * pntNum&&size > 1)
//	{
//		string tmp1 = tmp + "." + s.substr(0, 1);
//		diguiRestoreIpAddresses(s.substr(1), pntNum - 1, tmp1, result);
//	}
//	if (size - 2 <= 3 * pntNum&&size > 2)
//	{
//		string tmp1 = tmp + "." + s.substr(0, 2);
//		diguiRestoreIpAddresses(s.substr(2), pntNum - 1, tmp1, result);
//	}
//	if (size - 3 <= 3 * pntNum&&size > 3)
//	{
//		if (s[0] < '2' || (s[0] == '2'&&s[1] < '5') || (s[0] == '2'&&s[1] == '5'&&s[2] <= '5'))
//		{
//			string tmp1 = tmp + "." + s.substr(0, 3);
//			diguiRestoreIpAddresses(s.substr(3), pntNum - 1, tmp1, result);
//		}
//	}
//}
//vector<string> restoreIpAddresses(string s) {
//	vector<string> result;
//	int size = s.size();
//	if (size < 4)
//	{
//		return result;
//	}
//	if (s[0] == '0')
//	{
//		if (size - 1 < 9)
//		{
//			diguiRestoreIpAddresses(s.substr(1), 2, s.substr(0, 1), result);
//		}
//		return result;
//	}
//	if (size - 1 <= 9)
//	{
//		diguiRestoreIpAddresses(s.substr(1), 2, s.substr(0, 1), result);
//	}
//	if (size - 2 <= 9)
//	{
//		diguiRestoreIpAddresses(s.substr(2), 2, s.substr(0, 2), result);
//	}
//	if (size - 3 <= 9)
//	{
//		if (s[0] < '2' || (s[0] == '2'&&s[1] < '5') || (s[0] == '2'&&s[1] == '5'&&s[2] <= '5'))
//		{
//			diguiRestoreIpAddresses(s.substr(3), 2, s.substr(0, 3), result);
//		}
//	}
//	return result;
//}
//
//void diguiInorderTraversal(TreeNode* root, vector<int>& res)
//{
//	if (root->left != NULL)
//	{
//		diguiInorderTraversal(root->left, res);
//	}
//	res.push_back(root->val);
//	if (root->right != NULL)
//	{
//		diguiInorderTraversal(root->right, res);
//	}
//}
//vector<int> inorderTraversal(TreeNode* root) {
//	vector<int> result;
//	if (root == NULL)
//	{
//		return result;
//	}
//	diguiInorderTraversal(root, result);
//	return result;
//}
//
//vector<TreeNode*> diedaiGenerateTrees(int start, int end)
//{
//	vector<TreeNode*> res;
//	if (end < start)
//	{
//		res.push_back(nullptr);
//		return res;
//	}
//	for (int i = start; i <= end; i++)
//	{
//		vector<TreeNode*> left = diedaiGenerateTrees(start, i-1);
//		vector<TreeNode*> right = diedaiGenerateTrees(i + 1, end);
//		for (auto it = left.begin(); it != left.end(); it++)
//		{
//			for (auto it1 = right.begin(); it1 != right.end(); it1++)
//			{
//				TreeNode* root = new TreeNode(i);
//				root->right = *it1;
//				root->left = *it;
//				res.push_back(root);
//			}
//		}
//	}
//	return res;
//}
//vector<TreeNode*> generateTrees(int n) {
//	vector<TreeNode*> res;
//	if (n == 0)
//	{
//		return res;
//	}
//	res = diedaiGenerateTrees(1, n);
//	return res;
//}
//
//int numTrees(int n) {
//	vector<int> dp(n + 1, 0);
//	dp[0] = 1;
//	dp[1] = 1;
//
//	for (int i = 2; i <= n; i++)
//	{
//		int tmp = (i - 1) / 2;
//		if ((i - 1) % 2)
//		{
//			for (int j = 0; j <= tmp; j++)
//			{
//				dp[i] += dp[j] * dp[i - j - 1] * 2;
//			}
//		}
//		else
//		{
//			for (int j = 0; j < tmp; j++)
//			{
//				dp[i] += dp[j] * dp[i - j - 1] * 2;
//			}
//			dp[i] += dp[tmp] * dp[tmp];
//		}
//	}
//	return dp[n];
//
//	//if (n == 0 || n == 1)
//	//{
//	//	return 1;
//	//}
//	//int res = 0;
//	//for (int i = 1; i <= n; i++)
//	//{
//	//	res += numTrees(i - 1)*numTrees(n - i);
//	//}
//	//return res;
//}
//
//bool isInterleave(string s1, string s2, string s3) {
//	int N1 = s1.size();
//	int N2 = s2.size();
//	int N3 = s3.size();
//	if (N1 + N2 != N3) return false;
//	vector<vector<bool> > dp(N1 + 1, vector<bool>(N2 + 1, false));
//	dp[0][0] = true;
//	for (int i = 0; i <= N1; ++i) 
//	{
//		for (int j = 0; j <= N2; ++j) 
//		{
//			if (i > 0 && s1[i - 1] == s3[i + j - 1]) 
//			{
//				dp[i][j] = dp[i][j] || dp[i - 1][j];
//			}
//			if (j > 0 && s2[j - 1] == s3[i + j - 1]) 
//			{
//				dp[i][j] = dp[i][j] || dp[i][j - 1];
//			}
//		}
//	}
//	return dp[N1][N2];
//
//	/*int size1 = s1.size();
//	int size2 = s2.size();
//	int size3 = s3.size();
//	if (size1 + size2 != size3)
//	{
//		return false;
//	}
//	int i1 = 0; 
//	int i2 = 0;
//	for (int i = 0; i < size3; i++)
//	{
//		if (s3[i] == s1[i1])
//		{
//			if (s3[i] == s2[i2])
//			{
//				return isInterleave(s1.substr(i1 + 1), s2.substr(i2), s3.substr(i + 1))|| 
//					isInterleave(s1.substr(i1), s2.substr(i2 + 1), s3.substr(i + 1));
//			}
//			else
//			{
//				i1++;
//			}
//		}
//		else
//		{
//			if (s3[i] == s2[i2])
//			{
//				i2++;
//			}
//			else
//			{
//				return false;
//			}
//		}
//	}
//	return true;*/
//}
//
//bool diedaiIsValidBST(TreeNode* root, int max, int min, bool b1, bool b2)
//{
//	if (root == NULL)
//	{
//		return true;
//	}
//	if ((b1 && root->val >= max) || (b2 && root->val <= min))
//	{
//		return false;
//	}
//	if (root->left != NULL)
//	{
//		if (!diedaiIsValidBST(root->left, root->val, min, true, b2))
//		{
//			return false;
//		}
//	}
//	if (root->right != NULL)
//	{
//		if (!diedaiIsValidBST(root->right, max, root->val, b1, true))
//		{
//			return false;
//		}
//	}
//	return true;
//}
//bool isValidBST(TreeNode* root) {
//	if (root == NULL)
//	{
//		return true;
//	}
//	if (root->left != NULL)
//	{
//		if (!diedaiIsValidBST(root->left, root->val, INT_MIN, true, false))
//		{
//			return false;
//		}
//	}
//	if (root->right != NULL)
//	{
//		if (!diedaiIsValidBST(root->right, INT_MAX, root->val, false, true))
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//void recoverTree(TreeNode* root) {
//	TreeNode* first = NULL;
//	TreeNode* second = NULL;
//	TreeNode* pre = NULL;
//	TreeNode* curr = root;
//	TreeNode* tmp = NULL;
//	while (curr != NULL) 
//	{
//		if (curr->left == NULL) 
//		{     //左子树为空
//			if ((pre != NULL) && (pre->val > curr->val)) 
//			{//如果有前驱且前驱的值大于当前结点的值,说明顺序反了,存在错误结点
//				if (first == NULL) 
//				{  //如果是第一次发现,则将first置为前驱,second置为当前结点
//					first = pre;
//					second = curr;
//				}
//				else 
//				{              //如果不是第一次发现,说明存在两个不相邻位置的交换,将second改为后者
//					second = curr;
//				}
//			}
//			pre = curr;             //如果没有前驱或者前驱的值小于当前值,属于正常情况,则继续遍历
//			curr = curr->right;
//		}
//		else 
//		{
//			tmp = curr->left;
//			while ((tmp->right != NULL) && (tmp->right != curr)) 
//			{
//				tmp = tmp->right;
//			}
//			if (tmp->right == NULL) 
//			{
//				tmp->right = curr;
//				curr = curr->left;
//			}
//			else 
//			{
//				tmp->right = NULL;//恢复树的形状
//				if ((pre != NULL) && (pre->val > curr->val)) 
//				{//判断逻辑与上面的相同
//					if (first == NULL) 
//					{
//						first = pre;
//						second = curr;
//					}
//					else 
//					{
//						second = curr;
//					}
//				}
//				pre = curr;
//				curr = curr->right;
//			}
//		}
//	}
//	int itmp = first->val;
//	first->val = second->val;
//	second->val = itmp;
//}
//
//bool isSameTree(TreeNode* p, TreeNode* q) {
//	if (p == NULL || q == NULL)
//	{
//		return p == q;
//	}
//	if (p->val != q->val)
//	{
//		return false;
//	}
//	if (!isSameTree(p->left, q->left))
//	{
//		return false;
//	}
//	if (!isSameTree(p->right, q->right))
//	{
//		return false;
//	}
//	return true;
//}
//
//bool diguiIsSymmetric(TreeNode* left, TreeNode* right)
//{
//	if (left == NULL || right == NULL)
//	{
//		return left == right;
//	}
//	if (left->val != right->val)
//	{
//		return false;
//	}
//	return diguiIsSymmetric(left->right, right->left) && diguiIsSymmetric(left->left, right->right);
//}
//bool isSymmetric(TreeNode* root) {
//	if (root == NULL)
//	{
//		return true;
//	}
//	return diguiIsSymmetric(root->left, root->right);
//}
//
//vector<vector<int>> levelOrder(TreeNode* root) {
//	vector<vector<int>> res;
//	if (root == NULL)
//	{
//		return res;
//	}
//	vector<TreeNode*> tmp;
//	tmp.push_back(root);
//	while (!tmp.empty())
//	{
//		vector<TreeNode*> tt;
//		vector<int> line;
//		for (auto it = tmp.begin(); it != tmp.end(); it++)
//		{
//			line.push_back((*it)->val);
//			if ((*it)->left != NULL)
//			{
//				tt.push_back((*it)->left);
//			}
//			if ((*it)->right != NULL)
//			{
//				tt.push_back((*it)->right);
//			}
//		}
//		res.push_back(line);
//		tmp = tt;
//	}
//	return res;
//}
//
//vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//	vector<vector<int>> res;
//	if (root == NULL)
//	{
//		return res;
//	}
//	vector<TreeNode*> tmp;
//	tmp.push_back(root);
//	bool flag = true;
//	while (!tmp.empty())
//	{
//		vector<TreeNode*> tt;
//		vector<int> line;
//		if (flag)
//		{
//			for (auto it = tmp.rbegin(); it != tmp.rend(); it++)
//			{
//				line.push_back((*it)->val);
//				if ((*it)->left != NULL)
//				{
//					tt.push_back((*it)->left);
//				}
//				if ((*it)->right != NULL)
//				{
//					tt.push_back((*it)->right);
//				}
//			}
//			flag = false;
//		}
//		else
//		{
//			for (auto it = tmp.rbegin(); it != tmp.rend(); it++)
//			{
//				line.push_back((*it)->val);
//				if ((*it)->right != NULL)
//				{
//					tt.push_back((*it)->right);
//				}
//				if ((*it)->left != NULL)
//				{
//					tt.push_back((*it)->left);
//				}
//			}
//			flag = true;
//		}
//		res.push_back(line);
//		tmp = tt;
//	}
//	return res;
//}
//
//int maxDepth(TreeNode* root) {
//	int res = 0;
//	if (root == NULL)
//	{
//		return res;
//	}
//	vector<TreeNode*> tmp;
//	tmp.push_back(root);
//	while (!tmp.empty())
//	{
//		vector<TreeNode*> tt;
//		for (auto it = tmp.begin(); it != tmp.end(); it++)
//		{
//			if ((*it)->left != NULL)
//			{
//				tt.push_back((*it)->left);
//			}
//			if ((*it)->right != NULL)
//			{
//				tt.push_back((*it)->right);
//			}
//		}
//		res++;
//		tmp = tt;
//	}
//	return res;
//}
//
//TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//	int size = preorder.size();
//	if (size == 0)
//	{
//		return NULL;
//	}
//	TreeNode* root = new TreeNode(preorder[0]);
//	for (int i = 0; i < size; i++)
//	{
//		if (inorder[i] == root->val)
//		{
//			if (i != 0)
//			{
//				vector<int> left(inorder.begin(), inorder.begin() + i);
//				vector<int> preLeft(preorder.begin() + 1, preorder.begin() + i+1);
//				root->left = buildTree(preLeft, left);
//			}
//			if (i + 1 != size)
//			{
//				vector<int> right(inorder.begin() + i + 1, inorder.end());
//				vector<int> preRight(preorder.begin() + i + 1, preorder.end());
//				root->right = buildTree(preRight, right);
//			}
//			break;
//		}
//	}
//	return root;
//}
//
//TreeNode* buildTree2(vector<int>& inorder, vector<int>& postorder) {
//	int size = inorder.size();
//	if (size == 0)
//	{
//		return NULL;
//	}
//	TreeNode* root = new TreeNode(postorder.back());
//	for (int i = 0; i < size; i++)
//	{
//		if (inorder[i] == root->val)
//		{
//			if (i != 0)
//			{
//				vector<int> left(inorder.begin(), inorder.begin() + i);
//				vector<int> postLeft(postorder.begin(), postorder.begin() + i);
//				root->left = buildTree2(left, postLeft);
//			}
//			if (i + 1 != size)
//			{
//				vector<int> right(inorder.begin() + i + 1, inorder.end());
//				vector<int> postRight(postorder.begin() + i, postorder.end() - 1);
//				root->right = buildTree2(right, postRight);
//			}
//			break;
//		}
//	}
//	return root;
//}
//
//vector<vector<int>> levelOrderBottom(TreeNode* root) {
//	vector<vector<int>> res;
//	if (root == NULL)
//	{
//		return res;
//	}
//	vector<TreeNode*> tmp;
//	tmp.push_back(root);
//	while (!tmp.empty())
//	{
//		vector<TreeNode*> tt;
//		vector<int> line;
//		for (auto it = tmp.begin(); it != tmp.end(); it++)
//		{
//			line.push_back((*it)->val);
//			if ((*it)->left != NULL)
//			{
//				tt.push_back((*it)->left);
//			}
//			if ((*it)->right != NULL)
//			{
//				tt.push_back((*it)->right);
//			}
//		}
//		res.push_back(line);
//		tmp = tt;
//	}
//	reverse(res.begin(), res.end());
//	return res;
//}
//
//TreeNode* sortedArrayToBST(vector<int>& nums) {
//	int size = nums.size();
//	if (size == 0)
//	{
//		return NULL;
//	}
//	int mid = size / 2;
//	TreeNode* root = new TreeNode(nums[mid]);
//	if (mid != 0)
//	{
//		vector<int> left(nums.begin(), nums.begin() + mid);
//		root->left = sortedArrayToBST(left);
//	}
//	if (mid + 1 != size)
//	{
//		vector<int> right(nums.begin() + mid + 1, nums.end());
//		root->right = sortedArrayToBST(right);
//	}
//	return root;
//}
//
//TreeNode* sortedListToBST(ListNode* head) {
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	if (head->next == NULL)
//	{
//		return new TreeNode(head->val);
//	}
//	ListNode* slow = head;
//	ListNode* fast = head;
//	ListNode* pre = NULL;
//	while (fast != NULL && fast->next != NULL)
//	{
//		fast = fast->next->next;
//		pre = slow;
//		slow = slow->next;
//	}
//	pre->next = NULL;
//	TreeNode* root = new TreeNode(slow->val);
//	root->left = sortedListToBST(head);
//	root->right = sortedListToBST(slow->next);
//	return root;
//}
//
//int diguiIsBalanced(TreeNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	int left = diguiIsBalanced(root->left);
//	if (left == -1)
//	{
//		return -1;
//	}
//	int right = diguiIsBalanced(root->right);
//	if (right == -1)
//	{
//		return -1;
//	}
//	if (fabs(left - right) < 2)
//	{
//		return max(left, right) + 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//bool isBalanced(TreeNode* root) {
//	if (diguiIsBalanced(root) == -1)
//	{
//		return false;
//	}
//	return true;
//}
//
//int diguiMinDepth(TreeNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	if (root->left == NULL && root->right == NULL)
//	{
//		return 1;
//	}
//	if (root->left != NULL)
//	{
//		int left = diguiMinDepth(root->left) + 1;
//		if (root->right != NULL)
//		{
//			int right = diguiMinDepth(root->right) + 1;
//			return left < right ? left : right;
//		}
//		return left;
//	}
//	else
//	{
//		return diguiMinDepth(root->right) + 1;
//	}
//}
//int minDepth(TreeNode* root) {
//	return diguiMinDepth(root);
//}
//
//bool hasPathSum(TreeNode* root, int sum) {
//	if (root == NULL)
//	{
//		return false;
//	}
//	if (root->left == NULL && root->right == NULL)
//	{
//		if (sum == root->val)
//		{
//			return true;
//		}
//		return false;
//	}
//	sum = sum - root->val;
//	return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
//}
//
//void diguiPathSum(TreeNode* root, int sum, vector<int> tmp)
//{
//	sum = sum - root->val;
//	tmp.push_back(root->val);
//	if (root->left == NULL && root->right == NULL)
//	{
//		if (sum == 0)
//		{
//			result.push_back(tmp);
//		}
//		return;
//	}
//	if (root->left != NULL)
//	{
//		diguiPathSum(root->left, sum, tmp);
//	}
//	if (root->right != NULL)
//	{
//		diguiPathSum(root->right, sum, tmp);
//	}
//}
//vector<vector<int>> pathSum(TreeNode* root, int sum) {
//	if (root == NULL)
//	{
//		return result;
//	}
//	vector<int> tmp;
//	diguiPathSum(root, sum, tmp);
//	return result;
//}
//
//void flatten(TreeNode* root) {
//	while (root != NULL)
//	{
//		TreeNode* left = root->left;
//		if (left != NULL)
//		{
//			while (left->right != NULL)
//			{
//				left = left->right;
//			}
//			left->right = root->right;
//			root->right = root->left;
//			root->left = NULL;
//		}
//		root = root->right;
//	}
//}
//
//int numDistinct(string s, string t) {
//	int tSize = t.size();
//	int sSize = s.size();
//	if (tSize == 0)
//	{
//		return 0;
//	}
//	if (sSize == 0)
//	{
//		return 0;
//	}
//	vector<vector<long>> dp(tSize + 1, vector<long>(sSize + 1, 0));
//	// 初始化第一行
//	for (int j = 0; j <= sSize; ++j)
//	{
//		dp[0][j] = 1;
//	}
//	for (int i = 1; i <= tSize; i++)
//	{
//		for (int j = 1; j <= sSize; j++) 
//		{
//			// 是否相等都要加上前面的值
//			dp[i][j] = dp[i][j - 1];
//			// 相等时加上，上一个字符匹配得出的结果
//			if (s[j - 1] == t[i - 1]) dp[i][j] += dp[i - 1][j - 1];
//		}
//	}
//	return dp[tSize][sSize];
//}
//
//Node1* connect(Node1* root) {
//	//if (root == NULL || root->left == NULL)
//	//{
//	//	return root;
//	//}
//	//vector<Node*> tmp;
//	//tmp.push_back(root);
//	//while (!tmp.empty())
//	//{
//	//	int size = tmp.size();
//	//	Node* preNode = NULL;
//	//	vector<Node*> ttmp;
//	//	for (int i = 0; i < size; i++)
//	//	{
//	//		if (tmp[i]->left != NULL)
//	//		{
//	//			ttmp.push_back(tmp[i]->left);
//	//			ttmp.push_back(tmp[i]->right);
//	//		}
//	//		if (preNode != NULL)
//	//		{
//	//			preNode->next = tmp[i];
//	//		}
//	//		preNode = tmp[i];
//	//	}
//	//	tmp = ttmp;
//	//}
//	//return root;
//
//	//递归解法
//	if (root == NULL or root->left == NULL)
//		return root;
//	root->left->next = root->right;
//	if (root->next != NULL)
//		root->right->next = root->next->left;
//	connect(root->left);
//	connect(root->right);
//	return root;
//}
//
//Node1* connect2(Node1* root) {
//	if (root == NULL)
//	{
//		return NULL;
//	}
//	Node1* cur = root;
//	Node1* searchNode = NULL;
//	while (cur != NULL)
//	{
//		if (cur->left != NULL)
//		{
//			if (searchNode != NULL)
//			{
//				searchNode->next = cur->left;
//			}
//			searchNode = cur->left;
//		}
//		if (cur->right != NULL)
//		{
//			if (searchNode != NULL)
//			{
//				searchNode->next = cur->right;
//			}
//			searchNode = cur->right;
//		}
//		cur = cur->next;
//	}
//	cur = root;
//	while (cur != NULL)
//	{
//		if (cur->left != NULL)
//		{
//			connect2(cur->left);
//			break;
//		}
//		if (cur->right != NULL)
//		{
//			connect2(cur->right);
//			break;
//		}
//		cur = cur->next;
//	}
//	return root;
//}
//
//vector<vector<int>> generate(int numRows) {
//	vector<vector<int>> result;
//	if (numRows == 0)
//	{
//		return result;
//	}
//	vector<int> pre(1, 1);
//	result.push_back(pre);
//	for (int i = 1; i < numRows; i++)
//	{
//		int size = pre.size() - 1;
//		vector<int> tmp;
//		tmp.push_back(1);
//		int num = pre[0];
//		for (int j = 1; j <= size; j++)
//		{
//			tmp.push_back(num + pre[j]);
//			num = pre[j];
//		}
//		tmp.push_back(1);
//		pre = tmp;
//		result.push_back(tmp);
//	}
//	return result;
//}
//
//vector<int> getRow(int rowIndex) {
//	/*vector<int> result;
//	result.push_back(1);
//	if (rowIndex == 0)
//	{
//		return result;
//	}
//	for (int i = 1; i <= rowIndex; i++)
//	{
//		int size = result.size() - 1;
//		vector<int> tmp;
//		tmp.push_back(1);
//		int num = result[0];
//		for (int j = 1; j <= size; j++)
//		{
//			tmp.push_back(num + result[j]);
//			num = result[j];
//		}
//		tmp.push_back(1);
//		result = tmp;
//	}
//	return result;*/
//
//	vector<int> res(rowIndex + 1, 0);
//	res[0] = 1;
//	for (int i = 1; i < rowIndex + 1; i++)
//	{
//		for (int j = i; j >= 1; j--)
//			res[j] += res[j - 1];
//	}
//	return res;
//}
//
//int minimumTotal(vector<vector<int>>& triangle) {
//	int size = triangle.size();
//	if (size == 0)
//	{
//		return 0;
//	}
//	if (size == 1)
//	{
//		return triangle[0][0];
//	}
//	vector<int> tmp = triangle.back();
//	int pre = tmp[0];
//	for (int i = 1; i < size; i++)
//	{
//		if (pre < tmp[i])
//		{
//			triangle[size - 2][i - 1] += pre;
//		}
//		else
//		{
//			triangle[size - 2][i - 1] += tmp[i];
//		}
//		pre = tmp[i];
//	}
//	triangle.pop_back();
//	return minimumTotal(triangle);
//}
//
////一次买卖
//int maxProfit(vector<int>& prices) {
//	int size = prices.size();
//	if (size == 0 || size == 1)
//	{
//		return 0;
//	}
//	int min = prices[0];
//	int maxProfit = 0;
//	for (int i = 1; i < size; i++)
//	{
//		if (prices[i] < min)
//		{
//			min = prices[i];
//		}
//		else
//		{
//			if (prices[i] - min > maxProfit)
//			{
//				maxProfit = prices[i] - min;
//			}
//		}
//	}
//	return maxProfit;
//}
//
////不限次数
//int maxProfit2(vector<int>& prices) {
//	//int size = prices.size();
//	//if (size == 0 || size == 1)
//	//{
//	//	return 0;
//	//}
//	//bool fall = true;
//	//int min = prices[0];
//	//int max = prices[0];
//	//int result = 0;
//	//for (int i = 1; i < size; i++)
//	//{
//	//	if (fall)
//	//	{
//	//		if (prices[i] < min)
//	//		{
//	//			min = prices[i];
//	//		}
//	//		else
//	//		{
//	//			fall = false;
//	//			max = prices[i];
//	//		}
//	//	}
//	//	else
//	//	{
//	//		if (prices[i] > max)
//	//		{
//	//			max = prices[i];
//	//		}
//	//		else
//	//		{
//	//			result += max - min;
//	//			min = prices[i];
//	//			fall = true;
//	//		}
//	//	}
//	//}
//	//if (!fall)
//	//{
//	//	result += max - min;
//	//}
//	//return result;
//
//	int size = prices.size();
//	if (size == 0 || size == 1)
//	{
//		return 0;
//	}
//	int pre = prices[0];
//	int result = 0;
//	for (int i = 1; i < size; i++)
//	{
//		if (prices[i] > pre)
//		{
//			result += prices[i] - pre;
//		}
//		pre = prices[i];
//	}
//	return result;
//}
//
////最多两次，状态机解法
//int maxProfit3(vector<int>& prices) {
//	int size = prices.size();
//	if (size == 0)
//	{
//		return 0;
//	}
//	vector<vector<vector<int>>> dp(size, vector<vector<int>>(3, vector<int>(2)));
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 1; j <= 2; j++)
//		{
//			if (i == 0)
//			{
//				dp[i][j][0] = 0;
//				dp[i][j][1] = -prices[i];
//				continue;
//			}
//			dp[i][j][0] = max(dp[i - 1][j][0], dp[i - 1][j][1] + prices[i]);
//			dp[i][j][1] = max(dp[i - 1][j][1], dp[i - 1][j - 1][0] - prices[i]);
//		}
//	}
//	return dp[size - 1][2][0];
//}
//
////curMax为目前为止的最大值
//int diguiMaxPathSum(TreeNode* root, int &curMax)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	int val = root->val;
//	int left = diguiMaxPathSum(root->left, curMax);
//	int right = diguiMaxPathSum(root->right, curMax);
//	int res = max(max(left, right), 0) + val;	//当前点加较长子串的长度
//	int ret = val + max(0, left) + max(0, right);//当前点加两个子串的长度
//	curMax = max(curMax, max(ret, res));
//	return res;
//}
//int maxPathSum(TreeNode* root) {
//	int res = INT_MIN;
//	diguiMaxPathSum(root, res);
//	return res;
//}
//
//bool isPalindrome(string s) {
//	int size = s.size();
//	int pre = 0;
//	int bot = size - 1;
//	while (pre <= bot)
//	{
//		char preC = s[pre];
//		while (preC < '0' || (preC<'A'&&preC>'9') || (preC<'a'&&preC>'Z') || preC>'z')
//		{
//			pre++;
//			if (pre > bot)
//			{
//				return true;
//			}
//			preC = s[pre];
//		}
//		char botC = s[bot];
//		while (botC < '0' || (botC<'A'&&botC>'9') || (botC<'a'&&botC>'Z') || botC>'z')
//		{
//			bot--;
//			if (bot < pre)
//			{
//				return true;
//			}
//			botC = s[bot];
//		}
//		if (preC != botC)
//		{
//			if (preC >= 'a'|| botC >= 'a')
//			{
//				if (botC + 32 == preC || preC + 32 == botC)
//				{
//					pre++;
//					bot--;
//					continue;
//				}
//			}
//			return false;
//		}
//		pre++;
//		bot--;
//	}
//	return true;
//}
//
//void diguiFindLadders(string beginWord, string endWord, map<string,vector<string>>& nearWords, vector<string> tmp, int &size)
//{
//	tmp.push_back(beginWord);
//	if (beginWord == endWord)
//	{
//		if (tmp.size() <= size)
//		{
//			size = tmp.size();
//			result1.push_back(tmp);
//		}
//		return;
//	}
//	vector<string> near = nearWords[beginWord];
//	for (auto it = near.begin(); it != near.end(); it++)
//	{
//		auto iter = find(tmp.begin(), tmp.end(), *it);
//		if(iter!=tmp.end())
//		{
//			continue;
//		}
//		diguiFindLadders(*it, endWord, nearWords, tmp, size);
//	}
//}
//vector<string> SearchNearWord(string word, vector<string> wordList)
//{
//	vector<string> res;
//	int size = word.size();
//	for (auto it = wordList.begin(); it != wordList.end(); it++)
//	{
//		bool b = false;
//		for (int i = 0; i < size; i++)
//		{
//			if (word[i] != (*it)[i])
//			{
//				if (b)
//				{
//					b = false;
//					break;
//				}
//				b = true;
//			}
//		}
//		if (!b)
//		{
//			continue;
//		}
//		res.push_back(*it);
//	}
//	return res;
//}
//vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
//	int size = wordList.size() + 1;
//	map<string, vector<string>> nearWords;
//	vector<string> tmp;
//	vector<string> near = SearchNearWord(beginWord, wordList);
//	nearWords.insert({ beginWord,near });
//	for (auto it = wordList.begin(); it != wordList.end(); it++)
//	{
//		if (*it == endWord)
//		{
//			continue;
//		}
//		vector<string> near = SearchNearWord(*it, wordList);
//		nearWords.insert({ *it,near });
//	}
//	diguiFindLadders(beginWord, endWord, nearWords, tmp, size);
//	for (auto it = result1.begin(); it != result1.end();)
//	{
//		if ((*it).size() > size)
//		{
//			it = result1.erase(it);
//		}
//		else
//		{
//			it++;
//		}
//	}
//	return result1;
//}
//
//bool check(vector<vector<int>>& dp)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		if (dp[0][i] != 0 && dp[1][i] == dp[0][i] && dp[2][i] == dp[0][i])
//		{
//			return true;
//		}
//		if (dp[i][0] != 0 && dp[i][1] == dp[i][0] && dp[i][2] == dp[i][0])
//		{
//			return true;
//		}
//	}
//	if (dp[0][0] != 0 && dp[1][1] == dp[0][0] && dp[2][2] == dp[0][0])
//	{
//		return true;
//	}
//	if (dp[2][0] != 0 && dp[1][1] == dp[2][0] && dp[0][2] == dp[1][1])
//	{
//		return true;
//	}
//	return false;
//}
//string tictactoe(vector<vector<int>>& moves) {
//	vector<vector<int>> dp(3, vector<int>(3, 0));
//	int size = moves.size();
//	if (size < 5)
//	{
//		return "Pending";
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		int x = moves[i][0];
//		int y = moves[i][1];
//		if (i % 2)
//		{
//			dp[x][y] = 1;
//		}
//		else
//		{
//			dp[x][y] = 2;
//		}
//	}
//	for (int i = 4; i < moves.size(); i++)
//	{
//		int x = moves[i][0];
//		int y = moves[i][1];
//		if (i % 2)
//		{
//			dp[x][y] = 1;
//			if (check(dp))
//			{
//				return "A";
//			}
//		}
//		else
//		{
//			dp[x][y] = 2;
//			if (check(dp))
//			{
//				return "B";
//			}
//		}
//	}
//	if (size == 9)
//	{
//		return "Draw";
//	}
//	return "Pending";
//}
//
//int countSquares(vector<vector<int>>& matrix) {
//	int xSize = matrix.size();
//	int ySize = matrix[0].size();
//	for (int i = 0; i < xSize; i++)
//	{
//		for (int j = 0; j < ySize; j++)
//		{
//			if (matrix[i][j] != 0)
//			{
//				if (j - 1 >= 0)
//				{
//					matrix[i][j] = matrix[i][j - 1] + 1;
//				}
//				else
//				{
//					matrix[i][j] = 1;
//				}
//			}
//		}
//	}
//	int result = 0;
//	for (int i = 0; i < xSize; i++)
//	{
//		for (int j = 0; j < ySize; j++)
//		{
//			int tmp = matrix[i][j];
//			if (tmp == 1)
//			{
//				result++;
//			}
//			else if (tmp > 1)
//			{
//				result++;
//				for (int k = 1; k < tmp; k++)
//				{
//					if (i - k >= 0)
//					{
//						if (matrix[i-k][j] >= k + 1)
//						{
//							result++;
//							tmp = min(matrix[i-k][j], tmp);
//						}
//						else
//						{
//							break;
//						}
//					}
//					else
//					{
//						break;
//					}
//				}
//			}
//		}
//	}
//	return result;
//}
//
//int palindromePartition(string s, int k) {
//	int n = s.size();
//	vector<vector<int>> c(n, vector<int>(n));
//
//	auto go = [&](int x, int y)
//	{
//		int ret = 0;
//		while (x <= y)
//		{
//			if (s[x] != s[y]) ret++;
//			x++;
//			y--;
//		}
//		return ret;
//	};
//
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = i; j < n; ++j)
//		{
//			c[i][j] = go(i, j);
//		}
//	}
//	const int INF = 1000000000;
//	vector<vector<int>> f(n + 1, vector<int>(n + 1, INF));
//	f[0][0] = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 1; j <= k; ++j)
//		{
//			for (int x = 0; x < i; ++x)
//			{
//				f[i][j] = min(f[i][j], f[x][j - 1] + c[x][i - 1]);
//			}
//		}
//	}
//	return f[n][k];
//}
//
//int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
//	map<string, vector<string>> nearWords;
//	map<string, bool> f;
//	vector<string> tmp;
//	vector<string> near = SearchNearWord(beginWord, wordList);
//	nearWords.insert({ beginWord,near });
//	f.insert({ beginWord,false });
//	for (auto it = wordList.begin(); it != wordList.end(); it++)
//	{
//		f.insert({ *it,false });
//		if (*it == endWord)
//		{
//			continue;
//		}
//		vector<string> near = SearchNearWord(*it, wordList);
//		nearWords.insert({ *it,near });
//	}
//	list<string> tmpList;
//	tmpList.push_back(beginWord);
//	int size = 0;
//	while (!tmpList.empty())
//	{
//		list<string> tt;
//		size++;
//		for (auto it = tmpList.begin(); it != tmpList.end(); it++)
//		{
//			string s = *it;
//			if (s == endWord)
//			{
//				return size;
//			}
//			f[s] = true;
//			vector<string> near = nearWords[*it];
//			for (auto iter = near.begin(); iter != near.end(); iter++)
//			{
//				if (!f[*iter])
//				{
//					tt.push_back(*iter);
//				}
//			}
//		}
//		tmpList = tt;
//	}
//	return 0;
//}
//
////双向BFS
//int ladderLength2(string beginWord, string endWord, vector<string>& wordList) {
//	unordered_map<string, int> freqs;
//	for (const auto &word : wordList)
//		freqs[word] = 0;
//	if (freqs.count(endWord) == 0) return 0;
//	queue<string> q1({ beginWord }), q2({ endWord });
//	int step = 1;
//	for (freqs[beginWord] |= 1, freqs[endWord] |= 2; q1.size() && q2.size(); ++step) {
//		bool first = q1.size() < q2.size();
//		queue<string> &q = first ? q1 : q2;
//		int flag = first ? 1 : 2;
//		for (int size = q.size(); size--; q.pop()) {
//			string &word = q.front();
//			if (freqs[word] == 3) return step;
//			for (int i = 0; i < word.length(); ++i) {
//				for (char ch = 'a'; ch <= 'z'; ++ch) {
//					string s = word;
//					if (s[i] == ch) continue;
//					s[i] = ch;
//					if (freqs.count(s) == 0 || freqs[s] & flag) continue;
//					freqs[s] |= flag;
//					q.push(s);
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//int longestConsecutive(vector<int>& nums) {
//	int size = nums.size();
//	if (size == 0)
//	{
//		return 0;
//	}
//	sort(nums.begin(), nums.end());
//	int result = 1;
//	int tmp = 1;
//	int pre = nums[0];
//	for (int i = 1; i < size; i++)
//	{
//		if (nums[i] == pre + 1)
//		{
//			tmp++;
//		}
//		else if (nums[i] != pre)
//		{
//			tmp = 1;
//			if (tmp > result)
//			{
//				result = tmp;
//			}
//		}
//		pre = nums[i];
//	}
//	return tmp > result ? tmp : result;
//
//	//非排序解法
//	//unordered_set<int> H(nums.begin(), nums.end());
//	//int ans = 0;
//	//for (auto x : nums) {
//	//	if (H.count(x - 1)) continue;
//	//	int a = x;
//	//	int b = 1;
//	//	while (H.count(a + 1)) {
//	//		a += 1;
//	//		b += 1;
//	//	}
//	//	ans = max(ans, b);
//	//}
//	//return ans;
//}
//
//int diguiNum(TreeNode* root, int num)
//{
//	num = num * 10 + root->val;
//	if (root->right != NULL && root->left != NULL)
//	{
//		return diguiNum(root->left, num) + diguiNum(root->right, num);
//	}
//	if (root->left == NULL)
//	{
//		if (root->right == NULL)
//		{
//			return num;
//		}
//		else
//		{
//			return diguiNum(root->right, num);
//		}
//	}
//	else
//	{
//		return diguiNum(root->left, num);
//	}
//}
//int sumNumbers(TreeNode* root) {
//	if (root == NULL)
//	{
//		return 0;
//	}
//	return diguiNum(root, 0);
//}
//
//void diguiSearchNearO(int i, int j, vector<vector<char>>& board, int& xSize, int& ySize)
//{
//	board[i][j] = '$';
//	if (i + 1 < xSize)
//	{
//		if (board[i + 1][j] == 'O')
//		{
//			diguiSearchNearO(i + 1, j, board, xSize, ySize);
//		}
//	}
//	if (i - 1 >= 0)
//	{
//		if (board[i - 1][j] == 'O')
//		{
//			diguiSearchNearO(i - 1, j, board, xSize, ySize);
//		}
//	}
//	if (j + 1 < ySize)
//	{
//		if (board[i][j + 1] == 'O')
//		{
//			diguiSearchNearO(i, j + 1, board, xSize, ySize);
//		}
//	}
//	if (j - 1 >= 0)
//	{
//		if (board[i][j - 1] == 'O')
//		{
//			diguiSearchNearO(i, j - 1, board, xSize, ySize);
//		}
//	}
//}
//void solve(vector<vector<char>>& board) {
//	int xSize = board.size();
//	if (xSize == 0)
//	{
//		return;
//	}
//	int ySize = board[0].size();
//	for (int i = 0; i < xSize; i++)
//	{
//		if (board[i][0] == 'O')
//		{
//			diguiSearchNearO(i, 0, board, xSize, ySize);
//		}
//		if (board[i][ySize-1] == 'O')
//		{
//			diguiSearchNearO(i, ySize - 1, board, xSize, ySize);
//		}
//	}
//	for (int i = 0; i < ySize; i++)
//	{
//		if (board[0][i] == 'O')
//		{
//			diguiSearchNearO(0, i, board, xSize, ySize);
//		}
//		if (board[xSize - 1][i] == 'O')
//		{
//			diguiSearchNearO(xSize - 1, i, board, xSize, ySize);
//		}
//	}
//	for (int i = 0; i < xSize; i++)
//	{
//		for (int j = 0; j < ySize; j++)
//		{
//			if (board[i][j] == 'O')
//			{
//				board[i][j] = 'X';
//			}
//			else if (board[i][j] == '$')
//			{
//				board[i][j] = 'O';
//			}
//		}
//	}
//}
//
//void diguiPartition(vector<vector<bool>>& dp, int i, int j, vector<string> tmp, int size, string s)
//{
//	tmp.push_back(s.substr(i, j - i + 1));
//	if (j == size - 1)
//	{
//		result1.push_back(tmp);
//	}
//	for (int k = j + 1; k < size; k++)
//	{
//		if (dp[j + 1][k] == 1)
//		{
//			diguiPartition(dp, j + 1, k, tmp, size, s);
//		}
//	}
//}
//vector<vector<string>> partition(string s) {
//	int size = s.size();
//	//i，j之间的字符串是否是回文串
//	vector<vector<bool>> dp(size, vector<bool>(size, false));
//	auto go = [&](int x, int y)
//	{
//		int ret = 0;
//		while (x <= y)
//		{
//			if (s[x] != s[y]) return false;
//			x++;
//			y--;
//		}
//		return true;
//	};
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i; j < size; j++)
//		{
//			dp[i][j] = go(i, j);
//		}
//	}
//	vector<string> tmp;
//	for (int i = 0; i < size; i++)
//	{
//		if (dp[0][i] == 1)
//		{
//			diguiPartition(dp, 0, i, tmp, size, s);
//		}
//	}
//	return result1;
//}
//
//int diguiMinCut(vector<vector<bool>>& dp, int i, int size, string s, map<int, int>& h)
//{
//	if (h.count(i))
//	{
//		return h[i];
//	}
//	if (dp[i][size - 1] == 1)
//	{
//		return 0;
//	}
//	int t = size;
//	for (int k = i; k < size; k++)
//	{
//		if (dp[i][k] == 1)
//		{
//			t = min(t, 1 + diguiMinCut(dp, k + 1, size, s, h));
//		}
//	}
//	h.insert({ i, t });
//	return t;
//}
//int minCut(string s) {
//	int size = s.size();
//	int res = size - 1;
//	//i，j之间的字符串是否是回文串
//	vector<vector<bool>> dp(size, vector<bool>(size, false));
//	auto go = [&](int x, int y)
//	{
//		int ret = 0;
//		while (x <= y)
//		{
//			if (s[x] != s[y]) return false;
//			x++;
//			y--;
//		}
//		return true;
//	};
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i; j < size; j++)
//		{
//			dp[i][j] = go(i, j);
//		}
//	}
//	map<int, int> h;
//	return	diguiMinCut(dp, 0, size, s, h);
//}
//
//Node* diguiCloneGraph(Node* node, map<Node*, Node*>& m)
//{
//	Node* res = new Node();
//	res->val = node->val;
//	m.insert({ node,res });
//	vector<Node*> nei = node->neighbors;
//	for (auto it = nei.begin(); it != nei.end(); it++)
//	{
//		if (m.count(*it) == 0)
//		{
//			res->neighbors.push_back(diguiCloneGraph(*it, m));
//		}
//		else
//		{
//			res->neighbors.push_back(m[*it]);
//		}
//	}
//	return res;
//}
//Node* cloneGraph(Node* node) {
//	if (node == NULL)
//	{
//		return NULL;
//	}
//	map<Node*, Node*> m;
//	return diguiCloneGraph(node, m);
//}
//
//int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//	int size = gas.size();
//	vector<int> tmp(size * 2 - 1, 0);
//	for (int i = 0; i < size; i++)
//	{
//		if (i != size - 1)
//		{
//			tmp[i + size] = gas[i] - cost[i];
//		}
//		tmp[i] = gas[i] - cost[i];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		if (tmp[i] < 0)
//		{
//			continue;
//		}
//		int t = tmp[i];
//		int j = 1;
//		while (j < size)
//		{
//			t += tmp[i + j];
//			if (t < 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (t >= 0)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//int candy(vector<int>& ratings) {
//	int size = ratings.size();
//	if (size == 0)
//	{
//		return 0;
//	}
//	vector<int> left(size, 1);
//	vector<int> right(size, 1);
//	int pre = ratings[0];
//	for (int i = 1; i < size; i++)
//	{
//		if (ratings[i] > pre)
//		{
//			left[i] = left[i - 1] + 1;
//		}
//		pre = ratings[i];
//	}
//	for (int i = size - 2; i >= 0; i--)
//	{
//		if (ratings[i] > pre)
//		{
//			right[i] = right[i + 1] + 1;
//		}
//		pre = ratings[i];
//	}
//	int result = 0;
//	for (int i = 0; i < size; i++)
//	{
//		result += max(left[i], right[i]);
//	}
//	return result;
//}
//
//int singleNumber(vector<int>& nums) {
//	for (int i = 1; i < nums.size(); i++)
//	{
//		nums[i] = (nums[i - 1] ^ nums[i]);
//	}
//	return nums.back();
//}
//
//int singleNumber2(vector<int>& nums) {
//	/*unordered_map<int, int> m;
//	for (auto it = nums.begin(); it != nums.end(); it++)
//	{
//		if (m.count(*it))
//		{
//			m[*it]++;
//		}
//		else
//		{
//			m.insert({ *it,1 });
//		}
//	}
//	for (auto it = m.begin(); it != m.end(); it++)
//	{
//		if ((*it).second == 1)
//		{
//			return (*it).first;
//		}
//	}
//	return 0;*/
//
//	//模拟无进位的三进制数相加
//	int once = 0;
//	int twice = 0;
//	for (auto it : nums)
//	{
//		once = once ^ it&~twice;
//		twice = twice ^ it&~once;
//	}
//	return once;
//}
//
//Node2* diguiCopyRandomList(Node2* head, map<Node2*, Node2*> &m)
//{
//	if (m.count(head))
//	{
//		return m[head];
//	}
//	Node2* res = new Node2();
//	res->val = head->val;
//	m.insert({ head, res });
//	if (head->next != NULL)
//	{
//		res->next = diguiCopyRandomList(head->next, m);
//	}
//	if (head->random != NULL)
//	{
//		res->random = diguiCopyRandomList(head->random, m);
//	}
//	return res;
//}
//Node2* copyRandomList(Node2* head) {
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	map<Node2*, Node2*> m;
//	return diguiCopyRandomList(head, m);
//}
//
//bool huisuWordBreak(int start, string& s, unordered_set<string> &set, vector<bool> &dp)
//{
//	int size = s.size() - start;
//	if (size == 0)
//	{
//		return true;
//	}
//	for (int i = 1; i <= size; i++)
//	{
//		if (dp[start + i] == 1 && set.count(s.substr(start, i)))
//		{
//			if (huisuWordBreak(start + i, s, set, dp))
//			{
//				return true;
//			}
//			else
//			{
//				dp[start + i] = 0;
//			}
//		}
//	}
//	return false;
//}
//bool wordBreak(string s, vector<string>& wordDict) {
//	unordered_set<string> set;
//	for (auto it : wordDict)
//	{
//		set.insert(it);
//	}
//	vector<bool> dp(s.size() + 1, 1);		//第i位之后的数字是否匹配
//	return huisuWordBreak(0, s, set, dp);
//}
//
//vector<string> huisuWordBreak2(int start, string& s, unordered_set<string> &set, map<int, vector<string>> &dp)
//{
//	int size = s.size() - start;
//	vector<string> res;
//	for (int i = 1; i <= size; i++)
//	{
//		string tmp = s.substr(start, i);
//		if (set.count(tmp))
//		{
//			if (dp.count(start + i))
//			{
//				vector<string> v = dp[start + i];
//				for (auto it : v)
//				{
//					res.push_back(tmp + " " + it);
//				}
//				continue;
//			}
//			if (i == size)
//			{
//				res.push_back(tmp);
//			}
//			else
//			{
//				vector<string> v = huisuWordBreak2(start + i, s, set, dp);
//				dp.insert({ start + i, v });
//				for (auto it : v)
//				{
//					res.push_back(tmp + " " + it);
//				}
//			}
//		}
//	}
//	return res;
//}
//vector<string> wordBreak2(string s, vector<string>& wordDict) {
//	unordered_set<string> set;
//	for (auto it : wordDict)
//	{
//		set.insert(it);
//	}
//	string tmp;
//	map<int, vector<string>> dp;
//	return huisuWordBreak2(0, s, set, dp);
//}
//
//bool hasCycle(ListNode *head) {
//	//unordered_set<ListNode*> set;
//	//while (head != NULL)
//	//{
//	//	if (set.count(head))
//	//	{
//	//		return true;
//	//	}
//	//	set.insert(head);
//	//	head = head->next;
//	//}
//	//return false;
//
//	//双指针
//	if (head == NULL || head->next == NULL)
//	{
//		return false;
//	}
//	ListNode* fast = head->next;
//	ListNode* slow = head;
//	while (fast != slow)
//	{
//		if (fast == NULL || fast->next == NULL)
//		{
//			return false;
//		}
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	return true;
//}
//
//ListNode *detectCycle(ListNode *head) {
//	unordered_set<ListNode*> set;
//	while (head != NULL)
//	{
//		if (set.count(head))
//		{
//			return head;
//		}
//		set.insert(head);
//		head = head->next;
//	}
//	return NULL;
//}
//
//void reorderList(ListNode* head) {
//	if (head == NULL)
//	{
//		return;
//	}
//	vector<ListNode*> tmp;
//	while (head != NULL)
//	{
//		tmp.push_back(head);
//		head = head->next;
//	}
//	int i = 0;
//	int j = tmp.size() - 1;
//	while (i < j)
//	{
//		tmp[i]->next = tmp[j];
//		tmp[j]->next = tmp[i + 1];
//		i++;
//		j--;
//	}
//	tmp[i]->next = NULL;
//}
//
//void diguiPreorderTraversal(TreeNode *root, vector<int>& res)
//{
//	res.push_back(root->val);
//	if (root->left != NULL)
//	{
//		diguiPreorderTraversal(root->left, res);
//	}
//	if (root->right != NULL)
//	{
//		diguiPreorderTraversal(root->right, res);
//	}
//}
//TreeNode* getLeftMostRight(TreeNode* root) {
//	auto node = root->left;
//	while (node != NULL && node->right != NULL && node->right != root) {
//		node = node->right;
//	}
//	return node;
//}
//vector<int> preorderTraversal(TreeNode* root) {
//	//vector<int> res;
//	//if (root == NULL)
//	//{
//	//	return res;
//	//}
//	//diguiPreorderTraversal(root, res);
//	//return res;
//
//	//迭代法
//	/*vector<int> res;
//	if (root == NULL)
//	{
//		return res;
//	}
//	vector<TreeNode*> tmp;
//	tmp.push_back(root);
//	while (!tmp.empty())
//	{
//		TreeNode* t = tmp.back();
//		res.push_back(t->val);
//		tmp.pop_back();
//		if (t->right != NULL)
//		{
//			tmp.push_back(t->right);
//		}
//		if (t->left != NULL)
//		{
//			tmp.push_back(t->left);
//		}
//	}
//	return res;*/
//
//	//莫里斯遍历
//	vector<int> res;
//	while (root) {
//		if (root->left == NULL) {
//			res.push_back(root->val);
//			root = root->right;
//		}
//		else {
//			auto node = getLeftMostRight(root);
//			if (node->right == root) {
//				node->right = NULL;
//				root = root->right;
//			}
//			else {
//				res.push_back(root->val);
//				node->right = root;
//				root = root->left;
//			}
//		}
//	}
//	return res;
//}
//
//vector<int> postorderTraversal(TreeNode* root) {
//	vector<int> res;
//	if (root == NULL)
//	{
//		return res;
//	}
//	vector<TreeNode*> tmp;
//	tmp.push_back(root);
//	while (!tmp.empty())
//	{
//		TreeNode* t = tmp.back();
//		res.push_back(t->val);
//		tmp.pop_back();
//		if (t->left != NULL)
//		{
//			tmp.push_back(t->left);
//		}
//		if (t->right != NULL)
//		{
//			tmp.push_back(t->right);
//		}
//	}
//	reverse(res.begin(), res.end());
//	return res;
//}
//
//class LRUCache {
//public:
//	LRUCache(int capacity) : capacity_(capacity) {}
//
//	int get(int key) {
//		if (hash_.find(key) == hash_.end())
//			return -1;
//		else {
//			int value = hash_[key]->second;
//			ls_.erase(hash_[key]);
//			ls_.push_front(make_pair(key, value));
//			hash_[key] = ls_.begin();
//			return value;
//		}
//	}
//
//	void put(int key, int value) {
//		if (hash_.find(key) != hash_.end())
//			ls_.erase(hash_[key]);
//		else if (ls_.size() >= capacity_) {
//			hash_.erase(ls_.back().first);
//			ls_.pop_back();
//		}
//		ls_.push_front(make_pair(key, value));
//		hash_[key] = ls_.begin();
//	}
//
//private:
//	int capacity_;
//	list<pair<int, int>> ls_;
//	unordered_map<int, list<pair<int, int>>::iterator> hash_;
//};
//
//ListNode* insertionSortList(ListNode* head) {
//	if (head == NULL || head->next == NULL)
//	{
//		return head;
//	}
//	ListNode* res = head;
//	ListNode* ppre = head;
//	ListNode* pre = head->next;
//	while (pre != NULL)
//	{
//		ListNode* tmp = res;
//		ListNode* t = NULL;
//		while (pre->val >= tmp->val&&tmp != ppre)
//		{
//			t = tmp;
//			tmp = tmp->next;
//		}
//		if (tmp->val >= pre->val)
//		{
//			if (t == NULL)
//			{
//				res = pre;
//			}
//			else
//			{
//				t->next = pre;
//			}
//			ppre->next = pre->next;
//			pre->next = tmp;
//			pre = ppre->next;
//		}
//		else
//		{
//			ppre = pre;
//			pre = pre->next;
//		}
//	}
//	return res;
//}
//
//pair<int, int> calK(int x1, int y1, int x2, int y2)
//{
//	if (x1 == x2)
//	{
//		return { 0,1 };
//	}
//	if (y1 == y2)
//	{
//		return { 1,0 };
//	}
//	int a = x1 - x2;
//	int b = y1 - y2;
//	while (a != 0)
//	{
//		int temp = b % a;
//		b = a;
//		a = temp;
//	}
//	return { (x1 - x2) / b,(y1 - y2) / b };
//}
//int maxPoints(vector<vector<int>>& points) {
//	int size = points.size();
//	if (size == 0 || size == 1 || size == 2)
//	{
//		return size;
//	}
//	int result = 0;
//	for (int i = 0; i < size; i++)
//	{
//		map<pair<int, int>, int> m;
//		int num = 1;
//		for (int j = i + 1; j < size; j++)
//		{
//			if (points[i][0] == points[j][0] && points[i][1] == points[j][1])
//			{
//				num++;
//				continue;
//			}
//			pair<int,int> p = calK(points[i][0], points[i][1], points[j][0], points[j][1]);
//			if (m.count(p))
//			{
//				m[p]++;
//			}
//			else
//			{
//				m.insert({ p,1 });
//			}
//		}
//		int max = 0;
//		for (auto it = m.begin(); it != m.end(); it++)
//		{
//			if ((*it).second > max)
//			{
//				max = (*it).second;
//			}
//		}
//		max += num;
//		if (max > result)
//		{
//			result = max;
//		}
//	}
//	return result;
//}
//
////逆波兰表达式求值
//int evalRPN(vector<string>& tokens) {
//	int size = tokens.size();
//	vector<int> num;
//	for (int i = 0; i < size; i++)
//	{
//		if ((tokens[i][0] >= '0'&&tokens[i][0] <= '9') || tokens[i].size() > 1)
//		{
//			num.push_back(stoi(tokens[i]));
//		}
//		else
//		{
//			int b = num.back();
//			num.pop_back();
//			int a = num.back();
//			num.pop_back();
//			if (tokens[i][0] == '/')
//			{
//				a /= b;
//				num.push_back(a);
//			}
//			else if (tokens[i][0] == '+')
//			{
//				a += b;
//				num.push_back(a);
//			}
//			else if (tokens[i][0] == '-')
//			{
//				a -= b;
//				num.push_back(a);
//			}
//			else if (tokens[i][0] == '*')
//			{
//				a *= b;
//				num.push_back(a);
//			}
//		}
//	}
//	return num.back();
//}
//
//string reverseWords(string s) {
//	int size = s.size();
//	vector<string> tmp;
//	for (int i = 0; i < size; i++)
//	{
//		while (i < size&& s[i] == ' ')
//		{
//			i++;
//		}
//		int pre = i;
//		while (i < size&&s[i] != ' ')
//		{
//			i++;
//		}
//		if (i > pre)
//		{
//			tmp.push_back(s.substr(pre, i - pre));
//		}
//	}
//	string res;
//	while (!tmp.empty())
//	{
//		string t = tmp.back();
//		tmp.pop_back();
//		res += t + " ";
//	}
//	res.pop_back();
//	return res;
//}
//
//int maxProduct(vector<int>& nums) {
//	//int size = nums.size();
//	//if (size == 1)
//	//{
//	//	return nums[0];
//	//}
//	//int firstNeg = -1;
//	//int lastNeg = -1;
//	//int lastZero = -1;
//	//int negNum = 0;
//	//int result = 0;
//	//for (int i = 0; i < size; i++)
//	//{
//	//	if (nums[i] == 0)
//	//	{
//	//		//全为正数
//	//		if (firstNeg == -1)
//	//		{
//	//			if (i - lastZero != 1)
//	//			{
//	//				int tmp = 1;
//	//				for (int j = lastZero + 1; j < i; j++)
//	//				{
//	//					tmp *= nums[j];
//	//				}
//	//				if (tmp > result)
//	//				{
//	//					result = tmp;
//	//				}
//	//			}
//	//		}
//	//		else
//	//		{
//	//			if (negNum % 2 == 0)
//	//			{
//	//				int tmp = 1;
//	//				for (int j = lastZero + 1; j < i; j++)
//	//				{
//	//					tmp *= nums[j];
//	//				}
//	//				if (tmp > result)
//	//				{
//	//					result = tmp;
//	//				}
//	//			}
//	//			else
//	//			{
//	//				if (firstNeg == lastNeg)
//	//				{
//	//					if (i - lastZero != 2)
//	//					{
//	//						int tmp = 1;
//	//						for (int j = lastZero + 1; j < firstNeg; j++)
//	//						{
//	//							tmp *= nums[j];
//	//						}
//	//						if (tmp > result)
//	//						{
//	//							result = tmp;
//	//						}
//	//						tmp = 1;
//	//						for (int j = firstNeg + 1; j < i; j++)
//	//						{
//	//							tmp *= nums[j];
//	//						}
//	//						if (tmp > result)
//	//						{
//	//							result = tmp;
//	//						}
//	//					}
//	//				}
//	//				else
//	//				{
//	//					int tmp = 1;
//	//					for (int j = lastZero + 1; j < lastNeg; j++)
//	//					{
//	//						tmp *= nums[j];
//	//					}
//	//					if (tmp > result)
//	//					{
//	//						result = tmp;
//	//					}
//	//					tmp = 1;
//	//					for (int j = firstNeg + 1; j < i; j++)
//	//					{
//	//						tmp *= nums[j];
//	//					}
//	//					if (tmp > result)
//	//					{
//	//						result = tmp;
//	//					}
//	//				}
//	//			}
//	//		}
//	//		lastZero = i;
//	//		lastNeg = -1;
//	//		firstNeg = -1;
//	//		negNum = 0;
//	//	}
//	//	else if (nums[i] < 0)
//	//	{
//	//		if (firstNeg == -1)
//	//		{
//	//			firstNeg = i;
//	//		}
//	//		lastNeg = i;
//	//		negNum++;
//	//	}
//	//}
//	//if (firstNeg == -1)
//	//{
//	//	if (size - lastZero != 1)
//	//	{
//	//		int tmp = 1;
//	//		for (int j = lastZero + 1; j < size; j++)
//	//		{
//	//			tmp *= nums[j];
//	//		}
//	//		if (tmp > result)
//	//		{
//	//			result = tmp;
//	//		}
//	//	}
//	//}
//	//else
//	//{
//	//	if (negNum % 2 == 0)
//	//	{
//	//		int tmp = 1;
//	//		for (int j = lastZero + 1; j < size; j++)
//	//		{
//	//			tmp *= nums[j];
//	//		}
//	//		if (tmp > result)
//	//		{
//	//			result = tmp;
//	//		}
//	//	}
//	//	else
//	//	{
//	//		if (firstNeg == lastNeg)
//	//		{
//	//			if (size - lastZero == 2)
//	//			{
//	//				return result;
//	//			}
//	//			int tmp = 1;
//	//			for (int j = lastZero + 1; j < firstNeg; j++)
//	//			{
//	//				tmp *= nums[j];
//	//			}
//	//			if (tmp > result)
//	//			{
//	//				result = tmp;
//	//			}
//	//			tmp = 1;
//	//			for (int j = firstNeg + 1; j < size; j++)
//	//			{
//	//				tmp *= nums[j];
//	//			}
//	//			if (tmp > result)
//	//			{
//	//				result = tmp;
//	//			}
//	//		}
//	//		else
//	//		{
//	//			int tmp = 1;
//	//			for (int j = lastZero + 1; j < lastNeg; j++)
//	//			{
//	//				tmp *= nums[j];
//	//			}
//	//			if (tmp > result)
//	//			{
//	//				result = tmp;
//	//			}
//	//			tmp = 1;
//	//			for (int j = firstNeg + 1; j < size; j++)
//	//			{
//	//				tmp *= nums[j];
//	//			}
//	//			if (tmp > result)
//	//			{
//	//				result = tmp;
//	//			}
//	//		}
//	//	}
//	//}
//	//return result;
//
////大神解法
//	int size = nums.size();
//	if (size == 1)
//	{
//		return nums[0];
//	}
//	int res = 0;
//	int imax = 1;
//	int imin = 1;
//	for (int i = 0; i < size; i++)
//	{
//		if (nums[i] < 0)
//		{
//			int tmp = imax;
//			imax = imin;
//			imin = tmp;
//		}
//		imax = max(imax*nums[i], nums[i]);
//		imin = min(imin*nums[i], nums[i]);
//		res = max(imax, res);
//	}
//	return res;
//}
//
//int findMin(vector<int>& nums) {
//	int size = nums.size();
//	if (size == 1)
//	{
//		return nums[0];
//	}
//	int left = 0;
//	int right = size - 1;
//	int min = nums[0];
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		//左侧有序，最小值在右边
//		if (nums[mid] >= nums[left])
//		{
//			if (nums[left] < min)
//			{
//				min = nums[left];
//			}
//			left = mid + 1;
//		}
//		else
//		{
//			if (nums[mid] < min)
//			{
//				min = nums[mid];
//			}
//			right = mid - 1;
//		}
//	}
//	return min;
//}
//
//int findMin1(vector<int>& nums) {
//	int size = nums.size();
//	if (size == 1)
//	{
//		return nums[0];
//	}
//	int left = 0;
//	int right = size - 1;
//	int min = nums[0];
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		//左侧有序，最小值在右边
//		if (nums[mid] >= nums[left])
//		{
//			if (nums[mid] == nums[right])
//			{
//				int min1 = nums[left];
//				int min2 = nums[right];
//				if (mid != left)
//				{
//					vector<int> tmp1(nums.begin() + left, nums.begin() + mid);
//					min1 = findMin1(tmp1);
//				}
//				if (mid != right)
//				{
//					vector<int> tmp2(nums.begin() + mid, nums.begin() + right);
//					min2 = findMin1(tmp2);
//				}
//				min = std::min(min, min2);
//				min = std::min(min, min1);
//				return min;
//			}
//			else
//			{
//				if (nums[left] < min)
//				{
//					min = nums[left];
//				}
//				left = mid + 1;
//			}
//		}
//		else
//		{
//			if (nums[mid] < min)
//			{
//				min = nums[mid];
//			}
//			right = mid - 1;
//		}
//	}
//	return min;
//}
//
//class MinStack {
//public:
//	/** initialize your data structure here. */
//	MinStack() {
//
//	}
//
//	void push(int x) {
//		val.push_back(x);
//		if (min.size() == 0 || min.back() > x)
//		{
//			min.push_back(x);
//		}
//	}
//
//	void pop() {
//		if (val.back() == min.back())
//		{
//			min.pop_back();
//		}
//		val.pop_back();
//	}
//
//	int top() {
//		return val.back();
//	}
//
//	int getMin() {
//		return min.back();
//	}
//private:
//	vector<int> val;
//	vector<int> min;
//};
//
////检测两个链表是否相交
//ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//	if (headA == NULL || headB == NULL)
//	{
//		return NULL;
//	}
//	ListNode* pa = headA;
//	ListNode* pb = headB;
//	while (pa != pb)
//	{
//		pa = pa == NULL ? headB : pa->next;
//		pb = pb == NULL ? headA : pb->next;
//	}
//	return pa;
//}
//
//int findPeakElement(vector<int>& nums) {
//	int size = nums.size();
//	int left = 0;
//	int right = size - 1;
//	while (right > left)
//	{
//		int mid = (left + right) / 2;
//		if (nums[mid] < nums[mid + 1])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid;
//		}
//	}
//	return left;
//}
//
//int maximumGap(vector<int>& nums) {
//	int size = nums.size();
//	if (size < 2)
//	{
//	return 0;
//	}
//	sort(nums.begin(), nums.end());
//	int pre = nums[0];
//	int res = 0;
//	for (int i = 1; i < size; i++)
//	{
//		if (nums[i] > pre)
//		{
//			int tmp = nums[i] - pre;
//			if (tmp > res)
//			{
//				res = tmp;
//			}
//		}
//		else
//		{
//			int tmp = pre - nums[i];
//			if (tmp > res)
//			{
//				res = tmp;
//			}
//		}
//		pre = nums[i];
//	}
//	return res;
//}
//
//int compareVersion(string version1, string version2) {
//	version1 += ".";
//	version2 += ".";
//	int size1 = version1.size();
//	int size2 = version2.size();
//	int i1 = 0;
//	int i2 = 0;
//	while (i1 < size1&&i2 < size2)
//	{
//		string s1;
//		for (int i = i1; i < size1; i++)
//		{
//			if (version1[i] != '.')
//			{
//				s1.append(1, version1[i]);
//			}
//			else
//			{
//				i1 = i + 1;
//				break;
//			}
//		}
//		string s2;
//		for (int i = i2; i < size2; i++)
//		{
//			if (version2[i] != '.')
//			{
//				s2.append(1, version2[i]);
//			}
//			else
//			{
//				i2 = i + 1;
//				break;
//			}
//		}
//		int n1 = stoi(s1);
//		int n2 = stoi(s2);
//		if (n1 < n2)
//		{
//			return -1;
//		}
//		else if (n2 < n1)
//		{
//			return 1;
//		}
//	}
//	for (int i = i1; i < size1; i++)
//	{
//		if (version1[i] > '0'&&version1[i] <= '9')
//		{
//			return 1;
//		}
//	}
//	for (int i = i2; i < size2; i++)
//	{
//		if (version2[i] > '0'&&version2[i] <= '9')
//		{
//			return -1;
//		}
//	}
//	return 0;
//}
//
//string fractionToDecimal(int numerator, int denominator) {
//	unordered_map<int, int> exit;
//	string result;
//	long num = numerator;
//	long den = denominator;
//	if (num < 0 && den > 0)
//	{
//		num = -num;
//		result += "-";
//	}
//	else if (num > 0 && den < 0)
//	{
//		den = -den;
//		result += "-";
//	}
//	else if (num < 0 && den < 0)
//	{
//		num = -num;
//		den = -den;
//	}
//	result += to_string(num / den);
//	num %= den;
//	if (num == 0)
//	{
//		return result;
//	}
//	else
//	{
//		result.append(1, '.');
//	}
//	while (!exit.count(num))
//	{
//		if (num != 0)
//		{
//			exit.insert({ num,result.size() });
//			if (num < den)
//			{
//				num *= 10;
//			}
//		}
//		else
//		{
//			return result;
//		}
//		result.append(1, num / den + '0');
//		num %= den;
//	}
//	auto it = exit.find(num);
//	int index = (*it).second;
//	result = result.substr(0, index) + "(" + result.substr(index) + ")";
//	return result;
//}
//
//vector<int> twoSum(vector<int>& numbers, int target) {
//	int size = numbers.size();
//	for (int i = 0; i < size; i++)
//	{
//		int left = i + 1;
//		int right = size - 1;
//		int t = target - numbers[i];
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (numbers[mid] == t)
//			{
//				return { i + 1,mid + 1 };
//			}
//			else if (numbers[mid] < t)
//			{
//				left = mid + 1;
//			}
//			else
//			{
//				right = mid - 1;
//			}
//		}
//	}
//	return {};
//}
//
//string convertToTitle(int n) {
//	string result;
//	while (n != 0)
//	{
//		n--;
//		int tmp = n % 26;
//		char c = 'A' + tmp;
//		result.insert(0, 1, c);
//		n /= 26;
//	}
//	return result;
//}
//
//int majorityElement(vector<int>& nums) {
//	sort(nums.begin(), nums.end());
//	int mid = nums.size() / 2;
//	return nums[mid];
//
//	//Boyer-Moore 投票算法
//	int tmp = nums[0];
//	int count = 1;
//	for (int i = 1; i < nums.size(); i++)
//	{
//		if (nums[i] != tmp)
//		{
//			count--;
//			if (count == 0)
//			{
//				tmp = nums[++i];
//				count = 1;
//			}
//		}
//		else
//		{
//			count++;
//		}
//	}
//	return tmp;
//}
//
//int titleToNumber(string s) {
//	int result = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		result = result * 26 + (s[i] - 'A' + 1);
//	}
//	return result;
//}
//
//int trailingZeroes(int n) {
//	int num5 = 0;
//	while (n != 0)
//	{
//		n /= 5;
//		num5 += n;
//	}
//	return num5;
//}
//
//class BSTIterator {
//public:
//	BSTIterator(TreeNode* root) {
//		diguiPreorderTraversal(root, this->val);
//	}
//
//	void diguiPreorderTraversal(TreeNode* root, list<int> &val)
//	{
//		if (root == NULL)
//		{
//			return;
//		}
//		diguiPreorderTraversal(root->left, val);
//		val.push_back(root->val);
//		diguiPreorderTraversal(root->right, val);
//	}
//
//	/** @return the next smallest number */
//	int next() {
//		int tmp = val.front();
//		val.pop_front();
//		return tmp;
//	}
//
//	/** @return whether we have a next smallest number */
//	bool hasNext() {
//		return !val.empty();
//	}
//private:
//	list<int> val;
//};
//
//int calculateMinimumHP(vector<vector<int>>& dungeon) {
//	int xSize = dungeon.size();
//	if (xSize == 0)
//	{
//		return 0;
//	}
//	int ySize = dungeon[0].size();
//	//first为到达该点时生命值的消耗，second为到目前为止最大生命值消耗
//	vector<vector<int>> dp(xSize, vector<int>(ySize));
//	dp[xSize - 1][ySize - 1] = dungeon[xSize - 1][ySize - 1] > 0 ? 1 : (1 - dungeon[xSize - 1][ySize - 1]);
//	for (int i = xSize - 2; i >= 0; i--)
//	{
//		dp[i][ySize - 1] = (dp[i + 1][ySize - 1] - dungeon[i][ySize - 1]) <= 0 ? 1 : (dp[i + 1][ySize - 1] - dungeon[i][ySize - 1]);
//	}
//	for (int j = ySize - 2; j >= 0; j--)
//	{
//		dp[xSize - 1][j] = (dp[xSize - 1][j + 1] - dungeon[xSize - 1][j]) <= 0 ? 1 : (dp[xSize - 1][j + 1] - dungeon[xSize - 1][j]);
//	}
//	for (int i = xSize - 2; i >= 0; i--)
//	{
//		for (int j = ySize - 2; j >= 0; j--)
//		{
//			dp[i][j] = (dp[i][j + 1] < dp[i + 1][j] ? dp[i][j + 1] : dp[i + 1][j]) - dungeon[i][j];
//			if (dp[i][j] <= 0)
//			{
//				dp[i][j] = 1;
//			}
//		}
//	}
//	return dp[0][0];
//}
//
//bool IsBalanced_Solution(TreeNode* pRoot) {
//	if (pRoot == NULL)
//	{
//		return true;
//	}
//	if (pRoot->left == NULL && pRoot->right != NULL)
//	{
//		if (pRoot->right->right != NULL || pRoot->right->left != NULL)
//		{
//			return false;
//		}
//	}
//	else if (pRoot->left == NULL && pRoot->right == NULL)
//	{
//		return true;
//	}
//	else if (pRoot->left != NULL && pRoot->right == NULL)
//	{
//		if (pRoot->left->right != NULL || pRoot->left->left != NULL)
//		{
//			return false;
//		}
//	}
//	else
//	{
//		return IsBalanced_Solution(pRoot->left) && IsBalanced_Solution(pRoot->right);
//	}
//}
//
//void FindNumsAppearOnce(vector<int> data, int* num1, int *num2) {
//	int tmp = 0;
//	for (auto &d : data)
//	{
//		tmp ^= d;
//	}
//	int tmp1 = 1;
//	while ((tmp&tmp1) == 0)
//	{
//		tmp1 = tmp1 << 1;
//	}
//	int tmp2, tmp3 = 0;
//	for (auto &d : data)
//	{
//		if ((d&tmp1) == 0)
//		{
//			tmp2 ^= d;
//		}
//		else
//		{
//			tmp3 ^= d;
//		}
//	}
//	*num1 = tmp2;
//	*num2 = tmp3;
//}
//
//vector<vector<int> > FindContinuousSequence(int sum) {
//	int i = (sum + 1) / 2;
//	vector<vector<int>> res;
//	while (i >=2)
//	{
//		if (i%2==0)
//		{
//			if (sum%i==i/2)
//			{
//				int tmp = sum / i;
//				tmp -= (i / 2 - 1);
//				if (tmp > 0)
//				{
//					vector<int> tmpVec;
//					for (int j = 0; j < i; ++j)
//					{
//						tmpVec.push_back(tmp++);
//					}
//					res.push_back(tmpVec);
//				}
//			}
//		}
//		else
//		{
//			if (sum%i == 0)
//			{
//				int tmp = sum / i;
//				tmp -= (i / 2);
//				if (tmp > 0)
//				{
//					vector<int> tmpVec;
//					for (int j = 0; j < i; ++j)
//					{
//						tmpVec.push_back(tmp++);
//					}
//					res.push_back(tmpVec);
//				}
//			}
//		}
//		i--;
//	}
//	return res;
//}
//
//vector<int> FindNumbersWithSum(vector<int> array, int sum) {
//	int back = array.size() - 1;
//	int pre = 0;
//	while (pre <= back)
//	{
//		if (array[pre] + array[back] < sum)
//		{
//			pre++;
//		}
//		else if (array[pre] + array[back] == sum)
//		{
//			return { array[pre],array[back] };
//		}
//		else
//		{
//			back--;
//		}
//	}
//}
//
//string ReverseSentence(string str) {
//	int size = str.size();
//	if (size == 0)
//	{
//		return str;
//	}
//	vector<string> tmpStr;
//	int pre = 0;
//	int cur = 0;
//	while (cur < size)
//	{
//		if (str[cur] == ' ')
//		{
//			tmpStr.push_back(str.substr(pre, cur - pre));
//			pre = cur + 1;
//		}
//		cur++;
//	}
//	tmpStr.push_back(str.substr(pre));
//	string res;
//	for (int i = tmpStr.size() - 1; i > 0; --i)
//	{
//		res += tmpStr[i] + ' ';
//	}
//	res += tmpStr[0];
//	return res;
//}
//
//bool IsContinuous(vector<int> numbers) {
//	bool b[14] = { false };
//	int num = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		if (numbers[i] == 0)
//		{
//			num++;
//			continue;
//		}
//		if (b[numbers[i]] == true)
//		{
//			return false;
//		}
//		b[numbers[i]] = true;
//	}
//	for (int i = 0; i < 14; ++i)
//	{
//		if (b[i] == 1)
//		{
//			int j = 1;
//			while (j < 5 - num)
//			{
//				if (j + i == 14)
//				{
//					return true;
//				}
//				else if (b[i + j] == 0)
//				{
//					num--;
//					if (num < 0)
//					{
//						return false;
//					}
//				}
//				j++;
//			}
//			return true;
//		}
//	}
//}
//
//int Add(int num1, int num2)
//{
//	int res = 0; 
//	int ad = 0;
//	do
//	{
//		res = num1 ^ num2;
//		ad = (num1&num2) << 1;
//		num1 = res;
//		num2 = ad;
//	} while (ad != 0);
//	return res;
//}
//
//int StrToInt(string str) 
//{
//	int size = str.size();
//	if (size == 0)
//	{
//		return 0;
//	}
//	int res = 0;
//	if (str[0] == '-')
//	{
//		for (int i = 1; i < size; i++)
//		{
//			if (str[i] >= '0'&&str[i] <= '9')
//			{
//				res = res * 10 + '0' - str[i];
//				if (res > 0)
//				{
//					return 0;
//				}
//			}
//			else
//			{
//				return 0;
//			}
//		}
//		return res;
//	}
//	else if (str[0] == '+')
//	{
//		for (int i = 1; i < size; i++)
//		{
//			if (str[i] >= '0'&&str[i] <= '9')
//			{
//				res = res * 10 + str[i] - '0';
//			}
//			else
//			{
//				return 0;
//			}
//		}
//		return res;
//	}
//	else if (str[0] >= '0'&&str[0] <= '9')
//	{
//		res = str[0] - '0';
//		for (int i = 1; i < size; i++)
//		{
//			if (str[i] >= '0'&&str[i] <= '9')
//			{
//				res = res * 10 + str[i] - '0';
//				if (res < 0)
//				{
//					return 0;
//				}
//			}
//			else
//			{
//				return 0;
//			}
//		}
//		return res;
//	}
//	return 0;
//}
//
//bool match(char* str, char* pattern)
//{
//	if (*str == '\0'&&*pattern == '\0')
//	{
//		return true;
//	}
//	if (*str != '\0'&&*pattern == '\0')
//	{
//		return false;
//	}
//	if ((*pattern + 1) != '*')
//	{
//		if (*str == *pattern || (*str != '\0'&&*pattern == '.'))
//		{
//			return match(str + 1, pattern + 1);
//		}
//		return false;
//	}
//	else
//	{
//		if (*str == *pattern || (*str != '\0'&&*pattern == '.'))
//		{
//			return match(str + 1, pattern) || match(str, pattern + 2);
//		}
//		else
//		{
//			return match(str, pattern + 2);
//		}
//	}
//}
//
//using namespace std;
//template<class T>
//class SmartPtr
//{
//public:
//	SmartPtr(T *p);
//	~SmartPtr();
//	SmartPtr(const SmartPtr<T> &orig);                // 浅拷贝
//	SmartPtr<T>& operator=(const SmartPtr<T> &rhs);    // 浅拷贝
//private:
//	T *ptr;
//	// 将use_count声明成指针是为了方便对其的递增或递减操作
//	int *use_count;
//};
//
//template<class T>
//SmartPtr<T>::SmartPtr(T *p) : ptr(p)
//{
//	try
//	{
//		use_count = new int(1);
//	}
//	catch (...)
//	{
//		delete ptr;
//		ptr = nullptr;
//		use_count = nullptr;
//		cout << "Allocate memory for use_count fails." << endl;
//		exit(1);
//	}
//
//	cout << "Constructor is called!" << endl;
//}
//
//template<class T>
//SmartPtr<T>::~SmartPtr()
//{
//	// 只在最后一个对象引用ptr时才释放内存
//	if (--(*use_count) == 0)
//	{
//		delete ptr;
//		delete use_count;
//		ptr = nullptr;
//		use_count = nullptr;
//		cout << "Destructor is called!" << endl;
//	}
//}
//
//template<class T>
//SmartPtr<T>::SmartPtr(const SmartPtr<T> &orig)
//{
//	ptr = orig.ptr;
//	use_count = orig.use_count;
//	++(*use_count);
//	cout << "Copy constructor is called!" << endl;
//}
//
//// 重载等号函数不同于复制构造函数，即等号左边的对象可能已经指向某块内存。
//// 这样，我们就得先判断左边对象指向的内存已经被引用的次数。如果次数为1，
//// 表明我们可以释放这块内存；反之则不释放，由其他对象来释放。
//template<class T>
//SmartPtr<T>& SmartPtr<T>::operator=(const SmartPtr<T> &rhs)
//{
//	// 《C++ primer》：“这个赋值操作符在减少左操作数的使用计数之前使rhs的使用计数加1，
//	// 从而防止自身赋值”而导致的提早释放内存
//	++(*rhs.use_count);
//
//	// 将左操作数对象的使用计数减1，若该对象的使用计数减至0，则删除该对象
//	if (--(*use_count) == 0)
//	{
//		delete ptr;
//		delete use_count;
//		cout << "Left side object is deleted!" << endl;
//	}
//
//	ptr = rhs.ptr;
//	use_count = rhs.use_count;
//
//	cout << "Assignment operator overloaded is called!" << endl;
//	return *this;
//}
//
//int longestCommonSubsequence(string text1, string text2) {
//	int size1 = text1.size();
//	int size2 = text2.size();
//	//int length[size1][size2];
//	int **length = new int*[size1];
//	for (int i = 0; i < size2; ++i)
//	{
//		length[i] = new int[size2];
//	}
//	for (int i = 0; i < size2; i++)
//	{
//		if (text2[i] == text1[0])
//		{
//			for (int j = i; j < size2; j++)
//			{
//				length[0][j] = 1;
//			}
//			break;
//		}
//		else
//		{
//			length[0][i] = 0;
//		}
//	}
//	for (int i = 0; i < size1; ++i)
//	{
//		if (text1[i] == text2[0])
//		{
//			for (int j = i; j < size1; ++j)
//			{
//				length[j][0] = 1;
//			}
//			break;
//		}
//		else
//		{
//			length[i][0] = 0;
//		}
//	}
//	for (int i = 1; i < size1; i++)
//	{
//		for (int j = 1; j < size2; j++)
//		{
//			if (text1[i] == text2[j])
//			{
//				length[i][j] = length[i - 1][j-1] + 1;
//			}
//			else
//			{
//				length[i][j] = max(length[i - 1][j], length[i][j - 1]);
//			}
//		}
//	}
//	return length[size1 - 1][size2 - 1];
//}
//
////int climbStairs(int n) 
////{
////	int dp[n];
////	if (n = 1||n==2)
////	{
////		return n;
////	}
////	dp[0] = 1;
////	dp[1] = 2;
////	for (int i = 2; i < n; ++i)
////	{
////		dp[i] = dp[i - 2] + dp[i - 1];
////	}
////	return dp[n - 1];
////}
//
//vector<string> findRepeatedDnaSequences(string s) {
//	vector<string> res;
//	unordered_map<int, int> haveOcc;
//	int size = s.size();
//	if (size <= 10)
//	{
//		return res;
//	}
//	int key = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		switch (s[i])
//		{
//		case 'A':
//			key = (key << 2) + 0;
//			break;
//		case 'C':
//			key = (key << 2) + 1;
//			break;
//		case 'G':
//			key = (key << 2) + 2;
//			break;
//		case 'T':
//			key = (key << 2) + 3;
//			break;
//		}
//	}
//	haveOcc.insert({ key,1 });
//	for (int i = 10; i < size; ++i)
//	{
//		key = key << 2;
//		key = key & 0xFFFFF;
//		switch (s[i])
//		{
//		case 'A':
//			key += 0;
//			break;
//		case 'C':
//			key += 1;
//			break;
//		case 'G':
//			key += 2;
//			break;
//		case 'T':
//			key += 3;
//			break;
//		}
//		if (haveOcc.count(key))
//		{
//			if (haveOcc[key] == 1)
//			{
//				res.push_back(s.substr(i - 9, 10));
//			}
//			haveOcc[key]++;
//		}
//		else
//		{
//			haveOcc.insert({ key,1 });
//		}
//	}
//	return res;
//}
//
//uint32_t reverseBits(uint32_t n) {
//	uint32_t res = 0;
//	uint32_t t = 1;
//	int time = 1;
//	while (n)
//	{
//		int tmp = n & t;
//		res += (tmp << (32 - time++));
//		n = n >> 1;
//	}
//	return res;
//}
//
//int sizeX, sizeY;
//bool **visit;
//void setV(vector<vector<char>>& grid, int i, int j);
//int numIslands(vector<vector<char>>& grid) {
//	int num = 0;
//	sizeX = grid.size();
//	if (sizeX == 0)
//	{
//		return 0;
//	}
//	sizeY = grid[0].size();
//	if (sizeY == 0)
//	{
//		return 0;
//	}
//	visit = new bool*[sizeX];
//	for (int i = 0; i < sizeX; i++)
//	{
//		visit[i] = new bool[sizeY];
//	}
//	for (int i = 0; i < sizeX; ++i)
//	{
//		for (int j = 0; j < sizeY; ++j)
//		{
//			visit[i][j] = 0;
//		}
//	}
//	for (int i = 0; i < sizeX; ++i)
//	{
//		for (int j = 0; j < sizeY; ++j)
//		{
//			if (grid[i][j] == '1' && !visit[i][j])
//			{
//				visit[i][j] = 1;
//				setV(grid, i, j);
//				num++;
//			}
//		}
//	}
//	return num;
//}
//void setV(vector<vector<char>>& grid, int i, int j)
//{
//	if (i - 1 >= 0 && grid[i - 1][j] == '1' && !visit[i-1][j])
//	{
//		visit[i - 1][j] = 1;
//		setV(grid, i - 1, j);
//	}
//	if (i + 1 < sizeX&&grid[i + 1][j] == '1' && !visit[i+1][j])
//	{
//		visit[i + 1][j] = 1;
//		setV(grid, i + 1, j);
//	}
//	if (j - 1 >= 0 && grid[i][j - 1] == '1' && !visit[i][j-1])
//	{
//		visit[i][j - 1] = 1;
//		setV(grid, i, j - 1);
//	}
//	if (j + 1 < sizeY&&grid[i][j + 1] == '1' && !visit[i][j+1])
//	{
//		visit[i][j + 1] = 1;
//		setV(grid, i, j + 1);
//	}
//}
//
//int rangeBitwiseAnd(int m, int n) {
//	int tmp = m;
//	m++;
//	for (; m <= n; m++)
//	{
//		tmp = tmp & m;
//	}
//	return tmp;
//}
//
//ListNode* reverseList(ListNode* head) {
//	if (head == NULL || head->next == NULL) return head;
//	ListNode* p = reverseList(head->next);
//	head->next->next = head;
//	head->next = NULL;
//	return p;
//}
//
//bool canFinish(int numCourses, vector<vector<int>>& prerequisites)
//{
//	int size = prerequisites.size();
//	if (size == 0)
//	{
//		return true;
//	}
//	int *node = new int[2 * size]();
//	for (int i = 0; i < size; ++i)
//	{
//		node[i] = prerequisites[i][0];
//		node[i + size] = prerequisites[i][1];
//	}
//	sort(node, node + size*2);
//	int dataNum = unique(node, node + size*2) - node;
//	if (dataNum > numCourses)
//	{
//		return false;
//	}
//	vector<vector<unsigned int>> out;
//	out = vector<vector<unsigned int>>(dataNum, vector<unsigned int>());
//	int *inNum = new int[dataNum]();
//	unordered_map<int, int> m_node;
//	for (int i = 0; i < dataNum; i++)
//	{
//		m_node.emplace(node[i], i);
//	}
//	for (int i = 0; i < size; i++)
//	{
//		int start = m_node[prerequisites[i][0]];
//		int end = m_node[prerequisites[i][1]];
//		out[start].push_back(end);
//		inNum[end]++;
//	}
//	int *q1=new int[dataNum]();
//	int tail = 0;
//	int front = 0;
//	for (int i = 0; i < dataNum; ++i)
//	{
//		if (!inNum[i])
//		{
//			q1[tail++] = i;
//		}
//	}
//	while (front < tail)
//	{
//		int &u = q1[front++];
//		for (auto &ii : out[u])
//		{
//			if (--inNum[ii] == 0)
//			{
//				q1[tail++] = ii;
//			}
//		}
//	}
//	for (int i = 0; i < dataNum; i++)
//	{
//		if (inNum[i] > 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	ListNode* l1 = new ListNode(1);
//	ListNode* l2 = new ListNode(2);
//	ListNode* l3 = new ListNode(3);
//	ListNode* l4 = new ListNode(4);
//	ListNode* l5 = new ListNode(5);
//	ListNode* l6 = new ListNode(6);
//	ListNode* l7 = new ListNode(7);
//
//	l1->next = l2;
//	l2->next = l3;
//	l3->next = l4;
//	l4->next = l5;
//	//n5->next = n6;
//	//n6->next = n7;
//
//	TreeNode* t1 = new TreeNode(1);
//	TreeNode* t2 = new TreeNode(2);
//	TreeNode* t3 = new TreeNode(3);
//	TreeNode* t4 = new TreeNode(4);
//	TreeNode* t5 = new TreeNode(5);
//	TreeNode* t6 = new TreeNode(6);
//	TreeNode* t7 = new TreeNode(7);
//
//	t1->left = t2;
//	t1->right = t3;
//	t2->left = t4;
//	t2->right = t5;
//	t3->left = t6;
//	t5->left = t7;
//
//	Node* n1 = new Node();
//	Node* n2 = new Node();
//	Node* n3 = new Node();
//	Node* n4 = new Node();
//	Node* n5 = new Node();
//	Node* n6 = new Node();
//
//	n1->val = 1;
//	n1->neighbors = { n2,n4 };
//	n2->val = 2;
//	n2->neighbors = { n1,n3 };
//	n3->val = 3;
//	n3->neighbors = { n2,n4 };
//	n4->val = 4;
//	n4->neighbors = { n1,n3 };
//
//	Node2* n21 = new Node2();
//	Node2* n22 = new Node2();
//	n21->val = 1;
//	n21->next = n22;
//	n21->random = n22;
//	n22->val = 2;
//	n22->random = n22;
//
//	vector<vector<char>> v = { {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
//		{'6', '.'
//		, '.', '1', '9', '5', '.', '.', '.'},
//		{'.', '9', '8', '.', '.', '.', '.', '6', '.'},
//		{'8', '.', '.', '.', '6', '.', '.', '.', '3'},
//		{'4', '.', '.', '8', '.', '3', '.', '.', '1'},
//		{'7', '.', '.', '.', '2', '.', '.', '.', '6'},
//		{'.', '6', '.', '.', '.', '.', '2', '8', '.'},
//		{'.', '.', '.', '4', '1', '9', '.', '.', '5'},
//		{'.', '.', '.', '.', '8', '.', '.', '7', '9'} };
//
//	vector<vector<int>> obstacleGrid(50, vector<int>(50, 0));
//	vector<string> v2 = { "ask","not","what","your","country","can","do","for","you","ask","what","you","can","do","for","your","country" };
//	//vector<vector<bool>> v3(3, vector<bool>(3));
//	//double result = myPow(8.84372, -5);
//	vector<vector<char>> v3 = { {'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'} };
//	string s1 = "xslledayhxhadmctrliaxqpokyezcfhzaskeykchkmhpyjipxtsuljkwkovmvelvwxzwieeuqnjozrfwmzsylcwvsthnxujvrkszqwtglewkycikdaiocglwzukwovsghkhyidevhbgffoqkpabthmqihcfxxzdejletqjoxmwftlxfcxgxgvpperwbqvhxgsbbkmphyomtbjzdjhcrcsggleiczpbfjcgtpycpmrjnckslrwduqlccqmgrdhxolfjafmsrfdghnatexyanldrdpxvvgujsztuffoymrfteholgonuaqndinadtumnuhkboyzaqguwqijwxxszngextfcozpetyownmyneehdwqmtpjloztswmzzdzqhuoxrblppqvyvsqhnhryvqsqogpnlqfulurexdtovqpqkfxxnqykgscxaskmksivoazlducanrqxynxlgvwonalpsyddqmaemcrrwvrjmjjnygyebwtqxehrclwsxzylbqexnxjcgspeynlbmetlkacnnbhmaizbadynajpibepbuacggxrqavfnwpcwxbzxfymhjcslghmajrirqzjqxpgtgisfjreqrqabssobbadmtmdknmakdigjqyqcruujlwmfoagrckdwyiglviyyrekjealvvigiesnvuumxgsveadrxlpwetioxibtdjblowblqvzpbrmhupyrdophjxvhgzclidzybajuxllacyhyphssvhcffxonysahvzhzbttyeeyiefhunbokiqrpqfcoxdxvefugapeevdoakxwzykmhbdytjbhigffkmbqmqxsoaiomgmmgwapzdosorcxxhejvgajyzdmzlcntqbapbpofdjtulstuzdrffafedufqwsknumcxbschdybosxkrabyfdejgyozwillcxpcaiehlelczioskqtptzaczobvyojdlyflilvwqgyrqmjaeepydrcchfyftjighntqzoo";
//	string s2 = "rwmimatmhydhbujebqehjprrwfkoebcxxqfktayaaeheys";
//	string s3 = "babbbabbbaaabbababbbbababaabbabaabaaabbbbabbbaaabbbaaaaabbbbaabbaaabababbaaaaaabababbababaababbababbbababbbbaaaabaabbabbaaaaabbabbaaaabbbaabaaabaababaababbaaabbbbbabbbbaabbabaabbbbabaaabbababbabbabbab";
//	vector<int> v4 = { 1,3,2,6,4 };
//	vector<int> v1 = { 1,0,2,2,5,2,1,0 };
//	vector<vector<int>> v5 = { {-2,-3,3}, { -5,-10,1 }, { 10,30,-5 } };
//	vector<string> v6 = { "10","6","9","3","+","-11","*","/","*","17","+","5","+" };
//	//vector<string> v6 = { "si","go","se","cm","so","ph","mt","db","mb","sb","kr","ln","tm","le","av","sm","ar","ci","ca","br","ti","ba","to","ra","fa","yo","ow","sn","ya","cr","po","fe","ho","ma","re","or","rn","au","ur","rh","sr","tc","lt","lo","as","fr","nb","yb","if","pb","ge","th","pm","rb","sh","co","ga","li","ha","hz","no","bi","di","hi","qa","pi","os","uh","wm","an","me","mo","na","la","st","er","sc","ne","mn","mi","am","ex","pt","io","be","fm","ta","tb","ni","mr","pa","he","lr","sq","ye" };
//	int num1, num2;
//	//int result = StrToInt("-2147483649");
//	char c1[] = "";
//	char c2[] = ".*";
//	bool res = match(c1, c2);
//	int arr[5] = { 2,2 };
//	cout << hex <<*(reinterpret_cast<int*>(reinterpret_cast<int>(arr) + 1)) << endl;
//    std::cout << "Hello World!\n";
//	//// Test Constructor and Assignment Operator Overloaded
//	//SmartPtr<int> p1(new int(0));
//	//p1 = p1;
//	//// Test Copy Constructor
//	//SmartPtr<int> p2(p1);
//	//// Test Assignment Operator Overloaded
//	//SmartPtr<int> p3(new int(1));
//	//p3 = p1;
//	vector<vector<int>> t = { {1,0} };
//	canFinish(2,t);
//
//	return 0;
//
//}

//struct Node
//{
//	Node(char c) :v(c), isEnd(false)
//	{
//
//	}
//	char v;
//	bool isEnd;
//	vector<Node*> nextNode;
//};
//class Trie {
//public:
//	/** Initialize your data structure here. */
//	Trie() {
//
//	}
//
//	/** Inserts a word into the trie. */
//	void insert(string word) {
//		Node* head = NULL;
//		for (int i = 0; i < headNode.size(); i++)
//		{
//			if (headNode[i]->v == word[0])
//			{
//				head = headNode[i];
//				break;
//			}
//		}
//		if (head == NULL)
//		{
//			head = new Node(word[0]);
//			headNode.push_back(head);
//		}
//		for (int i = 1; i < word.size(); ++i)
//		{
//			vector<Node*> &nextNode = head->nextNode;
//			head = NULL;
//			int size = nextNode.size();
//			for (int j = 0; j < size; j++)
//			{
//				if (nextNode[j]->v == word[i])
//				{
//					head = nextNode[j];
//					break;
//				}
//			}
//			if (head == NULL)
//			{
//				head = new Node(word[i]);
//				nextNode.push_back(head);
//			}
//		}
//		head->isEnd = true;
//	}
//
//	/** Returns if the word is in the trie. */
//	bool search(string word) {
//		vector<Node*> *nextNode = &headNode;
//		Node* head = NULL;
//		for (char &c : word)
//		{
//			head = NULL;
//			for (int i = 0; i < nextNode->size(); ++i)
//			{
//				if (c == (*nextNode)[i]->v)
//				{
//					head = (*nextNode)[i];
//					break;
//				}
//			}
//			if (head == NULL)
//			{
//				return false;
//			}
//			nextNode = &(head->nextNode);
//		}
//		if (head->isEnd)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	/** Returns if there is any word in the trie that starts with the given prefix. */
//	bool startsWith(string prefix) {
//		vector<Node*> *nextNode = &headNode;
//		Node* head = NULL;
//		for (char &c : prefix)
//		{
//			head = NULL;
//			for (int i = 0; i < nextNode->size(); ++i)
//			{
//				if (c == (*nextNode)[i]->v)
//				{
//					head = (*nextNode)[i];
//					break;
//				}
//			}
//			if (head == NULL)
//			{
//				return false;
//			}
//			nextNode = &(head->nextNode);
//		}
//		return true;
//	}
//	vector<Node*> headNode;
//};

int minSubArrayLen(int s, vector<int>& nums) {
	int size = nums.size();
	int head = 0;
	int sum = 0;
	int res = size + 1;
	for (int i = 0; i < size; ++i)
	{
		sum += nums[i];
		if (sum >= s)
		{
			for (; head < i; )
			{
				sum -= nums[head];
				head++;
				if (sum < s)
				{
					res = res < (i - head + 2) ? res : (i - head + 2);
					break;
				}
			}
			if (head == i)
			{
				return 1;
			}
		}
	}
	return res > size ? 0 : res;
}

vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
	vector<vector<int>> out;
	out = vector<vector<int>>(numCourses, vector<int>());
	int *inD = new int[numCourses]();
	for (auto &i : prerequisites)
	{
		out[i[1]].push_back(i[0]);
		inD[i[0]]++;
	}
	vector<int> q = vector<int>(numCourses, 0);
	int start = 0;
	int end = 0;
	for (int i = 0; i < numCourses; ++i)
	{
		if (inD[i] == 0)
		{
			q[end++] = i;
		}
	}
	while (start < end)
	{
		for (auto &i : out[q[start]])
		{
			if (--inD[i] == 0)
			{
				q[end++] = i;
			}
		}
		start++;
	}
	if (end != numCourses)
	{
		return {};
	}
	return q;
}

struct Node {
	char c;
	vector<Node*> nextN;
	Node(char v) :c(v)
	{

	}
	Node()
	{

	}
};
class WordDictionary {
public:
	/** Initialize your data structure here. */
	WordDictionary() {

	}

	/** Adds a word into the data structure. */
	void addWord(string word) {
		vector<Node*> *layer = &headL;
		Node *head = NULL;
		for (char &c : word)
		{
			for (Node* n : (*layer))
			{
				if (n->c == c)
				{
					head = n;
					break;
				}
			}
			if (head == NULL)
			{
				head = new Node(c);
				layer->push_back(head);
			}
			layer = &(head->nextN);
			head = NULL;
		}
	}

	/** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
	bool search(string word) {
		size = word.size();
		return search(word, 0, &headL);
	}
	bool search(string word, int i, vector<Node*> *layer)
	{
		if (i == size && layer->size() == 0)
		{
			return true;
		}
		if (word[i] == '.')
		{
			i++;
			for (Node* n : (*layer))
			{
				if (search(word, i, &(n->nextN)))
				{
					return true;
				}
			}
			return false;
		}
		else
		{
			for (Node* n : (*layer))
			{
				if (n->c == word[i])
				{
					return search(word, i + 1, &(n->nextN));
				}
			}
			return false;
		}
	}
	int size;
	vector<Node*> headL;
};

int getLastMoment(int n, vector<int>& left, vector<int>& right) {
	int res = 0;
	for (int i = 0; i < left.size(); ++i)
	{
		if (left[i] > res)
		{
			res = left[i];
		}
	}
	for (int i = 0; i < right.size(); ++i)
	{
		if (n - right[i] > res)
		{
			res = n - right[i];
		}
	}
	return res;
}

string shortestPalindrome(string s) {
	int size = s.size();
	if (size <= 1)
	{
		return s;
	}
	char head = s[0];
	int longS = 1;
	for (int i = 1; i < size; ++i)
	{
		if (s[i] == head)
		{
			int tail = i - 1;
			int top = 1;
			while (tail > top)
			{
				if (s[tail] != s[top])
				{
					break;
				}
				tail--;
				top++;
			}
			if (tail <= top)
			{
				longS = i + 1;
			}
		}
	}
	string res;
	for (int i = size - 1; i >= longS; --i)
	{
		res += s[i];
	}
	for (int i = 0; i < longS; ++i)
	{
		res += s[i];
	}
	return res;
}

//class Solution {
//public:
//	int *box;
//	int k;
//	void HeapAdjust(int pos)
//	{
//		for (int i = 2 * pos + 1; i < k; i = 2 * i + 1)
//		{
//			if (i < k - 1)
//			{
//				if (box[i] > box[i + 1])
//				{
//					i++;
//				}
//			}
//			if (box[i] > box[pos])
//			{
//				break;
//			}
//			std::swap(box[i], box[pos]);
//			pos = i;
//		}
//	}
//
//	int findKthLargest(vector<int>& nums, int k)
//	{
//		box = new int[k]();
//		this->k = k;
//		for (int i = 0; i < k; i++)
//		{
//			box[i] = nums[i];
//		}
//		for (int i = k / 2; i >= 0; i--)
//		{
//			HeapAdjust(i);
//		}
//		for (int i = k; i < nums.size(); i++)
//		{
//			if (nums[i] > box[0])
//			{
//				box[0] = (nums[i]);
//				HeapAdjust(0);
//			}
//		}
//		return box[0];
//	}
//};

void fastSort(vector<int> &num, int front, int behind)
{
	if (front >= behind)
	{
		return;
	}
	int begin = front;
	int end = behind;
	int tmp = num[begin];
	int flag = true;
	while (begin < end)
	{
		if (flag)
		{
			if (num[end] < tmp)
			{
				num[begin] = num[end];
				begin++;
				flag = false;
			}
			else
			{
				end--;
			}
		}
		else
		{
			if (num[begin] >= tmp)
			{
				num[end] = num[begin];
				end--;
				flag = true;
			}
			else
			{
				begin++;
			}
		}
	}
	num[begin] = tmp;
	fastSort(num, front, begin - 1);
	fastSort(num, begin + 1, behind);
}

//天际线问题，扫描线法
//class Solution {
//public:
//	vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
//		vector<vector<int>> res;
//		multiset<pair<int, int>> all;
//		for (auto &data : buildings)
//		{
//			all.insert(make_pair(data[0], -data[2]));
//			all.insert(make_pair(data[1], data[2]));
//		}
//		multiset<int> hightest({ 0 });
//		vector<int> last({ 0,0 });
//		for (auto &d : all)
//		{
//			if (d.second < 0)
//			{
//				hightest.insert(-d.second);
//			}
//			else
//			{
//				hightest.erase(hightest.find(d.second));
//			}
//			int maxHeight = *(hightest.rbegin());
//			if (maxHeight != last[1])
//			{
//				last[0] = d.first;
//				last[1] = maxHeight;
//				res.push_back(last);
//			}
//		}
//		return res;
//	}
//};

int edgeCount = 0;
struct EDGE
{
	int v, next;
	double w;
	EDGE() {}
	EDGE(int _v, double _w, int _next) :
		v(_v), w(_w), next(_next)
	{

	}
};

bool Compare(pair<int, double> &a, pair<int, double> &b)
{
	return a.second > b.second;
}
//class Solution {
//public:
//	int *head;
//	EDGE *edge;
//	void addEdge(int u, int v, double w)
//	{
//		edge[edgeCount] = EDGE(v, w, head[u]);
//		head[u] = edgeCount++;
//	}
//	double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
//		head = new int[n]();
//		edge = new EDGE[edges.size()];
//		memset(head, -1, sizeof(int)*n);
//		set<int> searched;
//		for (int i = 0; i < edges.size(); ++i)
//		{
//			addEdge(edges[i][0], edges[i][1], succProb[i]);
//		}
//		list<pair<int, double>> vertexVec;
//		searched.insert(start);
//		for (int ii = head[start]; ~ii; ii = edge[ii].next)
//		{
//			vertexVec.push_back({ edge[ii].v,edge[ii].w });
//		}
//		vertexVec.sort(Compare);
//		while (!vertexVec.empty())
//		{
//			pair<int, double> cur = vertexVec.front();
//			vertexVec.pop_front();
//			if (cur.first == end)
//			{
//				return cur.second;
//			}
//			searched.insert(cur.first);
//			for (int ii = head[cur.first]; ~ii; ii = edge[ii].next)
//			{
//				if (searched.count(edges[ii][1]))
//				{
//					continue;
//				}
//				vertexVec.push_back({ edge[ii].v,edge[ii].w*cur.second });
//			}
//			vertexVec.sort(Compare);
//		}
//		return 0;
//
//	}
//};

int maximalSquare(vector<vector<char>>& matrix) {
	int xSize = matrix.size();
	if (xSize == 0)
	{
		return 0;
	}
	int ySize = matrix[0].size();
	vector<vector<int>> var = vector<vector<int>>(xSize, vector<int>());
	for (int i = 0; i < xSize; ++i)
	{
		var[i] = vector<int>(ySize, 0);
	}
	for (int i = 0; i < xSize; ++i)
	{
		for (int j = 0; j < ySize; ++j)
		{
			if (matrix[i][j] == '1')
			{
				if (j == 0)
				{
					var[i][j] = 1;
				}
				else
				{
					var[i][j] = var[i][j - 1] + 1;
				}
			}
		}
	}
	int res = 0;
	for (int i = 1; i < xSize; ++i)
	{
		for (int j = 0; j < ySize; ++j)
		{
			if (var[i][j] > 0)
			{
				int max = var[i][j];
				int min = 1;
				for (int k = i - 1; k >= 0 && k > i - max; --k)
				{
					if (var[k][j] < max)
					{
						max = var[k][j];
					}
					if (var[k][j] > min)
					{
						min++;
					}
					else
					{
						break;
					}
				}
				if (min > res)
				{
					res = min;
				}
			}
		}
	}
	return res * res;
}

int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
	int S = (C - A)*(D - B) + (D - E)*(H - F);
	if (C<E || B>H)
	{
		return S;
	}
	int xMin = E > A ? E : A;
	int xMax = C < G ? C : G;
	int yMin = B > F ? B : F;
	int yMax = H < D ? H : D;
	int deleteS = (xMax - xMin)*(yMax - yMin);
	return S - deleteS;
}

int closestToTarget(vector<int>& arr, int target) {
	int min = 10000000;
	int left = 0;
	int right = 0;
	int size = arr.size();
	int curNum = arr[0];
	while (left < size)
	{
		if (abs(curNum - target) < min)
		{
			min = abs(curNum - target);
		}
		if (curNum < target)
		{
			if (left == right)
			{
				left++;
				right++;
				curNum = arr[left];
			}
			else
			{
				curNum = arr[right];
				int tmp = right - 1;
				while (curNum > target&&tmp > left)
				{
					curNum = curNum & arr[tmp--];
				}
				left = tmp + 1;
			}
		}
		else if (curNum > target)
		{
			if (right < size - 1)
			{
				right++;
				curNum = curNum & arr[right];
			}
			else
			{
				return min;
			}
		}
		else
		{
			return 0;
		}
	}
	return min;
}

class BTree {
	static const int M = 2;
	struct BTNode {
		int keyNum;
		int key[2 * M - 1];  //关键字数组
		struct BTNode* child[2 * M];//孩子结点数组
		bool isLeaf;
	};

	BTNode* root;
	//在插入时，保证pNode结点的关键字少于2*M-1个
	void InsertNonFull(BTNode* pNode, int key);
	//当child结点有2M-1个关键字时，分裂此结点
	void SplitChild(BTNode* parent, int i, BTNode* child);
	//两个M-1个元素的结点合并
	void merge(BTNode* parent, BTNode* pNode1, BTNode* pNode2, int index);
	//找到比pNode结点第一个关键字小的最大的关键字，也就是前继结点
	int predecessor(BTNode* pNode);
	//找到后继结点
	int successor(BTNode* pNode);
	//pNode1向parent要一个结点key[index]，parent向pNode0要一个结点，pNode1关键字个数为M-1
	void ExchangeLeftNode(BTNode *parent, BTNode* pNode0, BTNode* pNode1, int index);
	void ExchangeRightNode(BTNode* parent, BTNode* pNode1, BTNode *pNode2, int index);
	//删除，结点关键字个数不少于M
	void RemoveNonLess(BTNode* pNode, int key);
	void DiskWrite(BTNode* pNode);
	void DiskRead(BTNode *pNode);
	BTNode* Search(BTNode* pNode, int key, int &index);
public:
	BTree();
	~BTree();
	BTNode* search(int key, int &index);
	void insert(int key);
	void remove(int key);
	//按层级打印。
	void PrintRow();
};


BTree::BTree()
{
	root = new BTNode();
	root->isLeaf = true;
	root->keyNum = 0;
	DiskWrite(root);
}


BTree::~BTree()
{
	struct BTNode* pNode;
	queue<struct BTNode*> q;
	q.push(root);
	while (!q.empty()) {
		pNode = q.front();
		q.pop();

		if (pNode->isLeaf)
			continue;
		for (int i = 0; i <= pNode->keyNum; i++)
			q.push(pNode->child[i]);
		delete pNode;
	}
}


void BTree::DiskWrite(BTNode* pNode)
{

}


void BTree::DiskRead(BTNode *pNode)
{

}


BTree::BTNode* BTree::Search(BTNode* pNode, int key, int &index)
{
	int i = 0;
	while (i<pNode->keyNum&&key>pNode->key[i])//找到第一个大于等于key的下标
		i++;
	if (i < pNode->keyNum&&key == pNode->key[i]) {//如果找到关键字，返回
		index = i;
		return pNode;
	}
	if (pNode->isLeaf)//已经搜到叶子结点，不存在
		return NULL;
	else {
		DiskRead(pNode->child[i]);
		return Search(pNode->child[i], key, index);//在第一个大于key值的孩子节点中递归搜索
	}
}


void BTree::InsertNonFull(BTNode* pNode, int key)
{
	int i = pNode->keyNum - 1;
	if (pNode->isLeaf) {//如果是叶子结点，直接插入
		while (i >= 0 && key < pNode->key[i]) {
			pNode->key[i + 1] = pNode->key[i];
			i--;
		}
		pNode->key[i + 1] = key;
		pNode->keyNum++;
		DiskWrite(pNode);
	}
	else {
		while (i >= 0 && key < pNode->key[i])
			i--;//找到第一个小于等于key的下标
		i++;
		DiskRead(pNode->child[i]);
		if (pNode->child[i]->keyNum == 2 * M - 1) {//判断孩子结点是否有2*M-1个关键字，有就需要分裂
			SplitChild(pNode, i, pNode->child[i]);
			if (key > pNode->key[i])//如果key比上移到父节点的元素大
				i++;
		}
		InsertNonFull(pNode->child[i], key);//已保证孩子结点关键字个数少于2*M-1个
	}
}


void BTree::SplitChild(BTNode* parent, int i, BTNode* child)
{
	int j;
	struct BTNode* pNode = new BTNode();
	pNode->isLeaf = child->isLeaf;
	pNode->keyNum = M - 1;
	for (j = 0; j < M - 1; j++)//将child结点的后M-1个关键字赋给新节点
		pNode->key[j] = child->key[j + M];
	if (!child->isLeaf) {//如果child不是叶子结点，将其后M个孩子结点赋给新节点。
		for (j = 0; j < M; j++)
			pNode->child[j] = child->child[j + M];
	}
	child->keyNum = M - 1;

	for (j = parent->keyNum; j > i; j--)
		parent->child[j + 1] = parent->child[j];//将child结点的父节点parent下标i以后的结点指针都向后移动一位，
	parent->child[j + 1] = pNode;//将新生成的结点当成parent的一个孩子
	for (j = parent->keyNum - 1; j >= i; j--)	//将i后面的关键字都向后移动一位
		parent->key[j + 1] = parent->key[j];
	parent->key[j + 1] = child->key[M - 1];//将孩子结点的中间结点移到父节点的指定位置
	parent->keyNum++;
	DiskWrite(parent);
	DiskWrite(pNode);
	DiskWrite(child);
}


void BTree::merge(BTNode* parent, BTNode* pNode1, BTNode* pNode2, int index)
{
	pNode1->key[M - 1] = parent->key[index];
	for (int i = 0; i < M - 1; i++)//将pNode2的关键字移到pNode1中
		pNode1->key[i + M] = pNode2->key[i];
	pNode1->keyNum = 2 * M - 1;
	if (!pNode1->isLeaf) {//如果不是叶子，将pNode2的孩子指针也移到pNode1中
		for (int i = 0; i < M; i++)
			pNode1->child[i + M] = pNode2->child[i];
	}

	for (int i = index; i < parent->keyNum; i++) {//将父节点index以后的关键字以及孩子指针都向前移动一位
		parent->key[i] = parent->key[i + 1];
		parent->child[i + 1] = parent->child[i + 2];
	}
	parent->keyNum--;
	delete pNode2;
}


int BTree::predecessor(BTNode* pNode)
{
	while (!pNode->isLeaf)
		pNode = pNode->child[pNode->keyNum];
	return pNode->key[pNode->keyNum - 1];
}

int BTree::successor(BTNode* pNode)
{
	while (!pNode->isLeaf)
		pNode = pNode->child[0];
	return pNode->key[0];
}


void BTree::ExchangeLeftNode(BTNode *parent, BTNode* pNode0, BTNode* pNode1, int index)
{
	for (int i = pNode1->keyNum; i > 0; i--)
		pNode1->key[i] = pNode1->key[i - 1];//pNode1结点所有关键字向后移动一位
	pNode1->key[0] = parent->key[index];//第0个关键字来自父节点
	pNode1->keyNum++;
	parent->key[index] = pNode0->key[pNode0->keyNum - 1];//父节点的index处的关键字来自pNode0的最大关键字

	if (!pNode0->isLeaf) {//如果不是叶子结点，
		for (int i = pNode1->keyNum; i > 0; i--)//将pNode1的孩子指针都向后移动一位，并将pNode0的最后一个孩子指针赋给它的第一个
			pNode1->child[i] = pNode1->child[i - 1];
		pNode1->child[0] = pNode0->child[pNode0->keyNum];
	}

	pNode0->keyNum--;
}


void BTree::ExchangeRightNode(BTNode* parent, BTNode* pNode1, BTNode *pNode2, int index)
{
	pNode1->key[pNode1->keyNum] = parent->key[index];
	pNode1->keyNum++;
	parent->key[index] = pNode2->key[0];
	for (int i = 0; i < pNode2->keyNum - 1; i++)
		pNode2->key[i] = pNode2->key[i + 1];

	if (!pNode2->isLeaf) {
		pNode1->child[pNode1->keyNum] = pNode2->child[0];
		for (int i = 0; i < pNode2->keyNum; i++)
			pNode2->child[i] = pNode2->child[i + 1];
	}
	pNode2->keyNum--;
}


void BTree::RemoveNonLess(BTNode* pNode, int key)
{
	if (pNode->isLeaf) {//到了叶子结点，直接删除
		int i = 0;
		while (i<pNode->keyNum&&key>pNode->key[i])
			i++;
		if (i < pNode->keyNum&&key == pNode->key[i]) {
			while (i < pNode->keyNum - 1) {
				pNode->key[i] = pNode->key[i + 1];
				i++;
			}
			pNode->keyNum--;
		}
		else {
			cout << "not found!" << endl;
		}
	}
	else {
		int i = 0;
		while (i < pNode->keyNum&&key > pNode->key[i])//找到第一个大于等于key的关键字
			i++;
		if (i < pNode->keyNum&&key == pNode->key[i]) {//在结点中找到要删除的关键字
			struct BTNode* pNode1 = pNode->child[i];
			struct BTNode* pNode2 = pNode->child[i + 1];
			if (pNode1->keyNum >= M) {//如果关键字左边的孩子结点的关键字数大于等于M
				int target = predecessor(pNode1);//将其前继结点移到pNode中
				pNode->key[i] = target;
				RemoveNonLess(pNode1, target);//递归删除target
			}
			else if (pNode2->keyNum >= M) {//右边，同理
				int target = successor(pNode2);
				pNode->key[i] = target;
				RemoveNonLess(pNode2, target);
			}
			else {
				merge(pNode, pNode1, pNode2, i);//都小于M，合并
				RemoveNonLess(pNode1, key);
			}
		}
		else {//不在此结点中
			struct BTNode *pNode1 = pNode->child[i];
			struct BTNode *pNode0 = NULL;
			struct BTNode *pNode2 = NULL;
			if (i > 0)
				pNode0 = pNode->child[i - 1];//左结点
			if (i < pNode->keyNum)
				pNode2 = pNode->child[i + 1];//右结点
			if (pNode1->keyNum == M - 1) {//如果要删除的孩子结点关键字个数为M-1
				if (i > 0 && pNode0->keyNum >= M) {//如果左邻结点至少有M个关键字，向其借一个
					ExchangeLeftNode(pNode, pNode0, pNode1, i - 1);
				}
				else if (i < pNode->keyNum&&pNode2->keyNum >= M) {//同理，
					ExchangeRightNode(pNode, pNode1, pNode2, i);
				}
				else if (i > 0) {//两个相邻结点都只有M-1个关键字，合并
					merge(pNode, pNode0, pNode1, i - 1);
					pNode1 = pNode0;
				}
				else {
					merge(pNode, pNode1, pNode2, i);
				}
				RemoveNonLess(pNode1, key);

			}
			else {
				RemoveNonLess(pNode1, key);
			}
		}
	}
}


BTree::BTNode* BTree::search(int key, int &index)
{
	return Search(root, key, index);
}


void BTree::insert(int key)
{
	struct BTNode* r = root;
	if (root->keyNum == 2 * M - 1) {//根节点特殊处理，如果根节点关键字个数为2*M-1，
		struct BTNode* pNode = new BTNode();//新建一个结点作为新的根节点，并将现在的根节点作为
		root = pNode;//新根节点的孩子结点
		pNode->isLeaf = false;
		pNode->keyNum = 0;
		pNode->child[0] = r;
		SplitChild(pNode, 0, r);//孩子结点r有2*M-1个关键字
		InsertNonFull(pNode, key);
	}
	else
		InsertNonFull(r, key);
}


void BTree::remove(int key)
{
	if (root->keyNum == 1) {//如果根节点只有两个孩子
		struct BTNode* pNode1 = root->child[0];
		struct BTNode* pNode2 = root->child[1];
		if (pNode1->keyNum == M - 1 && pNode2->keyNum == M - 1) {//且两个孩子都只有M-1个关键字，合并
			merge(root, pNode1, pNode2, 0);
			delete root;
			root = pNode1;
		}
		else {
			RemoveNonLess(root, key);
		}
	}
	else {
		RemoveNonLess(root, key);
	}
}


void BTree::PrintRow()
{
	struct BTNode* pNode;
	queue<struct BTNode*> q;
	q.push(root);
	while (!q.empty()) {
		pNode = q.front();
		q.pop();
		cout << "[ ";
		for (int i = 0; i < pNode->keyNum; i++)
			cout << pNode->key[i] << " ";
		cout << "]" << endl;
		if (pNode->isLeaf)
			continue;
		for (int i = 0; i <= pNode->keyNum; i++)
			q.push(pNode->child[i]);
	}
}

int calculate(string s) {
	bool kuohaoAdd = true;
	stack<bool> tmp;
	bool add = true;
	int res = 0;
	int cur = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		char c = s[i];
		if (c >= '0'&&c <= '9')
		{
			cur = cur * 10 - '0' + c;
		}
		else if (c == '(')
		{
			tmp.push(add);
			kuohaoAdd = !(kuohaoAdd ^ add);
			add = true;
		}
		else if (c == ')')
		{
			if (add^kuohaoAdd)
			{
				res -= cur;
			}
			else
			{
				res += cur;
			}
			cur = 0;
			kuohaoAdd = !(kuohaoAdd^tmp.top());
			tmp.pop();
		}
		else if (c == '-')
		{
			if (add^kuohaoAdd)
			{
				res -= cur;
			}
			else
			{
				res += cur;
			}
			cur = 0;
			add = false;
		}
		else if (c == '+')
		{
			if (add^kuohaoAdd)
			{
				res -= cur;
			}
			else
			{
				res += cur;
			}
			cur = 0;
			add = true;
		}
	}
	if (add)
	{
		res += cur;
	}
	else
	{
		res -= cur;
	}
	return res;
}

int calculate123(string s) {
	int num = 0;
	int res = 0;
	char lastYunSuan = '+';
	vector<int> nums;
	int tmp;
	for (int i = 0; i < s.size(); ++i)
	{
		char c = s[i];
		if (c >= '0'&&c <= '9')
		{
			num = num * 10 - '0' + c;
		}
		else
		{
			if (c != ' ')
			{
				switch (lastYunSuan)
				{
				case '+':
					nums.push_back(num);
					break;
				case '-':
					nums.push_back(-num);
					break;
				case '*':
					tmp = nums.back();
					nums.pop_back();
					tmp *= num;
					nums.push_back(tmp);
					break;
				case '/':
					tmp = nums.back();
					nums.pop_back();
					tmp /= num;
					nums.push_back(tmp);
					break;
				}
				num = 0;
				lastYunSuan = c;
			}
		}
	}
	switch (lastYunSuan)
	{
	case '+':
		nums.push_back(num);
		break;
	case '-':
		nums.push_back(-num);
		break;
	case '*':
		tmp = nums.back();
		nums.pop_back();
		tmp *= num;
		nums.push_back(tmp);
		break;
	case '/':
		tmp = nums.back();
		nums.pop_back();
		tmp /= num;
		nums.push_back(tmp);
		break;
	}
	for (int i = 0; i < nums.size(); ++i)
	{
		res += nums[i];
	}
	return res;
}

class Solution {
public:
	vector<int> res;
	vector<int> diffWaysToCompute(string input) {
		vector<int> nums;
		vector<char> fuHao;
		int n = 0;
		for (auto &c : input)
		{
			if (c >= '0'&&c <= '9')
			{
				n = n * 10 + c - '0';
			}
			else
			{
				nums.push_back(n);
				fuHao.push_back(c);
				n = 0;
			}
		}
		nums.push_back(n);
		calculate(nums, fuHao);
		return res;
	}
	void calculate(vector<int> &nums, vector<char> &fuHao)
	{
		if (nums.size() == 1)
		{
			res.push_back(nums[0]);
			return;
		}
		vector<int> tmp;
		vector<char> tmpF;
		for (int i = 0; i < nums.size() - 1; ++i)
		{
			vector<int> tt = tmp;
			vector<char> ttF = tmpF;
			int tmpNum;
			switch (fuHao[i])
			{
			case '+':
				tmpNum = nums[i] + nums[i + 1];
				break;
			case '-':
				tmpNum = nums[i] - nums[i + 1];
				break;
			case '*':
				tmpNum = nums[i] * nums[i + 1];
				break;
			}
			tt.push_back(tmpNum);
			for (int j = i + 2; j < nums.size(); ++j)
			{
				tt.push_back(nums[j]);
				ttF.push_back(fuHao[j - 1]);
			}
			calculate(tt, ttF);
			tmp.push_back(nums[i]);
			tmpF.push_back(fuHao[i]);
		}
	}
};


char findKthBit(int n, int k) {
	if (k == 1) {
		return '0';
	}
	int tmp = k;
	while (tmp % 2 == 0)
	{
		tmp /= 2;
	}
	if (tmp == 1)
	{
		return '1';
	}
	string s = "0111001101100011";
	bool flag = 0;
	while (k > 15)
	{
		int i = 16;
		while (i < k)
		{
			i *= 2;
		}
		k = i - k;
		flag = !flag;
	}
	if (k == 0)
	{
		k = 1;
	}
	if (!flag)
	{
		return s[k - 1];
	}
	if (s[k - 1] == '1')
	{
		return '0';
	}
	return '1';
}

int nthUglyNumber(int n) {
	vector<int> nums = vector<int>(n);
	int ind2 = 0;
	int ind3 = 0;
	int ind5 = 0;
	nums[0] = 1;
	int i = 1;
	while (i < n)
	{
		int tmp2 = nums[ind2] * 2;
		int tmp3 = nums[ind3] * 3;
		int tmp5 = nums[ind5] * 5;
		int min;
		if (tmp2 <= tmp3&&tmp2 <= tmp5)
		{
			min = tmp2;
		}
		else if (tmp3 <= tmp2&&tmp3 <= tmp5)
		{
			min = tmp3;
		}
		else
		{
			min = tmp5;
		}
		nums[i++] = min;
		if (tmp2 == min)
		{
			ind2++;
		}
		if (tmp3 == min)
		{
			ind3++;
		}
		if (tmp5 == min)
		{
			ind5++;
		}
	}
	return nums[n - 1];
}

int main()
{
	WordDictionary* obj = new WordDictionary();
	obj->addWord("bad");
	obj->addWord("dad");
	obj->addWord("mad");
	obj->search("pad");
	obj->search("bad");
	obj->search(".ad");
	obj->search("b..");
	vector<vector<int>> v1 = { {0,1 },{1,2},{0,2} };
	vector<double> v2 = { 0.5,0.5,0.3 };
	vector<int> v3 = { 9,12,3,7,15 };
	vector<vector<char>> v4 = { {'1','0','1','0','0'} ,{'1','0','1','1','1'} ,{'1','1','1','1','1'} ,{'1','0','0','1','0'} };

	nthUglyNumber(10);

	return 0;
}