#include <iostream>
#include <cstdlib>
#include <ctime>
//#include<unistd.h>

using namespace std;

const int WIDTH = 80;
const int HEIGHT = 25;

int main5() {
    // ��ʼ�������������
    srand(time(nullptr));

    // ѭ��
    while (true) {
        // �������һ���̻�������
        int x = rand() % WIDTH;
        int y = rand() % HEIGHT;

        // �������һ����ɫ
        int r = rand() % 256;
        int g = rand() % 256;
        int b = rand() % 256;

        // ���ANSI�����룬���ı�����Ϊ�����ɫ
        cout << "\033[38;2;" << r << ";" << g << ";" << b << "m";

        // ��������괦���һ��"*"
        cout << "\033[" << y << ";" << x << "H*";

        // ˢ�����������
        cout << flush;

        // �ȴ�һ��ʱ��
        //sleep(50000);
    }

    return 0;
}
