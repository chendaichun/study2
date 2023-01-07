#include <iostream>
#include <cstdlib>
#include <ctime>
//#include<unistd.h>

using namespace std;

const int WIDTH = 80;
const int HEIGHT = 25;

int main5() {
    // 初始化随机数生成器
    srand(time(nullptr));

    // 循环
    while (true) {
        // 随机生成一个烟花的坐标
        int x = rand() % WIDTH;
        int y = rand() % HEIGHT;

        // 随机生成一个颜色
        int r = rand() % 256;
        int g = rand() % 256;
        int b = rand() % 256;

        // 输出ANSI控制码，将文本设置为随机颜色
        cout << "\033[38;2;" << r << ";" << g << ";" << b << "m";

        // 在随机坐标处输出一个"*"
        cout << "\033[" << y << ";" << x << "H*";

        // 刷新输出缓冲区
        cout << flush;

        // 等待一段时间
        //sleep(50000);
    }

    return 0;
}
