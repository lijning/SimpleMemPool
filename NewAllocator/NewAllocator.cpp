// NewAllocator.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <vector>
#include <iostream>
#include <utility>
using Point2D = std::pair<int, int>;
using intpair = std::pair<int, int>;
using std::vector;

int main() {
	intpair intp(1, 2);
	intpair *pintp = &intp;
	vector<intpair> vintp;
	vintp.resize(100);
	Point2D p1;
	size_t sz;
	using std::cout;using std::endl;
	cout << sizeof(p1) <<sizeof(pintp)<<sizeof(vintp)<< endl;
	system("pause");
}