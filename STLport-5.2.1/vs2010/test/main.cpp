/*
功能，Win7下vs2010使用STLport。
日期，2012年8月24日 星期五
环境，win7-32-vs2010
*/
#include <iostream>
#include <rope>
 
using namespace std;
 
int main()
{
    // crope是用来存储char字符的容器
    crope crope1("Hello,");
    crope crope2("STLport!");
    cout << crope1 + crope2 << endl;
 
    system("pause");

    return 0;
}
/*
输出效果：
 
Hello,STLport!
请按任意键继续. . .
 
*/
