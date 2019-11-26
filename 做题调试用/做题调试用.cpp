// 做题调试用.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <math.h>
#include<algorithm>
#include <map>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}	
};

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	if (nums1.size() <= nums2.size())
	{
		int num = nums1.size() + nums2.size();
		int cut = 0;
		if (num % 2)
		{
			//总数为奇数，找到第num/2+1个数
			cut = num / 2 + 1;
			if (nums1.size() == 0)
			{
				return nums2[cut];
			}
			int leftMax = nums2[cut - 1];
			int rightMin = 0;
			if (cut < nums2.size())
			{
				rightMin = nums1[0] < nums2[cut] ? nums1[0] : nums2[cut];
			}
			else
			{
				rightMin = nums1[0];
			}
			int i = 0;
			while (leftMax > rightMin)
			{
				leftMax = nums1[i];
				if (cut - i - 2 > 0)
				{
					leftMax = nums1[i] > nums2[cut - i - 2] ? nums1[i] : nums2[cut - i - 2];
				}
				if (++i < nums1.size())
				{
					rightMin = nums1[i] < nums2[cut - i] ? nums1[i] : nums2[cut - i];
				}
				else
				{
					rightMin = nums2[cut - i];
				}
			}
			return leftMax;
		}
		else
		{
			cut = num / 2;
			if (nums1.size() == 0)
			{
				return (nums1[cut] + nums1[cut + 1]) / 2;
			}
			int leftMax = nums2[cut - 1];
			int rightMin = nums1[0];
			if (cut < nums2.size())
			{
				rightMin = nums1[0] < nums2[cut] ? nums1[0] : nums2[cut];
			}
			int i = 0;
			while (leftMax > rightMin)
			{
				leftMax = nums1[i];
				if (cut - i - 2 >= 0)
				{
					leftMax = nums1[i] > nums2[cut - i - 2] ? nums1[i] : nums2[cut - i - 2];
				}
				rightMin = nums2[cut - i - 1];
				if (++i < nums1.size())
				{
					rightMin = nums1[i] < nums2[cut - i] ? nums1[i] : nums2[cut - i];
				}
			}
			return (leftMax + rightMin) / 2.0;
		}
	}
	else
	{
		return findMedianSortedArrays(nums2, nums1);
	}
}

string longestPalindrome(string s) {
	int length = s.size();
	if (length == 1)
	{
		return s;
	}
	int maxSize = 0;
	string result;
	for (int i = 0; i != length; i++)
	{
		for (int j = (length - 1); j != i; j--)
		{
			if (s[j] == s[i])
			{
				int k = 1;
				while (s[j-k] == s[i + k] && ((j-k) >= (i + k)))
				{
					k++;
				}
				if ((j-k) < (i + k))
				{
					int size = j - i + 1;
					if (size > maxSize)
					{
						maxSize = size;
						result = s.substr(i, size);
					}
				}
			}
		}
	}
	if (result.size() == 0)
	{
		result = s.substr(0, 1);
	}
	return result;
}

string convert(string s, int numRows) {
	if (numRows == 1)
	{
		return s;
	}
	vector<vector<char> > v(numRows);
	int j = 1;
	int dir = 1;
	for (int i = 0; i < s.size(); i++)
	{
		v[j - 1].push_back(s[i]);
		if (j == numRows)
		{
			dir = -1;
		}
		else if (j == 1)
		{
			dir = 1;
		}
		j += dir;
	}
	string s1;
	for (int i = 0; i < numRows; i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			s1.append(1,v[i][j]);
		}
	}
	return s1;
}

int reverse(int x) {
	long sum = 0;
	while (x != 0)
	{
		int pop = x % 10;
		if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && pop > 7)) return 0;
		if (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && pop < -8)) return 0;
		sum = sum * 10 + pop;
		x = x / 10;
	}
	return sum;
}

int myAtoi(string str) {
	while (str.size() == 0)
	{
		return 0;
	}
	int i = 0;
	char c = str[i];
	while (c == ' ')
	{
		i++;
		c = str[i];
	}
	int sum = 0;
	if (c == '-')
	{
		i++;
		c = str[i];
		while (c >= 48 && c <= 57)
		{
			int num = c - 48;
			if (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && num > 8)) return INT_MIN;
			sum = sum * 10 - num;
			i++;
			c = str[i];
		}
		return sum;
	}
	else if ((c >= 48 && c <= 57) || c == '+')
	{
		if (c == '+')
		{
			i++;
			c = str[i];
		}
		while (c >= 48 && c <= 57)
		{
			int num = c - 48;
			if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && num > 7)) return INT_MAX;
			sum = sum * 10 + num;
			i++;
			c = str[i];
		}
		return sum;
	}
	return 0;
}

bool isPalindrome(int x) {
	int ini = x;
	if (x < 0)
	{
		return false;
	}
	if (x < 10)
	{
		return true;
	}
	int num = 0;
	while (x)
	{
		int pop = x % 10;
		if (num > INT_MAX / 10 || (num == INT_MAX && pop > 7)) return false;
		num = num * 10 + pop;
		x = x / 10;
	}
	if (num == ini)
	{
		return true;
	}
	return false;
}

bool isMatch(string s, string p) {
	int slen = s.length() + 1;
	int plen = p.length() + 1;
	bool **dp = new bool*[slen];
	for (int i = 0; i < slen; ++i) dp[i] = new bool[plen];
	for (int i = 0; i < slen; ++i)
	{
		for (int j = 0; j < plen; ++j)
		{
			dp[i][j] = false;
		}
	}
	dp[0][0] = true;
	for (int j = 0; j < plen - 1; ++j)
	{
		if (p[j] == '*')
		{
			dp[0][j + 1] = (j >= 1 && dp[0][j - 1]);
		}
	}
	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < p.length(); j++) {
			if (p[j] == s[i] || p[j] == '.')
			{
				dp[i+1][j+1] = dp[i][j];
			}
			else if (p[j] == '*')
			{
				if (p[j - 1] == s[i] || p[j - 1] == '.')
				{
					dp[i + 1][j + 1] = (dp[i][j] || dp[i][j + 1] || dp[i + 1][j - 1]);
				}
				else
				{
					dp[i + 1][j + 1] = dp[i + 1][j - 1];
				}
			}
			/*if (j > 1 && p[j - 1] == '*') {
				dp[i][j] = dp[i][j - 2] || (i > 0 && (s[i - 1] == p[j - 2] || p[j - 2] == '.') && dp[i - 1][j]);
			}
			else {
				dp[i][j] = i > 0 && dp[i - 1][j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.');
			}*/
		}
	}
	return dp[slen - 1][plen - 1];
}

int maxArea(vector<int>& height) {
	int size = height.size() - 1;
	int max = 0;
	int left = 0;
	int right = size;

	while (left < right)
	{
		int num1 = height.at(left);
		int num2 = height.at(right);
		if (num1 < num2)
		{
			int v = num1 * (right - left);
			if (v > max)
			{
				max = v;
			}
			left++;
		}
		else if (num1 >= num2)
		{
			int v = num2 * (right - left);
			if (v > max)
			{
				max = v;
			}
			right--;
		}
	}
	return max;
}

string intToRoman(int num) {
	int i = 1;
	string result;
	while (num)
	{
		int tmpNum = num % 10;
		//个位
		if (i == 1)
		{
			//0-3
			if (tmpNum < 4)
			{
				string tmpStr(tmpNum, 'I');
				result = tmpStr + result;
			}
			else if (tmpNum == 4)
			{
				result = "IV" + result;
			}
			else if (tmpNum > 4 && tmpNum < 9)
			{
				string tmpStr = "V";
				tmpStr.append(tmpNum - 5, 'I');
				result = tmpStr + result;
			}
			else
			{
				result = "IX" + result;
			}
		}
		//十位
		else if (i == 2)
		{
			//0-3
			if (tmpNum < 4)
			{
				string tmpStr(tmpNum, 'X');
				result = tmpStr + result;
			}
			else if (tmpNum == 4)
			{
				result = "XL" + result;
			}
			else if (tmpNum > 4 && tmpNum < 9)
			{
				string tmpStr = "L";
				tmpStr.append(tmpNum - 5, 'X');
				result = tmpStr + result;
			}
			else
			{
				result = "XC" + result;
			}
		}
		//百位
		else if (i == 3)
		{
			//0-3
			if (tmpNum < 4)
			{
				string tmpStr(tmpNum, 'C');
				result = tmpStr + result;
			}
			else if (tmpNum == 4)
			{
				result = "CD" + result;
			}
			else if (tmpNum > 4 && tmpNum < 9)
			{
				string tmpStr = "D";
				tmpStr.append(tmpNum - 5, 'C');
				result = tmpStr + result;
			}
			else
			{
				result = "CM" + result;
			}
		}
		//千位
		else
		{
			string tmpStr(tmpNum, 'M');
			result = tmpStr + result;
		}
		i++;
		num = num / 10;
	}
	return result;
}

int romanToInt(string s) {
	char pre = ' ';
	int result = 0;
	for (auto it = s.rbegin(); it != s.rend(); it++)
	{
		char tmpC = *it;
		if (tmpC == 'I')
		{
			if (pre != 'V'&&pre != 'X')
			{
				result++;
			}
			else
			{
				result--;
			}
		}
		else if (tmpC == 'V')
		{
			result += 5;
		}
		else if (tmpC == 'X')
		{
			if (pre != 'L'&&pre != 'C')
			{
				result += 10;
			}
			else
			{
				result -= 10;
			}
		}
		else if (tmpC == 'L')
		{
			result += 50;
		}
		else if (tmpC == 'C')
		{
			if (pre != 'D'&&pre != 'M')
			{
				result += 100;
			}
			else
			{
				result -= 100;
			}
		}
		else if (tmpC == 'D')
		{
			result += 500;
		}
		else if (tmpC == 'M')
		{
			result += 1000;
		}
		pre = tmpC;
	}
	return result;
}

string longestCommonPrefix(vector<string>& strs) {
	string result;
	if (strs.size() == 0)
	{
		return result;
	}
	result = strs.front();
	for (auto it = strs.begin(); it != strs.end(); it++)
	{
		string same;
		string tmp = *it;
		int size = result.size() < tmp.size() ? result.size() : tmp.size();
		for (int i = 0; i < size; i++)
		{
			if (result[i] == (tmp[i]))
			{
				same.append(1, result[i]);
			}
			else
			{
				break;
			}
		}
		result = same;
	}
	return result;
}

vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>> result;
	int size = nums.size() - 1;
	if (size < 2)
	{
		return result;
	}
	sort(nums.begin(), nums.end());
	for (int i = 0; i < size+1; i++)
	{
		int ni = nums[i];
		for (int j = size; j > i; j--)
		{
			int nj = nums[j];
			if (ni == nj)
			{
				if (ni != 0)
				{
					break;
				}
			}
			if (ni > 0 && nj > 0)
			{
				return result;
			}
			else if (ni < 0 && nj < 0)
			{
				break;
			}
			int num = -ni - nj;
			if (num <= 0)
			{
				for (int k = i + 1; k < j; k++)
				{
					int nk = nums[k];
					if (nk > num)
					{
						break;
					}
					else if (nk == num)
					{
						result.push_back({ ni, nk, nj });
						break;
					}
				}
			}
			else if (num > 0)
			{
				for (int k = j - 1; k > i; k--)
				{
					int nk = nums[k];
					if (nk < num)
					{
						break;
					}
					else if (nk == num)
					{
						int t[3] = { ni,nk,nj };
						vector<int> tmp(t, t + 3);
						result.push_back(tmp);
						break;
					}
				}
			}
			while (j - 1 > i && nj == nums.at(j - 1))
			{
				j--;
			}
		}
		while (i < size && ni == nums.at(i + 1))
		{
			i++;
		}
	}
	return result;
}

int threeSumClosest(vector<int>& nums, int target) {
	int size = nums.size() - 1;
	int min=INT_MAX;
	int result = 0;
	sort(nums.begin(), nums.end());
	for (int i = 0; i < size + 1; i++)
	{
		int ni = nums[i];
		for (int j = size; j > i; j--)
		{
			int nj = nums[j];
			int num = target - ni - nj;
			if (num <= 0)
			{
				for (int k = i + 1; k < j; k++)
				{
					int nk = nums[k];
					if (nk > num)
					{
						if (nk - num < min)
						{
							min = nk - num;
							result = nk + ni + nj;
						}
						break;
					}
					else if (nk == num)
					{
						return target;
					}
					else if (nk < num)
					{
						if (num - nk < min)
						{
							min = num - nk;
							result = nk + ni + nj;
						}
					}
				}
			}
			else if (num > 0)
			{
				for (int k = j - 1; k > i; k--)
				{
					int nk = nums[k];
					if (nk < num)
					{
						if (num - nk < min)
						{
							min = num - nk;
							result = nk + ni + nj;
						}
						break;
					}
					else if (nk == num)
					{
						return target;
					}
					else if (nk > num)
					{
						if (nk - num < min)
						{
							min = nk - num;
							result = nk + ni + nj;
						}
					}
				}
			}
			while (j - 1 > i && nj == nums.at(j - 1))
			{
				j--;
			}
		}
		while (i < size && ni == nums.at(i + 1))
		{
			i++;
		}
	}
	return result;
}

vector<string> letterCombinations(string digits) {
	vector<string> tmp;	//存放每一位的备选字符
	vector<string> result;	//存放结果
	map<char, string> m = { {'2',"abc"},{'3',"def"} ,{'4',"ghi"} ,{'5',"jkl"} ,{'6',"mno"} ,{'7',"pqrs"} ,{'8',"tuv"} ,{'9',"wxyz"} };
	for (auto it = digits.begin(); it != digits.end(); it++)
	{
		tmp.push_back(m[*it]);
	}
	for (auto it = tmp.begin(); it != tmp.end(); it++)
	{
		if (result.size() == 0)
		{
			for (auto it1 = (*it).begin(); it1 != (*it).end(); it1++)
			{
				string s;
				s.append(1, *it1);
				result.push_back(s);
			}
		}
		else
		{
			vector<string> tmp;
			for (auto it1 = (*it).begin(); it1 != (*it).end(); it1++)
			{
				for (auto it2 = result.begin(); it2 != result.end(); it2++)
				{
					string s = *it2;
					tmp.push_back(s.append(1, *it1));
				}
			}
			result = tmp;
		}

	}
	return result;
}

vector<vector<int>> fourSum(vector<int>& nums, int target) {
	vector<vector<int>> result;
	int size = nums.size() - 1;
	if (size < 3)
	{
		return result;
	}
	sort(nums.begin(), nums.end());
	for (int i = 0; i < size + 1; i++)
	{
		int ni = nums[i];
		for (int j = size; j > i; j--)
		{
			int nj = nums[j];
			for (int k = i + 1; k < j; k++)
			{
				int nk = nums[k];
				int num = target - ni - nj - nk;
				if (num < nk)
				{
					break;
				}
				for (int l = k + 1; l < j; l++)
				{
					int nl = nums[l];
					if (nl > num)
					{
						break;
					}
					else if (num == nl)
					{
						result.push_back({ ni, nk, nl, nj });
						break;
					}
				}
				while (k + 1 < j && nums[k] == nums[k + 1])
				{
					k++;
				}
			}
			while (j - 1 > i && nj == nums.at(j - 1))
			{
				j--;
			}
		}
		while (i < size && ni == nums.at(i + 1))
		{
			i++;
		}
	}
	return result;
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode* preNode = NULL;
	ListNode* deleteNode = head;
	ListNode* tmp = head;
	while (tmp != NULL && n != 1)
	{
		tmp = tmp->next;
		n--;
	}
	while (tmp->next != NULL)
	{
		preNode = deleteNode;
		deleteNode = deleteNode->next;
		tmp = tmp->next;
	}
	if (preNode == NULL)
	{
		ListNode* t = head;
		head = head->next;
		delete t;
	}
	else
	{
		preNode->next = deleteNode->next;
		delete deleteNode;
	}

	//两次遍历
	/*int num = 0;
	ListNode* preNode = NULL;
	ListNode* tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		num++;
	}
	if(num<n)
	{
		return NULL;
	}
	int time = num - n;
	tmp = head;
	while (time)
	{
		preNode = tmp;
		tmp = tmp->next;
		time--;
	}
	if (preNode == NULL)
	{
		ListNode* t = head;
		head = head->next;
		delete t;
	}
	else
	{
		preNode->next = tmp->next;
		delete tmp;
	}*/
	return head;
}

bool isValid(string s) {
	if (s.size() == 0)
	{
		return true;
	}
	vector<char> tmp;
	map<char, char> m = { { '(',')' }, { '[',']' }, { '{','}' } };
	for (int i = 0; i < s.size(); i++)
	{
		if (m[s[i]])
		{
			tmp.push_back(s[i]);
		}
		else
		{
			if (tmp.size() == 0)
			{
				return false;
			}
			char last = tmp.back();
			if (m[last] != s[i])
			{
				return false;
			}
			tmp.pop_back();
		}
	}
	if (tmp.size() != 0)
	{
		return false;
	}
	return true;
}

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	if (l1 == NULL)
	{
		return l2;
	}
	else if (l2 == NULL)
	{
		return l1;
	}
	ListNode* preTmp = NULL;
	ListNode* tmp = l1;
	ListNode* tmp2 = l2;
	while (tmp != NULL && tmp2 != NULL)
	{
		if (tmp2->val < tmp->val)
		{
			ListNode* ttmp2 = tmp2->next;
			tmp2->next = tmp;
			if (preTmp != NULL)
			{
				preTmp->next = tmp2;
			}
			tmp = tmp2;
			tmp2 = ttmp2;
		}
		else
		{
			preTmp = tmp;
			tmp = tmp->next;
		}
	}
	if (tmp2 != NULL)
	{
		preTmp->next = tmp2;
	}
	return l1->val <= l2->val ? l1 : l2;
}

void backCheck(vector<string> &result, string track, int left, int right)
{
	if (left == 0 && right == 0) result.push_back(track);
	if (right == 0)
	{
		backCheck(result, track + "(", left - 1, right + 1);
	}
	if (right > 0 && left > 0)
	{
		backCheck(result, track + "(", left - 1, right + 1);
		backCheck(result, track + ")", left, right - 1);
	}
	if (right > 0 && left == 0)
	{
		backCheck(result, track + ")", left, right - 1);
	}
}

vector<string> generateParenthesis(int n) {
	int left = n;
	int right = 0;
	vector<string> result;
	string track;
	backCheck(result, track, left, right);
	return result;
}

ListNode* mergeKLists(vector<ListNode*>& lists) {
	ListNode* tmpNode = NULL;
	for (auto it = lists.begin(); it != lists.end(); it++)
	{
		tmpNode = mergeTwoLists(tmpNode, *it);
	}
	return tmpNode;
}

ListNode* swapPairs(ListNode* head) {
	ListNode* ppreNode = NULL;
	ListNode* preNode = NULL;
	ListNode* tmpNode = head;
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			head = head->next;
		}
		else
		{
			return head;
		}
	}
	while (tmpNode != NULL)
	{
		if (preNode != NULL)
		{
			if (ppreNode != NULL)
			{
				ppreNode->next = tmpNode;
			}
			preNode->next = tmpNode->next;
			tmpNode->next = preNode;
			tmpNode = preNode->next;
			ppreNode = preNode;
			preNode = NULL;
		}
		else
		{
			preNode = tmpNode;
			tmpNode = tmpNode->next;
		}
	}
	return head;
}

void reverse(ListNode* head)
{
	ListNode* cur = head;
	ListNode* pre = NULL;
	while (cur!= NULL)
	{
		ListNode* tmp = cur->next;
		cur->next = pre;
		pre = cur;
		cur = tmp;
	}
}

ListNode* reverseKGroup(ListNode* head, int k) {
	ListNode* result = head;
	for (int i = 1; i < k; i++)
	{
		if (result->next != NULL)
		{
			result = result->next;
		}
		else
		{
			return head;
		}
	}
	ListNode* startNode = head;
	ListNode* preNode = NULL;
	while (startNode != NULL)
	{
		ListNode* endNode = startNode;
		for (int i = 1; i < k; i++)
		{
			if (endNode->next != NULL)
			{
				endNode = endNode->next;
			}
			else
			{
				return result;
			}
		}
		ListNode* tmpNode;
		if (endNode != NULL)
		{
			tmpNode = endNode->next;
			endNode->next = NULL;
			reverse(startNode);
			startNode->next = tmpNode;
			if (preNode != NULL)
			{
				preNode->next = endNode;
			}
			preNode = startNode;
			startNode = tmpNode;
		}
	}
	return result;
}

int removeDuplicates(vector<int>& nums) {
	if (nums.size() == 0)
	{
		return 0;
	}
	vector<int>::iterator it = nums.begin();
	int pre = nums.front();
	it++;
	while (it != nums.end())
	{
		if (*it == pre)
		{
			it = nums.erase(it);
		}
		else
		{
			pre = *it++;
		}
	}
	return nums.size();
}

int removeElement(vector<int>& nums, int val) {
	for (auto it = nums.begin(); it != nums.end();)
	{
		if (*it == val)
		{
			it = nums.erase(it);
		}
		else
		{
			it++;
		}
	}
	return nums.size();
}

int strStr(string haystack, string needle) {
	if (needle.size() == 0)
	{
		return 0;
	}
	char first = needle[0];
	int size = haystack.size();
	int needleSize = needle.size();
	for (int i = 0; i < size; i++)
	{
		if (haystack[i] == first)
		{
			int j = 1;
			for (; j < needleSize; j++)
			{
				if (i + j < size)
				{
					if (haystack[i + j] != needle[j])
					{
						break;
					}
				}
				else
				{
					return -1;
				}
			}
			if (j == needleSize)
			{
				return i;
			}
		}
	}
	return -1;
}

int divide(int dividend, int divisor) {
	if (dividend == INT_MIN && divisor == -1)
	{
		return INT_MAX;
	}
	// 符号同化,正数转为负数
	int flag1 = -1;
	int flag2 = -1;
	if (dividend >= 0)
	{
		flag1 = 1;
		dividend = 0 - dividend;
	}
	if (divisor >= 0)
	{
		flag2 = 1;
		divisor = 0 - divisor;
	}
	// 结果符号
	int flag = 1;
	if (flag1 != flag2) flag = -1;
	// 特殊值处理 -2 / -4 
	if (dividend > divisor) return 0;

	int num = 0;
	int count = 0;
	while (dividend < 0)
	{
		int divisor_pow_current = divisor;
		int divisor_pow_last = 0;
		int result = -1;
		while (true)
		{
			divisor_pow_last = divisor_pow_current;
			// 越界处理 防止 divisor_pow_current += divisor_pow_current 越界
			if (INT_MIN - divisor_pow_current > divisor_pow_current) break;
			divisor_pow_current += divisor_pow_current;
			if (divisor_pow_current < dividend) break;
			result += result;
		}
		dividend -= divisor_pow_last;
		num += result;
	}
	if (dividend != 0) num++;

	if (flag < 0) return num;
	else return 0 - num;
}

vector<int> findSubstring(string s, vector<string>& words) {
	if (s.empty()||words.empty())
	{
		return {};
	}
	vector<int> result;
	map<string, int> m_map;
	int one_word_size = words[0].size();
	int word_number = words.size();
	for (auto it = words.begin(); it != words.end(); it++)
	{
		auto it1 = m_map.find(*it);
		if (it1 != m_map.end())
		{
			(*it1).second++;
		}
		else
		{
			m_map.insert({ *it,1 });
		}
	}
	int size = s.size();
	int right_border = size - one_word_size * word_number;
	for (int i = 0; i <= right_border; i++)
	{
		map<string, int> tmpMap = m_map;
		int match_num = 0;
		int right = i;
		string tmp = s.substr(right, one_word_size);
		while (tmpMap[tmp] > 0)
		{
			tmpMap[tmp]--;
			right += one_word_size;
			tmp = s.substr(right, one_word_size);
			match_num++;
		}
		if (match_num == word_number)
		{
			result.push_back(i);
		}
	}
	return result;
}

void nextPermutation(vector<int>& nums) {
	if (nums.size() == 0 || nums.size() == 1)
	{
		return;
	}
	int size = nums.size();
	int pre = nums.back();
	int preIndex = size - 1;
	//int nextBiggerMin = nums[0];
	//int nextBiggerMinIndex = 0;
	int i = size - 1;
	for (; i >= 0; i--)
	{
		if (nums[i] < pre)
		{
			break;
		}
		pre = nums[i];
	}
	if (i < 0)
	{
		reverse(nums.begin(), nums.end());
		return;
	}
	int j = i + 1;
	int nextBiggerMin = nums[j];
	for (; j < size; j++)
	{
		if (nums[j] <= nums[i])
		{
			j--;
			nextBiggerMin = nums[j];
			break;
		}
	}
	if (j == size)
	{
		j--;
		nextBiggerMin = nums[j];
	}
	nums[j] = nums[i];
	nums[i] = nextBiggerMin;
	j = size - 1;
	i++;
	while (i < j)
	{
		int tmp = nums[i];
		nums[i] = nums[j];
		nums[j] = tmp;
		i++;
		j--;
	}
}

int longestValidParentheses(string s) {
	int size = s.size();
	if (size == 0 || size == 1)
	{
		return 0;
	}
	int maxSize = 0;
	for (int i = 0; i < size; i++)
	{
		if (s[i] == ')')
		{
			continue;
		}
		int leftNum = 1;
		int tmpSize = 0;
		for (int j = i + 1; j < size; j++)
		{
			if (leftNum == 0)
			{
				if (s[j] == ')')
				{
					break;
				}
				leftNum++;
			}
			else
			{
				if (s[j] == '(')
				{
					leftNum++;
				}
				else
				{
					leftNum--;
				}
			}
			if (leftNum == 0)
			{
				tmpSize = j - i + 1;
			}
		}
		if (tmpSize > maxSize)
		{
			maxSize = tmpSize;
		}
	}
	return maxSize;
}

int search(vector<int>& nums, int target) {
	int size = nums.size();
	if(size==0)
	{
		return -1;
	}
	int start = 0;
	int end = size - 1;
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (target == nums[mid])
		{
			return mid;
		}
		//前半部有序
		if (nums[start] <= nums[mid])
		{
			//位于前半部
			if (target < nums[mid] && target >= nums[start])
			{
				end = mid - 1;
			}
			//位于后半部
			else
			{
				start = mid + 1;
			}
		}
		else
		{
			//位于后半部
			if (target > nums[mid] && target <= nums[end])
			{
				start = mid + 1;
			}
			//位于前半部
			else
			{
				end = mid - 1;
			}
		}
	}
	return -1;
}

vector<int> searchRange(vector<int>& nums, int target) {
	int size = nums.size();
	if (size == 0)
	{
		return { -1,-1 };
	}
	int start = 0;
	int end = size - 1;
	while (start <= end)
	{
		int mid = (end + start) / 2;
		if (nums[mid] == target)
		{
			int left = mid - 1;
			int right = mid + 1;
			while (left >= 0 && nums[left] == target)
			{
				left--;
			}
			while (right < size && nums[right] == target)
			{
				right++;
			}
			return { left + 1,right - 1 };
		}
		else if (nums[mid] < target)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return { -1,-1 };
}

int searchInsert(vector<int>& nums, int target) {
	int size = nums.size();
	if (size == 0)
	{
		nums.push_back(target);
		return 0;
	}
	int start = 0;
	int end = size - 1;
	while (start <= end)
	{
		int mid = (end + start) / 2;
		if (nums[mid] == target)
		{
			return mid;
		}
		else if (nums[mid] < target)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	auto it = nums.begin() + start;
	nums.insert(it, target);
	return start;
}

bool isValidSudoku(vector<vector<char>>& board) {
	vector<vector<char>> col;
	vector<vector<char>> block;
	vector<vector<char>> line;
	col.resize(9);
	block.resize(9);
	line.resize(9);
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			char tmp = board[i][j];
			if (tmp == '.')
			{
				continue;
			}
			int blockNum = i / 3 + j / 3 * 3;
			auto it = find(block[blockNum].begin(), block[blockNum].end(), tmp);
			if (it != block[blockNum].end())
			{
				return false;
			}
			block[blockNum].push_back(tmp);
			auto it2 = find(col[j].begin(), col[j].end(), tmp);
			if (it2 != col[j].end())
			{
				return false;
			}
			col[j].push_back(tmp);
			auto it3 = find(line[i].begin(), line[i].end(), tmp);
			if (it3 != line[i].end())
			{
				return false;
			}
			line[i].push_back(tmp);
		}
	}
	return true;
}

bool line[10][10], col[10][10], block[10][10];	//存储各行、列、块已用的数字
bool diguiSolveSudoku(vector<vector<char>>& board, int i, int j)
{
	bool ifFound = false;
	bool ifCan = false;
	int m, l;
	l = i;
	for (int k = 1; k < 10; k++)
	{
		if (line[i][k] == 1)
		{
			continue;
		}
		if (col[j][k] == 1)
		{
			continue;
		}
		if (block[i / 3 + j / 3 * 3][k] == 1)
		{
			continue;
		}
		line[i][k] = 1;
		col[j][k] = 1;
		block[i / 3 + j / 3 * 3][k] = 1;
		board[i][j] = '0' + k;
		for (m = j + 1; m < 9; m++)
		{
			if (board[i][m] == '.')
			{
				ifFound = true;
				break;
			}
		}
		if (m == 9)
		{
			for (l = i + 1; l < 9; l++)
			{
				for (m = 0; m < 9; m++)
				{
					if (board[l][m] == '.')
					{
						ifFound = true;
						break;
					}
				}
				if (ifFound)
				{
					break;
				}
			}
		}
		if (ifFound)
		{
			ifCan = diguiSolveSudoku(board, l, m);
		}
		else
		{
			return true;
		}
		if (!ifCan)
		{
			line[i][k] = 0;
			col[j][k] = 0;
			block[i / 3 + j / 3 * 3][k] = 0;
			board[i][j] = '.';
			continue;
		}
		else
		{
			return true;
		}
	}
	return false;
}
void solveSudoku(vector<vector<char>>& board) {
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (board[i][j] != '.')
			{
				int num = board[i][j] - '0';
				line[i][num] = 1;
				col[j][num] = 1;
				block[i / 3 + j / 3 * 3][num] = 1;
			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (board[i][j] == '.')
			{
				diguiSolveSudoku(board, i, j);
				return;
			}
		}
	}
}

string countAndSay(int n) {
	if (n == 1)
	{
		return "1";
	}
	string tmp = countAndSay(n - 1);
	string result;
	char pre = tmp.front();
	int count = 1;
	for (auto it = tmp.begin() + 1; it != tmp.end(); it++)
	{
		if (*it == pre)
		{
			count++;
		}
		else
		{
			char num = count + '0';
			result.append(1, num);
			result.append(1, pre);
			pre = *it;
			count = 1;
		}
	}
	char num = count + '0';
	result.append(1, num);
	result.append(1, pre);
	return result;
}

vector<vector<int>> result;
void diguiCombinationSum(vector<int>& candidates, int size, int target, vector<int> tmpResult) {
	int max = tmpResult.back();
	for (int i = 0; i < size; i++)
	{
		if (candidates[i] >= max)
		{
			if (candidates[i] == target)
			{
				tmpResult.push_back(target);
				result.push_back(tmpResult);
				return;
			}
			else if (candidates[i] < target)
			{
				tmpResult.push_back(candidates[i]);
				diguiCombinationSum(candidates, size, target - candidates[i], tmpResult);
				tmpResult.pop_back();
			}
			else
			{
				return;
			}
		}
		else
		{
			continue;
		}
	}
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
	sort(candidates.begin(), candidates.end());
	int size = candidates.size();
	for (int i = 0; i < size; i++)
	{
		vector<int> tmpResult;
		if (candidates[i] < target)
		{
			tmpResult.push_back(candidates[i]);
			diguiCombinationSum(candidates, size, target - candidates[i], tmpResult);
		}
		else if (candidates[i] == target)
		{
			tmpResult.push_back(candidates[i]);
			result.push_back(tmpResult);
		}
		else
		{
			break;
		}
	}
	return result;
}

void diguiCombinationSum2(vector<int> candidates,int lastI, int target, vector<int> tmpResult) {
	tmpResult.push_back(candidates[lastI]);
	int size = candidates.size();
	int pre = -1;
	for (int i = lastI+1; i < size; i++)
	{
		if (candidates[i] != pre)
		{
			pre = candidates[i];
			if (candidates[i] < target)
			{
				diguiCombinationSum2(candidates, i, target - candidates[i], tmpResult);
			}
			else if (candidates[i] == target)
			{
				tmpResult.push_back(target);
				result.push_back(tmpResult);
				return;
			}
			else
			{
				return;
			}
		}
	}
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
	sort(candidates.begin(), candidates.end());
	int size = candidates.size();
	int pre = -1;
	for (int i = 0; i < size; i++)
	{
		if (candidates[i] != pre)
		{
			pre = candidates[i];
			vector<int> tmpResult;
			if (candidates[i] < target)
			{
				diguiCombinationSum2(candidates, i, target - candidates[i], tmpResult);
			}
			else if (candidates[i] == target)
			{
				tmpResult.push_back(candidates[i]);
				result.push_back(tmpResult);
			}
			else
			{
				break;
			}
		}
	}
	return result;
}

int firstMissingPositive(vector<int>& nums) {
	int size = nums.size();
	for (int i = 0; i < size; i++)
	{
		int tmp = nums[i];
		if (tmp <= size && tmp > 0)
		{
			if (tmp - 1 != i && nums[tmp - 1] != tmp)
			{
				nums[i] = nums[tmp - 1];
				nums[tmp - 1] = tmp;
				i--;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (i + 1 != nums[i])
		{
			return i + 1;
		}
	}
	return size + 1;
}

int trap(vector<int>& height) {
	int size = height.size();
	if (size == 0 || size == 1 || size == 2)
	{
		return 0;
	}
	int result = 0;
	for (int i = 1; i < size; i++)
	{
		int left = i - 1;
		int preLeft = height[i];
		int right = i + 1;
		int preRight = height[i];
		while (left >= 0)
		{
			if (height[left] > preLeft)
			{
				preLeft = height[left];
			}
			left--;
		}
		while (right < size)
		{
			if (height[right] > preRight)
			{
				preRight = height[right];
			}
			right++;
		}
		result += preLeft <= preRight ? preLeft : preRight;
		result -= height[i];
	}
	return result;
}

string multiply(string num1, string num2) {
	int n1 = num1.size();
	int n2 = num2.size();
	string res(n1 + n2, '0');
	for (int i = n2 - 1; i >= 0; i--) 
	{
		//int add = 0;
		for (int j = n1 - 1; j >= 0; j--)
		{
			int temp = (res[i + j + 1] - '0') + (num1[j] - '0')*(num2[i] - '0');
			res[i + j + 1] = temp % 10 + '0';//当前位
			res[i + j] += temp / 10;
		}
	}

	//去除首位'0'
	for (int i = 0; i < n1 + n2; i++)
	{
		if (res[i] != '0')
		{
			return res.substr(i);
		}
	}
	return "0";
}

bool isMatch2(string s, string p) {
	int j = 0;
	for (int i = 0, lastStar = -1, lastMatch = 0; i < s.size();)
	{
		if (s[i] == p[j] || p[j] == '?')
		{
			i++;
			j++;
		}
		else if (p[j] == '*')
		{
			lastStar = j++;
			lastMatch = i;
		}
		else if (lastStar != -1)
		{
			i = lastMatch++;
			j = lastStar + 1;
		}
		else
		{
			return false;
		}
	}
	while (j < p.length() && p[j] == '*') ++j;

	return j == p.length();
}

int jump(vector<int>& nums) {
	int ans = 0;
	int begin = 0;
	int end = 1;
	while (end < nums.size())
	{
		int temp = 0;
		for (int i = begin; i < end; i++)
		{
			temp = max(temp, i + nums[i]);
		}
		begin = end;
		end = temp + 1;
		ans++;
	}
	return ans;
}

void diguiPermute(vector<int> nums, int remove, vector<int> oneResult)
{
	auto iter = find(nums.begin(), nums.end(), remove);
	nums.erase(iter);
	oneResult.push_back(remove);
	if (nums.size() == 0)
	{
		result.push_back(oneResult);
		return;
	}
	for (auto it = nums.begin(); it != nums.end(); it++)
	{
		diguiPermute(nums, *it, oneResult);
	}
}
vector<vector<int>> permute(vector<int>& nums) {
	vector<int> oneResult;
	for (auto it = nums.begin(); it != nums.end(); it++)
	{
		diguiPermute(nums, *it, oneResult);
	}
	return result;
}

void diguiPermuteUnique(vector<int> nums, int remove, vector<int> oneResult)
{
	auto iter = find(nums.begin(), nums.end(), remove);
	nums.erase(iter);
	oneResult.push_back(remove);
	int size = nums.size();
	if (size == 0)
	{
		result.push_back(oneResult);
		return;
	}
	for (int i = 0; i < size;)
	{
		int tmp = nums[i];
		diguiPermuteUnique(nums, tmp, oneResult);
		i++;
		while (i < nums.size() && tmp == nums[i])
		{
			i++;
		}
	}
}
vector<vector<int>> permuteUnique(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	vector<int> oneResult;
	for (int i = 0; i < nums.size();)
	{
		int tmp = nums[i];
		diguiPermuteUnique(nums, tmp, oneResult);
		i++;
		while (i < nums.size() && tmp == nums[i])
		{
			i++;
		}
	}
	return result;
}

void rotate(vector<vector<int>>& matrix) {
	int size = matrix.size();
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			int tmp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = tmp;
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size/2; j++)
		{
			int tmp = matrix[i][j];
			matrix[i][j] = matrix[i][size - j - 1];
			matrix[i][size - j - 1] = tmp;
		}
	}
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
	vector<vector<string>> result;
	vector<map<char,int>> mapChar;
	for (int i = 0; i < strs.size(); i++)
	{
		string str = strs[i];
		map<char, int> tmpMap;
		for (int j = 0; j < str.size(); j++)
		{
			auto it = tmpMap.find(str[j]);
			if (it == tmpMap.end())
			{
				tmpMap.insert({ str[j],1 });
			}
			else
			{
				(*it).second++;
			}
		}
		if (result.size() == 0)
		{
			vector<string> tmp;
			mapChar.push_back(tmpMap);
			tmp.push_back(str);
			result.push_back(tmp);
		}
		else
		{
			int j = 0;
			for (; j < result.size(); j++)
			{
				if (result[j][0].size() == str.size())
				{
					bool b = true;
					for (auto it = tmpMap.begin(); it != tmpMap.end(); it++)
					{
						if (mapChar[j][(*it).first] != (*it).second)
						{
							b = false;
							break;
						}
					}
					if (b)
					{
						result[j].push_back(str);
						break;
					}
				}
			}
			if (j == result.size())
			{
				vector<string> tmp;
				mapChar.push_back(tmpMap);
				tmp.push_back(str);
				result.push_back(tmp);
			}
		}
	}
	return result;
}

double qpow(double a, long long b) {
	double res = 1;
	while (b) {
		if (b & 1) res = res * a;
		b >>= 1;
		a *= a;
	}
	return res;
}

double myPow(double x, long long n) {
	if (n == 0) return 1;
	if (n > 0) return qpow(x, n);
	if (n < 0) return 1 / qpow(x, -n);
	return 1.0;
}

vector<vector<string>> result1;
void huisuSolveNQueues(vector<vector<bool>> v, vector<string> oneResult, int line, int col, int n)
{
	if (v[line][col])
	{
		return;
	}
	string tmp(n, '.');
	tmp[col] = 'Q';
	oneResult.push_back(tmp);
	if (line == n - 1)
	{
		result1.push_back(oneResult);
		return;
	}
	//能被该点攻击的点
	for (int i = 0; i < n; i++)
	{
		v[i][col] = true;
		if (line - i >= 0 && col - i >= 0)
		{
			v[line - i][col - i] = true;
		}
		if (line - i >= 0 && col + i < n)
		{
			v[line - i][col + i] = true;
		}
		if (line + i < n&&col - i >= 0)
		{
			v[line + i][col - i] = true;
		}
		if (line + i < n&&col + i < n)
		{
			v[line + i][col + i] = true;
		}
	}
	for (int j = 0; j < n; j++)
	{
		huisuSolveNQueues(v, oneResult, line + 1, j, n);
	}
}
vector<vector<string>> solveNQueens(int n) {
	vector<vector<bool>> v(n, vector<bool>(n));
	vector<string> oneResult;

	for (int j = 0; j < n; j++)
	{
		huisuSolveNQueues(v, oneResult, 0, j, n);
	}
	return result1;
}

void huisuTotalNQueens(vector<vector<bool>> v, int& result, int line, int col, int n)
{
	if (v[line][col])
	{
		return;
	}
	if (line == n - 1)
	{
		result++;
		return;
	}
	//能被该点攻击的点
	for (int i = 0; i < n; i++)
	{
		v[i][col] = true;
		if (line - i >= 0 && col - i >= 0)
		{
			v[line - i][col - i] = true;
		}
		if (line - i >= 0 && col + i < n)
		{
			v[line - i][col + i] = true;
		}
		if (line + i < n&&col - i >= 0)
		{
			v[line + i][col - i] = true;
		}
		if (line + i < n&&col + i < n)
		{
			v[line + i][col + i] = true;
		}
	}
	for (int j = 0; j < n; j++)
	{
		huisuTotalNQueens(v, result, line + 1, j, n);
	}
}
int totalNQueens(int n) {
	vector<vector<bool>> v(n, vector<bool>(n));
	int result = 0;

	for (int j = 0; j < n; j++)
	{
		huisuTotalNQueens(v, result, 0, j, n);
	}
	return result;
}

int maxSubArray(vector<int>& nums) {
	int size = nums.size();
	if (size == 0)
	{
		return 0;
	}
	int j = 0;
	int result = nums[0];
	int tmp = 0;
	while (j < size)
	{
		tmp += nums[j];
		if (tmp > result)
		{
			result = tmp;
		}
		if (tmp < 0)
		{
			tmp = 0;
		}
		j++;
	}
	return result;
}

vector<int> spiralOrder(vector<vector<int>>& matrix) {
	vector<int> result;
	int lineSize = matrix.size();
	if (lineSize == 0)
	{
		return result;
	}
	int colSize = matrix[0].size();
	int lineTop = 0;
	int lineBot = lineSize - 1;
	int colFront = 0;
	int colBack = colSize - 1;
	int colAdd = 1;
	int lineAdd = 0;
	int curLine = 0;
	int curCol = 0;
	while (true)
	{
		result.push_back(matrix[curLine][curCol]);
		if (colAdd == 1 && lineAdd == 0)
		{
			if (curCol == colBack)
			{
				if (lineTop == lineBot)
				{
					break;
				}
				lineAdd = 1;
				colAdd = 0;
				lineTop++;
			}
		}
		else if (colAdd == 0 && lineAdd == 1)
		{
			if (curLine == lineBot)
			{
				if (colFront == colBack)
				{
					break;
				}
				lineAdd = 0;
				colAdd = -1;
				colBack--;
			}
		}
		else if (colAdd == -1 && lineAdd == 0)
		{
			if (curCol == colFront)
			{
				if (lineTop == lineBot)
				{
					break;
				}
				lineAdd = -1;
				colAdd = 0;
				lineBot--;
			}
		}
		else if (colAdd == 0 && lineAdd == -1)
		{
			if (curLine == lineTop)
			{
				if (colFront == colBack)
				{
					break;
				}
				lineAdd = 0;
				colAdd = 1;
				colFront++;
			}
		}
		curLine += lineAdd;
		curCol += colAdd;
	}
	return result;
}

bool diguiCanJump(vector<int> &nums, int cur, int& size)
{
	int step = nums[cur];
	if (step >= size - cur)
	{
		return true;
	}
	for (int i = step; i > 0; i--)
	{
		if (diguiCanJump(nums, cur + i, size))
		{
			return true;
		}
	}
	return false;
}
bool canJump(vector<int>& nums) {
	int size = nums.size();
	if (size == 0 || size == 1)
	{
		return true;
	}
	return diguiCanJump(nums, 0, size);
}

vector<vector<int>> merge(vector<vector<int>>& intervals) {
	vector<vector<int>> result;
	int size = intervals.size();
	if (size == 0)
	{
		return result;
	}
	sort(intervals.begin(), intervals.end(), [=](vector<int> v1,vector<int> v2) {
		return v1[0] < v2[0];
	});
	result.push_back(intervals[0]);
	for (int i = 0; i < size; i++)
	{
		int rSize = result.size();
		for (int j = 0; j < rSize; j++)
		{
			if (intervals[i][0] <= result[j][1])
			{
				if (intervals[i][1] > result[j][1])
				{
					result[j][1] = intervals[i][1];
				}
				break;
			}
			else if (intervals[i][0] > result[j][1])
			{
				if (j + 1 == rSize)
				{
					result.push_back(intervals[i]);
					break;
				}
				continue;
			}
		}
	}
	return result;
}

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
	vector<vector<int>> result;
	if (newInterval.size() == 0)
	{
		return intervals;
	}
	if (intervals.size() == 0)
	{
		result.push_back(newInterval);
		return result;
	}
	int size = intervals.size();
	int b = true;
	for (int i = 0; i < size; i++)
	{
		if (b&&intervals[i][0] > newInterval[0])
		{
			b = false;
			if (i != 0)
			{
				if (intervals[i - 1][1] >= newInterval[0])
				{
					result.pop_back();
					newInterval[0] = intervals[i - 1][0];
					if (intervals[i - 1][1] > newInterval[1])
					{
						newInterval[1] = intervals[i - 1][1];
					}
				}
			}
			int j = i;
			for (; j < size; j++)
			{
				if (newInterval[1] <= intervals[j][1])
				{
					if (newInterval[1] >= intervals[j][0])
					{
						newInterval[1] = intervals[j][1];
						result.push_back(newInterval);
						i = j;
						break;
					}
					else
					{
						result.push_back(newInterval);
						i = j - 1;
						break;
					}
				}
			}
			if (j == size)
			{
				result.push_back(newInterval);
				break;
			}
		}
		else
		{
			result.push_back(intervals[i]);
		}
	}
	if (b)
	{
		if (intervals.back()[1] < newInterval[1])
		{
			if (intervals.back()[1] >= newInterval[0])
			{
				result.pop_back();
				newInterval[0] = intervals.back()[0];
			}
			result.push_back(newInterval);
		}
	}
	return result;
}

int lengthOfLastWord(string s) {
	int size = s.size();
	if (size == 0)
	{
		return 0;
	}
	int result = 0;
	bool clear = false;
	for (int i = 0; i < size; i++)
	{
		if (s[i] == ' ')
		{
			clear = true;
		}
		else
		{
			if (clear)
			{
				clear = false;
				result = 0;
			}
			result++;
		}
	}
	return result;
}

vector<vector<int>> generateMatrix(int n) {
	vector<vector<int>> result(n, vector<int>(n));
	if (n == 0)
	{
		return result;
	}
	int lineTop = 0;
	int lineBot = n - 1;
	int colFront = 0;
	int colBack = n - 1;
	int colAdd = 1;
	int lineAdd = 0;
	int curLine = 0;
	int curCol = 0;
	int num = 1;
	while (true)
	{
		result[curLine][curCol] = num++;
		if (colAdd == 1 && lineAdd == 0)
		{
			if (curCol == colBack)
			{
				if (lineTop == lineBot)
				{
					break;
				}
				lineAdd = 1;
				colAdd = 0;
				lineTop++;
			}
		}
		else if (colAdd == 0 && lineAdd == 1)
		{
			if (curLine == lineBot)
			{
				if (colFront == colBack)
				{
					break;
				}
				lineAdd = 0;
				colAdd = -1;
				colBack--;
			}
		}
		else if (colAdd == -1 && lineAdd == 0)
		{
			if (curCol == colFront)
			{
				if (lineTop == lineBot)
				{
					break;
				}
				lineAdd = -1;
				colAdd = 0;
				lineBot--;
			}
		}
		else if (colAdd == 0 && lineAdd == -1)
		{
			if (curLine == lineTop)
			{
				if (colFront == colBack)
				{
					break;
				}
				lineAdd = 0;
				colAdd = 1;
				colFront++;
			}
		}
		curLine += lineAdd;
		curCol += colAdd;
	}
	return result;
}

string getPermutation(int n, int k) {
	vector<int> nums;
	for (int i = 1; i <= n; i++)
	{
		nums.push_back(i);
	}
	int nn = 1;
	for (int i = 2; i < n; i++)
	{
		nn *= i;
	}
	string result;
	k--;
	while (n > 1)
	{
		n--;
		int idex = k / nn;
		result.append(1, nums[idex] + '0');
		nums.erase(nums.begin() + idex);
		k = k % nn;
		nn /= n;
	}
	result.append(1, nums[0] + '0');
	return result;
}

ListNode* rotateRight(ListNode* head, int k) {
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	ListNode* lastNode = head;
	ListNode* firstNode = head;
	int num = 1;
	while (lastNode->next != NULL)
	{
		num++;
		lastNode = lastNode->next;
	}
	lastNode->next = firstNode;
	k = k % num;
	k = num - k;
	while (k != 0)
	{
		lastNode = lastNode->next;
		k--;
	}
	firstNode = lastNode->next;
	lastNode->next = NULL;
	return firstNode;
}

int uniquePaths(int m, int n) {
	int result = 0;
	if (m == 1 || n == 1)
	{
		return 1;
	}
	if (m > 1)
	{
		result += uniquePaths(m - 1, n);
	}
	if (n > 1)
	{
		result += uniquePaths(m, n - 1);
	}
	return result;
}

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
	if (obstacleGrid.size() == 0)
	{
		return 0;
	}
	int xSize = obstacleGrid[0].size();
	int ySize = obstacleGrid.size();
	vector<vector<long long>> dp(ySize, vector<long long>(xSize, 0));
	for (int i = 0; i < xSize; i++)
	{
		if (obstacleGrid[0][i] != 1)
		{
			dp[0][i] = 1;
		}
		else
		{
			break;
		}
	}
	for (int i = 0; i < ySize; i++)
	{
		if (obstacleGrid[i][0] != 1)
		{
			dp[i][0] = 1;
		}
		else
		{
			break;
		}
	}
	for (int i = 1; i < ySize; i++)
	{
		for (int j = 1; j < xSize; j++)
		{
			if (obstacleGrid[i][j] != 1)
			{
				dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
			}
		}
	}
	return dp[ySize - 1][xSize - 1];
}

int minPathSum(vector<vector<int>>& grid) {
	int xSize = grid.size();
	if (xSize == 0)
	{
		return 0;
	}
	int ySize = grid[0].size();
	vector<vector<long long>> dis(xSize, vector<long long>(ySize, 0));
	dis[0][0] = grid[0][0];
	for (int i = 1; i < ySize; i++)
	{
		dis[0][i] = dis[0][i - 1] + grid[0][i];
	}
	for (int i = 1; i < xSize; i++)
	{
		dis[i][0] = dis[i - 1][0] + grid[i][0];
	}
	for (int i = 1; i < xSize; i++)
	{
		for (int j = 1; j < ySize; j++)
		{
			dis[i][j] = grid[i][j] + min(dis[i - 1][j], dis[i][j - 1]);
		}
	}
	return dis[xSize - 1][ySize - 1];
}

bool isNumber(string s) {
	int size = s.size();
	if (size == 0)
	{
		return false;
	}
	bool num = false;
	bool point = false;
	bool e = false;
	bool backSpace = false;
	int i = 0;
	for (; i < size; i++)
	{
		if (s[i] != ' ')
		{
			break;
		}
	}
	for (; i < size; i++)
	{
		if (!backSpace)
		{
			if (s[i] == '0')
			{
				if (!num)
				{
					num = true;
					if (i + 1 == size)
					{
						return true;
					}
					if (s[i + 1] == '.')
					{
						continue;
					}
				}
			}
			else if ('1' <= s[i] && s[i] <= '9')
			{
				if (!num)
				{
					num = true;
				}
				continue;
			}
			else if (s[i] == '.')
			{
				if (e || point)
				{
					return false;
				}
				point = true;
			}
			else if (s[i] == 'e')
			{
				if (e||!num)
				{
					return false;
				}
				num = false;
				e = true;
			}
			else if (s[i] == '-' || s[i] == '+')
			{
				if (i != 0 && (s[i - 1] != 'e' && s[i - 1] != ' '))
				{
					return false;
				}
			}
			else if (s[i] == ' ')
			{
				backSpace = true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			if (s[i] != ' ')
			{
				return false;
			}
		}
	}
	return num;
}

vector<int> plusOne(vector<int>& digits) {
	for (int i = digits.size() - 1; i >= 0; i--)
	{
		int k = digits[i] + 1;
		digits[i] = k % 10;
		if (k / 10 == 0)
		{
			return digits;
		}
	}
	digits[0] = 1;
	digits.push_back(0);
	return digits;
}

string addBinary(string a, string b) {
	if (a.size() < b.size())
	{
		return addBinary(b, a);
	}
	int aIndex = a.size() - 1;
	int num0 = aIndex - b.size() + 1;
	for (int i = 0; i < num0; i++)
	{
		b = "0" + b;
	}
	int add = 0;
	while (aIndex >= 0)
	{
		int num = a[aIndex] - '0' + b[aIndex] - '0' + add;
		a[aIndex] = num % 2 + '0';
		add = num / 2;
		aIndex--;
	}
	if (add)
	{
		a = "1" + a;
	}
	return a;
}

vector<string> fullJustify(vector<string>& words, int maxWidth) {
	vector<string> result;
	int size = words.size();
	vector<string> tmp;
	int length = 0;
	for (int i = 0; i < size; i++)
	{
		length += words[i].size() + 1;
		if (length - 1 > maxWidth)
		{
			int size = tmp.size();
			int spaceNum = maxWidth - (length - words[i].size() - 2);
			string line;
			if (size > 1)
			{
				int eachNum = spaceNum / (size - 1) + 1;
				int restNum = spaceNum % (size - 1);
				for (int j = 0; j < size; j++)
				{
					if (j < size - 1)
					{
						line = line + tmp[j];
						line.append(eachNum, ' ');
						if (restNum)
						{
							line = line + " ";
							restNum--;
						}
					}
					else
					{
						line = line + tmp[j];
					}
				}
			}
			else
			{
				line = line + tmp[0];
				line.append(spaceNum, ' ');
			}
			result.push_back(line);
			i--;
			length = 0;
			tmp.clear();
		}
		else
		{
			tmp.push_back(words[i]);
		}
	}
	if (tmp.size() > 0)
	{
		string line;
		for (int i = 0; i < tmp.size(); i++)
		{
			line = line + tmp[i] + " ";
		}
		if (maxWidth > length)
		{
			line.append(maxWidth - length, ' ');
		}
		else if (maxWidth < length)
		{
			line.pop_back();
		}
		result.push_back(line);
	}
	return result;
}

int mySqrt(int x) {
	long long left = 0;
	long long right = x;
	while (left <= right)
	{
		long long mid = (left + right) / 2;
		if ((mid*mid) < x)
		{
			left = mid+1;
		}
		else if ((mid*mid) > x)
		{
			right = mid-1;
		}
		else
		{
			return mid;
		}
	}
	return right;

	//if (x == 0)
	//{
	//	return 0;
	//}
	//if (x < 4)
	//{
	//	return 1;
	//}
	//long long i = 2;
	//while (i*i <= x)
	//{
	//	i *= 2;
	//}
	//for (long long j = i / 2; j < i; j++)
	//{
	//	if (j*j > x)
	//	{
	//		return j - 1;
	//	}
	//	else if (j*j == x)
	//	{
	//		return j;
	//	}
	//}
	//return 0;
}

int climbStairs(int n) {
	if (n == 1 || n == 2 || n == 3)
	{
		return n;
	}
	vector<int> dp(n);
	dp[0] = 1;
	dp[1] = 2;
	for (int i = 2; i < n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n - 1];
	//if (n == 1 || n == 2 || n == 3)
	//{
	//	return n;
	//}
	//return climbStairs(n - 1) + climbStairs(n - 2);
}

string simplifyPath(string path) {
	int size = path.size();
	string tmp;
	vector<string> tmpVec;
	for (int i = 0; i < size; i++)
	{
		if (path[i] != '/')
		{
			tmp.push_back(path[i]);
		}
		else if (path[i] == '/' && !tmp.empty())
		{
			if (tmp == ".." )
			{
				if (!tmpVec.empty())
				{
					tmpVec.pop_back();
				}
			}
			else if (tmp != ".")
			{
				tmpVec.push_back(tmp);
			}
			tmp.clear();
			continue;
		}
	}
	if (tmp == "..")
	{
		if (!tmpVec.empty())
		{
			tmpVec.pop_back();
		}
	}
	else if (tmp != "."&&tmp != "")
	{
		tmpVec.push_back(tmp);
	}
	string result = "/";
	if (tmpVec.empty())
	{
		return result;
	}
	for (auto it = tmpVec.begin();;)
	{
		result += *it;
		it++;
		if (it != tmpVec.end())
		{
			result += "/";
		}
		else
		{
			break;
		}
	}
	return result;
}

int minDistance(string word1, string word2) {
	int size1 = word1.size() + 1;
	int size2 = word2.size() + 1;
	if (size1 == 0)
	{
		return size2;
	}
	if (size2 == 0)
	{
		return size1;
	}
	//第0行0列是空字符
	vector<vector<int>> dp(size1, vector<int>(size2, 0));
	for (int i = 1; i < size2; i++)
	{
		dp[0][i] = i;
	}
	for (int i = 1; i < size1; i++)
	{
		dp[i][0] = i;
	}
	for (int i = 1; i < size1; i++)
	{
		for (int j = 1; j < size2; j++)
		{
			if (word1[i - 1] != word2[j - 1])
			{
				dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]);
				dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]) + 1;
			}
			else if (word1[i - 1] == word2[j - 1])
			{
				dp[i][j] = dp[i - 1][j - 1];
			}
		}
	}
	return dp[size1 - 1][size2 - 1];
}

void setZeroes(vector<vector<int>>& matrix) {
	int lineSize = matrix.size();
	if (lineSize == 0)
	{
		return;
	}
	int colSize = matrix[0].size();
	vector<int> line;
	vector<int> col;
	for (int i = 0; i < lineSize; i++)
	{
		for (int j = 0; j < colSize; j++)
		{
			if (matrix[i][j] == 0)
			{
				line.push_back(i);
				col.push_back(j);
			}
		}
	}
	for (vector<int>::iterator it = line.begin(); it != line.end(); it++)
	{
		for (int i = 0; i < colSize; i++)
		{
			matrix[*it][i] = 0;
		}
	}
	for (vector<int>::iterator it = col.begin(); it != col.end(); it++)
	{
		for (int i = 0; i < lineSize; i++)
		{
			matrix[i][*it] = 0;
		}
	}
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
	int lineSize = matrix.size();
	if (lineSize == 0)
	{
		return false;
	}
	int colSize = matrix[0].size();
	int i1 = 0;
	int j1 = 0;
	int i2 = lineSize - 1;
	int j2 = colSize - 1;
	while (i1 < i2 || (i1 == i2 && j1 <= j2))
	{
		int index = (i1 + i2)*colSize + j1 + j2;
		index /= 2;
		int iMid = index / colSize;
		int jMid = index % colSize;
		if (matrix[iMid][jMid] == target)
		{
			return true;
		}
		else if (matrix[iMid][jMid] < target)
		{
			if (jMid + 1 < colSize)
			{
				j1 = jMid + 1;
				i1 = iMid;
			}
			else
			{
				j1 = 0;
				i1 = iMid + 1;
			}
		}
		else
		{
			if (jMid - 1 >= 0)
			{
				j2 = jMid - 1;
				i2 = iMid;
			}
			else
			{
				j2 = colSize - 1;
				i2 = iMid - 1;
			}
		}
	}
	return false;
}

void sortColors(vector<int>& nums) {
	///两次扫描
	/*int size = nums.size();
	if (size == 0 || size == 1)
	{
		return;
	}
	int num0 = 0;
	int num1 = 0;
	int num2 = 0;
	for (int i = 0; i < size; i++)
	{
		if (nums[i] == 0)
		{
			num0++;
		}
		else if (nums[i] == 1)
		{
			num1++;
		}
		else
		{
			num2++;
		}
	}
	int i = 0;
	for (; i < num0; i++)
	{
		nums[i] = 0;
	}
	for (; i < num0+num1; i++)
	{
		nums[i] = 1;
	}
	for (; i < size; i++)
	{
		nums[i] = 2;
	}*/

	///一次扫描
	int size = nums.size();
	if (size == 0 || size == 1)
	{
		return;
	}
	int num0 = 0;
	int num2 = size - 1;
	int i = 0;
	while (i <= num2)
	{
		if (nums[i] == 0)
		{
			nums[i] = nums[num0];
			nums[num0] = 0;
			i++;
			num0++;
		}
		else if (nums[i] == 1)
		{
			i++;
		}
		else
		{
			nums[i] = nums[num2];
			nums[num2] = 2;
			num2--;
		}
	}
}

string minWindow(string s, string t) {
	int size = s.size();
	if (size < t.size())
	{
		return "";
	}
	int AIndex = -1;
	int BIndex = -1;
	int CIndex = -1;
	//map<char, int> tmpMap;
	int minSize = size;
	string result;
	for (int i = 0; i < size; i++)
	{
		if (s[i] == 'A')
		{
			if (AIndex != -1)
			{
				if (BIndex < AIndex)
				{
					BIndex = -1;
				}
				if(CIndex<AIndex)
				{
					CIndex = -1;
				}
			}
			AIndex = i;
			if (BIndex >= 0 && CIndex >= 0)
			{
				int min = BIndex < CIndex ? BIndex : CIndex;
				int tmp = AIndex - min;
				if (tmp < minSize)
				{
					minSize = tmp;
					result = s.substr(min, tmp + 1);
				}
			}
		}
		if (s[i] == 'B')
		{
			if (BIndex != -1)
			{
				if (AIndex < BIndex)
				{
					AIndex = -1;
				}
				if (CIndex < BIndex)
				{
					CIndex = -1;
				}
			}
			BIndex = i;
			if (AIndex >= 0 && CIndex >= 0)
			{
				int min = AIndex < CIndex ? AIndex : CIndex;
				int tmp = BIndex - min;
				if (tmp < minSize)
				{
					minSize = tmp;
					result = s.substr(min, tmp + 1);
				}
			}
		}
		if (s[i] == 'C')
		{
			if (CIndex != -1)
			{
				if (BIndex < CIndex)
				{
					BIndex = -1;
				}
				if (AIndex < CIndex)
				{
					AIndex = -1;
				}
			}
			CIndex = i;
			if (AIndex >= 0 && BIndex >= 0)
			{
				int min = AIndex < BIndex ? AIndex : BIndex;
				int tmp = CIndex - min;
				if (tmp < minSize)
				{
					minSize = tmp;
					result = s.substr(min, tmp + 1);
				}
			}
		}
	}
	return result;
}

vector<vector<int>> combine(int n, int k) {
	vector<vector<int>> result;
	int dif = n - k;
	if (dif < 0)
	{
		result;
	}
	vector<int> tmp(k, 0);
	for (int i = 0; i < k; i++)
	{
		tmp[i] = i + 1;
	}
	result.push_back(tmp);
	int cur = k - 1;
	while (tmp[0] <= dif)
	{
		if (tmp[cur] == n + cur - k + 1)
		{
			while (tmp[cur] == n + cur - k + 1)
			{
				cur--;
			}
			if (cur < 0)
			{
				cur = k - 1;
				for (int i = 1; i < k; i++)
				{
					tmp[i] = tmp[i - 1] + 1;
				}
			}
			else
			{
				tmp[cur]++;
				cur++;
				while (cur < k)
				{
					tmp[cur] = tmp[cur - 1] + 1;
					cur++;
				}
				result.push_back(tmp);
				cur = k - 1;
			}
		}
		else
		{
			tmp[cur]++;
			result.push_back(tmp);
		}
	}
	return result;
}

vector<vector<int>> subsets(vector<int>& nums) {
	vector<vector<int>> result;
	result.push_back({});
	int size = nums.size();
	if (size == 0)
	{
		return result;
	}
	for (int i = 0; i < size; i++)
	{
		int size = result.size();
		for (int j = 0; j < size; j++)
		{
			vector<int> tmp = result[j];
			tmp.push_back(nums[i]);
			result.push_back(tmp);
		}
	}
	return result;
}

bool huisuExist(vector<vector<char>> board,int curX, int curY, int idex, string& word)
{
	idex++;
	if (idex == word.size())
	{
		return true;
	}
	char search = word[idex];
	board[curX][curY] = '0';
	if (curY - 1 >= 0 && board[curX][curY - 1] == search)
	{
		if (huisuExist(board, curX, curY - 1, idex, word))
		{
			return true;
		}
	}
	if (curX - 1 >= 0 && board[curX - 1][curY] == search)
	{
		if (huisuExist(board, curX - 1, curY, idex, word))
		{
			return true;
		}
	}
	if (curY + 1 < board[0].size() && board[curX][curY + 1] == search)
	{
		if (huisuExist(board, curX, curY + 1, idex, word))
		{
			return true;
		}
	}
	if (curX + 1 < board.size() && board[curX + 1][curY] == search)
	{
		if (huisuExist(board, curX + 1, curY, idex, word))
		{
			return true;
		}
	}
	return false;
}
bool exist(vector<vector<char>>& board, string word) {
	if (word.size() == 0)
	{
		return true;
	}
	int size = board.size();
	if (size == 0)
	{
		return false;
	}
	int size2 = board[0].size();
	char first = word[0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (board[i][j] == first)
			{
				if (huisuExist(board, i, j, 0, word))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int removeDuplicates2(vector<int>& nums) {
	int size = nums.size();
	if (size == 0)
	{
		return 0;
	}
	int pre = nums[0];
	int count = 1;
	for (auto it = nums.begin()+1; it != nums.end();)
	{
		if (*it == pre)
		{
			if (count == 2)
			{
				it = nums.erase(it);
			}
			else
			{
				count++;
				it++;
			}
		}
		else
		{
			pre = *it;
			count = 1;
			it++;
		}
	}
	return nums.size();
}

bool search2(vector<int>& nums, int target) {
	int size = nums.size();
	if (size == 0)
	{
		return false;
	}
	int left = 0;
	int right = size - 1;
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (nums[mid] == target)
		{
			return true;
		}
		if (nums[mid] == nums[left])
		{
			left++;
		}
		else if (nums[mid] > nums[left])
		{
			if (nums[mid] > target&&target >= nums[left])
			{
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		}
		else
		{
			if (nums[mid] < target&&target <= nums[right])
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}
	}
	return false;
}

ListNode* deleteDuplicates(ListNode* head) {
	if (head == NULL)
	{
		return NULL;
	}
	ListNode* last = NULL;
	ListNode* pre = head;
	ListNode* cur = head->next;
	if (cur == NULL)
	{
		return head;
	}
	int preVal = head->val;
	while (cur != NULL)
	{
		if (cur->val == preVal)
		{
			//找到第一个与之前数字不同的节点
			while (cur != NULL && cur->val == preVal)
			{
				cur = cur->next;
			}
			if (cur == NULL)
			{
				if (last!=NULL)
				{
					last->next = NULL;
					return head;
				}
				return NULL;
			}
			preVal = cur->val;
			pre = cur;
			cur = cur->next;
			continue;
		}
		else
		{
			if (last == NULL)
			{
				head = pre;
			}
			else
			{
				last->next = pre;
			}
			last = pre;
			pre = cur;
			preVal = pre->val;
			cur = cur->next;
		}
	}
	if (last != NULL)
	{
		last->next = pre;
		return head;
	}
	return pre;
}

ListNode* deleteDuplicates2(ListNode* head) {
	if (head == NULL)
	{
		return NULL;
	}
	int preVal = head->val;
	ListNode* pre = head;
	ListNode* cur = head->next;
	while (cur != NULL)
	{
		if (cur->val == preVal)
		{
			pre->next = cur->next;
		}
		else
		{
			pre = cur;
			preVal = cur->val;
		}
		cur = cur->next;
	}
	return head;
}

int largestRectangleArea(vector<int>& heights) {
	int size = heights.size();
	if (size == 0)
	{
		return 0;
	}
	int result = heights[0];
	vector<int> found;
	for(int k = 0; k < size; k++)
	{
		int i = heights[k];
		auto it = find(found.begin(), found.end(), i);
		if (it != found.end())
		{
			continue;
		}
		found.push_back(i);
		int left = -1;
		int right = -1;
		for (int j = 0; j < size; j++)
		{
			if (heights[j] >= i)
			{
				if (left < 0)
				{
					left = j;
				}
				right = j;
			}
			else
			{
				if (right >= 0)
				{
					int tmp = (right - left + 1)*i;
					result = tmp > result ? tmp : result;
					left = -1;
					right = -1;
				}
			}
		}
		if (right > 0)
		{
			int tmp = (right - left + 1)*i;
			result = tmp > result ? tmp : result;
		}
	}
	return result;
}

int maximalRectangle(vector<vector<char>>& matrix) {
	int sizeX = matrix.size();
	if (sizeX == 0)
	{
		return 0;
	}
	int sizeY = matrix[0].size();
	for (int i = 0; i < sizeX; i++)
	{
		for (int j = 0; j < sizeY; j++)
		{
			if (matrix[i][j] == '1'&&j != 0)
			{
				matrix[i][j] = matrix[i][j - 1] + 1;
			}
		}
	}
	int result = 0;
	for (int i = 0; i < sizeX; i++)
	{
		for (int j = 0; j < sizeY; j++)
		{
			if (matrix[i][j] >= '1')
			{
				int min = matrix[i][j];
				for (int k = i; k >= 0; k--)
				{
					min = matrix[k][j] < min ? matrix[k][j] : min;
					int tmp = (min - '0') * (i - k + 1);
					result = result > tmp ? result : tmp;
				}
			}
		}
	}
	return result;
}

ListNode* partition(ListNode* head, int x) {
	ListNode* firstSmall = NULL;
	ListNode* lastSmall = NULL;
	ListNode* firstBig = NULL;
	ListNode* lastBig = NULL;
	ListNode* cur = head;
	while (cur != NULL)
	{
		if (cur->val < x)
		{
			if (lastSmall == NULL)
			{
				firstSmall = cur;
				lastSmall = cur;
				cur = cur->next;
				lastSmall->next = firstBig;
			}
			else
			{
				lastSmall->next = cur;
				lastSmall = cur;
				cur = cur->next;
				lastSmall->next = firstBig;
			}
		}
		else
		{
			if (lastBig == NULL)
			{
				firstBig = cur;
				if (lastSmall != NULL)
				{
					lastSmall->next = firstBig;
				}
				lastBig = cur;
			}
			else
			{
				lastBig->next = cur;
				lastBig = cur;
			}
			cur = cur->next;
			lastBig->next = NULL;
		}
	}
	if (firstSmall != NULL)
	{
		return firstSmall;
	}
	return head;
}

bool isScramble(string s1, string s2) {
	if (s1 == s2)
	{
		return true;
	}
	int size1 = s1.size();
	int size2 = s2.size();
	if (size1 != size2) 
	{
		return false;
	}
	string ss1(s1);
	string ss2(s2);
	sort(ss1.begin(), ss1.end());
	sort(ss2.begin(), ss2.end());
	if (ss1 != ss2) {
		return false;
	}
	for (int i = 1; i < size1; i++)
	{
		if(isScramble(s1.substr(0,i),s2.substr(0,i))&&
			isScramble(s1.substr(i), s2.substr(i)))
		{
			return true;
		}
		if (isScramble(s1.substr(0, i), s2.substr(size2 - i)) &&
			isScramble(s1.substr(i), s2.substr(0, size2 - i)))
		{
			return true;
		}
	}
	return false;
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	if (n == 0)
	{
		return;
	}
	for (int i = 0; i < m; i++)
	{
		if (nums1[i] > nums2[0])
		{
			int tmp = nums2[0];
			nums2[0] = nums1[i];
			nums1[i] = tmp;
			for (int j = 1; j < n; j++)
			{
				if (nums2[j] < nums2[j - 1])
				{
					int tmp2 = nums2[j];
					nums2[j] = nums2[j - 1];
					nums2[j - 1] = tmp2;
				}
				else
				{
					break;
				}
			}
		}
	}
	for (int i = m; i < n + m; i++)
	{
		nums1[i] = nums2[i - m];
	}
}

vector<int> grayCode(int n) {
	vector<int> res;
	res.push_back(0);
	if (n == 0)
	{
		return res;
	}
	int tmp = 1;
	while (n > 0)
	{
		for (int i = res.size() - 1; i >= 0; i--)
		{
			res.push_back(res[i] + tmp);
		}
		n--;
		tmp *= 2;
	}
	return res;
}

void diguiSubsetsWithDup(vector<vector<int>> &result, vector<int> &nums, int i, vector<int> cur, int &size)
{
	if (i == size - 1)
	{
		return;
	}
	int pre = nums[i+1];
	cur.push_back(pre);
	result.push_back(cur);
	diguiSubsetsWithDup(result, nums, i + 1, cur, size);
	cur.pop_back();
	for (int j = i + 2; j < size; j++)
	{
		if (nums[j] != pre)
		{
			cur.push_back(nums[j]);
			result.push_back(cur);
			diguiSubsetsWithDup(result, nums, j, cur, size);
			cur.pop_back();
			pre = nums[j];
		}
	}
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
	vector<vector<int>> result;
	result.push_back({});
	int size = nums.size();
	if (size == 0)
	{
		return result;
	}
	sort(nums.begin(), nums.end());
	int pre = nums[0];
	result.push_back({ pre });
	diguiSubsetsWithDup(result, nums, 0, { pre }, size);
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] != pre)
		{
			result.push_back({ nums[i] });
			diguiSubsetsWithDup(result, nums, i, { nums[i] }, size);
			pre = nums[i];
		}
	}
	return result;
}

int main()
{
	ListNode* n1 = new ListNode(2);
	ListNode* n2 = new ListNode(1);
	ListNode* n3 = new ListNode(3);
	ListNode* n4 = new ListNode(2);
	ListNode* n5 = new ListNode(5);
	ListNode* n6 = new ListNode(2);
	ListNode* n7 = new ListNode(2);

	n1->next = n2;
	//n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	//n6->next = n7;
	vector<vector<char>> v = { {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
		{'6', '.', '.', '1', '9', '5', '.', '.', '.'},
		{'.', '9', '8', '.', '.', '.', '.', '6', '.'},
		{'8', '.', '.', '.', '6', '.', '.', '.', '3'},
		{'4', '.', '.', '8', '.', '3', '.', '.', '1'},
		{'7', '.', '.', '.', '2', '.', '.', '.', '6'},
		{'.', '6', '.', '.', '.', '.', '2', '8', '.'},
		{'.', '.', '.', '4', '1', '9', '.', '.', '5'},
		{'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

	vector<vector<int>> obstacleGrid(50, vector<int>(50, 0));
	vector<string> v2 = { "ask","not","what","your","country","can","do","for","you","ask","what","you","can","do","for","your","country" };
	//vector<vector<bool>> v3(3, vector<bool>(3));
	//double result = myPow(8.84372, -5);
	vector<vector<char>> v3 = { {'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'} };
	string s1 = "abb";
	string s2 = "bba";
	vector<int> v4 = { 4,5,6,0,0,0 };
	vector<int> v5 = { 2,2,2,3 };
	vector<vector<int>> result = subsetsWithDup(v5);
    std::cout << "Hello World!\n"; 
}

