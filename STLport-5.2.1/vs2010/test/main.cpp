/*
���ܣ�Win7��vs2010ʹ��STLport��
���ڣ�2012��8��24�� ������
������win7-32-vs2010
*/
#include <iostream>
#include <rope>
 
using namespace std;
 
int main()
{
    // crope�������洢char�ַ�������
    crope crope1("Hello,");
    crope crope2("STLport!");
    cout << crope1 + crope2 << endl;
 
    system("pause");

    return 0;
}
/*
���Ч����
 
Hello,STLport!
�밴���������. . .
 
*/
