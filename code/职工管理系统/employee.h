#pragma once
#include<iostream>
#include "worker.h"
using namespace std;

//普通员工
class Employee:public Worker {
public:
	//构造函数
	Employee(int id,string name,int dId);
	//显示个人信息
	void showInfo();
	//获取岗位信息
	string getDeptName();
};