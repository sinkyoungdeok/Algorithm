#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct stu {
	string name;
	int kor, eng,math;
};
bool cmp(const stu &u, const stu &v)
{
	if (u.kor > v.kor)
		return true;
	else if (u.kor == v.kor) {
		if (u.eng < v.eng) {
			return    true;
		}
		else if (u.eng == v.eng) {
			if (u.math>v.math) {
				return true;
			}
			else if (u.math == v.math) {
				return u.name < v.name;
			}
		}
	}
	return false;


}
int main()
{
	int n = 0;
	cin >> n;
	vector<stu> st(n);
	for(int i=0; i< n;i++)
	{
		cin >> st[i].name >> st[i].kor >> st[i].eng >> st[i].math;
	}
	stable_sort(st.begin(), st.end(), cmp);
	for (int i = 0; i < n; i++)
	{
		cout << st[i].name << '\n';
	}
	
	return 0;
}
