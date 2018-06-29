// NewAllocator.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <vector>
#include <iostream>
#include <utility>
#include "easyallocator.h"

using Point2D = std::pair<int, int>;
using intpair = std::pair<int, int>;
using std::vector;
using std::cout; using std::endl;

int nmain() {
	//EasyAllocator<int> allc;
	//int* p=allc.allocate(30);
	//p[0] = 1;
	//p[1] = 2;
	//p[29] = 30;
	//cout << p[0] << ";" << p[1] << ";" << p[29] << endl;
	{
		using IntVec = std::vector<int, EasyAllocator<int>>;
		IntVec vint(20);
		cout << vint.size() << endl;
		std::vector<IntVec, EasyAllocator<IntVec>> vecints(20);
		for (int i = 0; i <20; i++) {
			vecints[i].resize(300);
		}
		cout << vecints.size() << endl;
	}
	cout << "谢天谢地!" << endl;
	system("pause");
	//vint[3] = 10;
	//cout << "!!!" << *p << endl;
	//MemPool<int> pool;
	//int* p=(int*)pool.malloc(10500);
	//void *p2=pool.malloc(3000);
	//pool.free(p,10500);
	//pool.free(p2,3000);
	//cout << vint.size()<<" "<<"END"<<" "<<sizeof(vector<int>)<< endl;
	//system("pause");
	return 0;
}