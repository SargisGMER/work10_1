#include "stdafx.h"
#include <iostream>
using namespace std;
struct Time
{
	int h, m, s;
};

Time t_update(struct Time t);

int main()
{
	Time c_time, n_time;
	cout << "Enter time " << endl;
	cin >> c_time.h;
	cin >> c_time.m;
	cin >> c_time.s;
	n_time = t_update(c_time);
	printf("%02d : %02d : %02d\n", n_time.h, n_time.m, n_time.s);
	system("pause");
    return 0;
}

Time t_update(struct Time t) {
	t.s++;
	if (t.s == 60)
	{
		t.s = 0;
		t.m++;
		if (t.m == 60)
		{
			t.m = 0;
			t.h++;
			if (t.h = 24)
				t.h = 0;
		}
	}
	return t;
}

