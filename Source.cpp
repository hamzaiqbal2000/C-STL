//what is a stl
//a library
// two things           1.data store -> containers  2. data manupulation -> algorithms
//                          these two things are connected by iterators
#include <iostream>
//contigious memeory location
#include <vector>
//doubly linked list
#include <list>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <tuple>
using namespace std;
//vector,list,auto
//map,mutimap,unordered_map,erase,remove,set,multisets

//associate containers
void vector1(){
	// sequence containers
	vector<int> a;
	a.push_back(30);
	a.push_back(20);
	a.push_back(10);
	//vector use randomised access iterators
	//list use bidirectional iterators so sort cannot apply on list
	sort(a.begin(), a.end());
	//iterator are similar to pointers
	for (auto itr=a.begin(); itr != a.end();itr++) {
		cout << *itr << endl;
	}
	cout << "size => " << a.size() << endl;
	a.clear();
	cout << "size => " << a.size() << endl;
}

void list1() {
	//list
	list<int> l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(50);

	for (auto itr1=l.begin(); itr1 != l.end(); itr1++) {
		cout << *itr1 << endl;
	}

	cout << "size => " << l.size() << endl;
	l.clear();
	cout << "size => " << l.size() << endl;
}
void map1() {
	/*pair<int, int> p = make_pair(10, 20);
	cout << p.first << "----" << p.second;
	*/
	map<int, int> mp;
	mp[4] = 400;
	mp[3] = 300;
	mp.insert(make_pair(10, 100));
	mp[7] = 700;
	for (auto itr = mp.begin(); itr != mp.end(); itr++) {
		cout << itr->first << "----" << itr->second << endl;
	}
}

void multimap1() {
	multimap<int, int> mp;
	mp.insert(make_pair(10, 100));
	mp.insert(make_pair(3,300));
	mp.insert(make_pair(4, 400));
	mp.insert(make_pair(5, 500));

	for (auto itr = mp.begin(); itr != mp.end(); itr++) {
		cout << itr->first << "----" << itr->second << endl;
	}
}

void unorderedMap() {
	unordered_map<int, int> mp;
	mp.insert(make_pair(10, 100));
	mp.insert(make_pair(3, 300));
	mp.insert(make_pair(4, 400));
	mp.insert(make_pair(5, 500));

	for (auto itr = mp.begin(); itr != mp.end(); itr++) {
		cout << itr->first << "----" << itr->second << endl;
	}
}

void erase1() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.erase(v.begin() + 2, v.begin() + 3);
	for (auto itr = v.begin(); itr != v.end(); itr++) {
		cout << *itr << " ";
	}
}

void remove() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(20);
	v.push_back(30);
	v.erase(std::remove(v.begin(), v.end(), 20),v.end());

	for (auto itr = v.begin(); itr != v.end(); itr++) {
		cout << *(itr) << " " ;
	}
}

void set1() {
	set<int> myset;
	myset.insert(10);
	myset.insert(20);
	myset.insert(30);
	myset.insert(40);
	myset.insert(50);
	myset.erase(40);
	for (auto itr = myset.begin(); itr != myset.end(); itr++) {
		cout << *(itr)<<" ";
	}

}

void multiset1() {
	multiset<int> myset;
	myset.insert(10);
	myset.insert(20);
	myset.insert(40);
	myset.insert(40);
	myset.insert(50);
	myset.erase(40);
	for (auto itr = myset.begin(); itr != myset.end(); itr++) {
		cout << *itr << " ";
	}
}

void comparator_greater() {
	set<int,greater<int>> st;
	st.insert(10);
	st.insert(20);
	st.insert(30);
	st.insert(40);
	for (auto itr = st.begin(); itr != st.end(); itr++) {
		cout << *itr << " ";
	}
}

void comparator_less() {
	set<int, less<int>> st;
	st.insert(40);
	st.insert(30);
	st.insert(20);
	st.insert(10);
	for (auto itr = st.begin(); itr != st.end(); itr++) {
		cout << *itr << " ";
	}
}

void comparator_map() {
	map<int, string,greater<int>> mp;
	mp.insert(make_pair(1, "abc"));
	mp[2] = "def";
	mp[3] = "jhi";

	for (auto itr = mp.begin(); itr != mp.end(); itr++) {
		cout << itr->first << "----" << itr->second<<endl;
	}
}

void comparator_pair() {
	set<pair<int, int>, greater<pair<int, int>>> myset;
	myset.insert({ 10, 20 });
	myset.insert({30, 40});
	myset.insert({ 50, 60 });
	for (auto itr = myset.begin(); itr != myset.end(); itr++) {
		cout << itr->first << "---" << itr->second<< endl;
	}
}

void stack1() {
	stack<int,vector<int>> stk;
	stk.push(100);
	stk.push(200);
	stk.push(300);
	while (!stk.empty()) {
		cout << stk.top()<<endl;
		stk.pop();
	}
}

void queue1() {
	queue<int, deque<int>> q;
	q.push(100);
	q.push(200);
	q.push(300);
	while (!q.empty()) {
		cout << q.front()<<" "<< endl;
		q.pop();
	}
}

void priorityQueue() {
	priority_queue<int, deque<int>, less<int>> pq;
	pq.push(100);
	pq.push(200);
	pq.push(300);
	while (!pq.empty()) {
		cout << pq.top() << " " << endl;
		pq.pop();
	}
}


std::tuple<int,int> function1(int A[], int n, int target) {
	//target is 10
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (target == A[i] + A[j])
				return { i, j };
		}
	}
}

#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		unordered_map<int, size_t> N;
		vector<int> res;
		for (size_t i = 0; i < nums.size(); ++i) {
			int num = nums[i];
			if (N.count(target - num)) {
				res.push_back(i);
				res.push_back(N[target - num]);
			}
			else {
				N.insert({ num, i });
			}
		}
		return res;
	}
};

std::tuple<int, int> fun1(int a,int b) {
	if (a > b)
		return make_tuple(a, b);
	else
		return make_tuple(a, b);
}
int main() {
	using namespace std;
	//priorityQueue();
	int a, b;
	tie(a, b) = fun1(1, 2);
	cout << a << b;
}

//sequence containers
//3 sequence containers 1.vectors 2.list 3.auto
//iterators use to iterate through the list and print the values
//a.push_back()
//a.clear()
//a.size()

