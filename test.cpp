#include"Problem1.h"
#include"Problem2.h"

int main()
{
	//test Problem1
    string s1, s2;
    cout << "�������ַ���1: ";
    cin >> s1;
    cout << "�������ַ���2: ";
    cin >> s2;
    int result = countSubsequences(s1, s2);
    cout << "�ַ���1�������е����ַ���2������Ϊ�� " << result << endl;
	return 0;
}