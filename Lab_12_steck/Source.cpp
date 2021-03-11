#include <iostream>
#include <vector>
#include <stack>

using namespace std;

typedef unsigned int u_int;
typedef vector<int>  i_vector;
typedef stack<int>   i_stack;


bool is_odd(int num) {
	return num % 2;
}

template <typename T>
void print_vector(const vector<T>& v) {
	for (auto it : v)
		cout  << it << " ";
	cout << endl;
}

int main() {

	i_stack  s;
	i_vector v;

	v.resize(10);

	for (auto& it : v)
		it = rand() % 100 + 1;

	for (auto& it : v)
		if (!is_odd(it))
			s.push(it);

	print_vector(v);

	while (!s.empty())
	{
		v.push_back(s.top());
		s.pop();
	}

	print_vector(v);

	return 0;
}