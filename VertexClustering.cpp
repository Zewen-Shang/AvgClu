// VertexClustering.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Model.h"

using namespace std;
int main()
{
    Model m("box100k");
    int sizes[3] = { 40,5, 10 };
    m.build(sizes);
    m.addQ();
    m.getBestPos();
    m.outputVtk("box100k");
}
