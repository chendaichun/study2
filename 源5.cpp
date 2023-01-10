#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
//#include <unistd.h>

using namespace std;

// 分割字符串
/*
vector<string> split(const string& s, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream token_stream(s);
    while (getline(token_stream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}/*

int main6() {
    while (true) {
        // 打印提示符
        cout << "$ ";

        // 读取命令
        string command_line;
        getline(cin, command_line);

        // 分割命令
        vector<string> tokens = split(command_line, ' ');
        if (tokens.size() == 0) {
            continue;
        }

        // 获取命令和参数
        string command = tokens[0];
        vector<char*> args;
        for (size_t i = 0; i < tokens.size(); ++i) {
            args.push_back(const_cast<char*>(tokens[i].c_str()));
        }
        args.push_back(nullptr);

        // 执行命令
        pid_t child_pid = fork();
        if (child_pid == 0) {
            // 在子进程中执行命令
            execvp(command.c_str(), args.data());
            perror("execvp");
            exit(1);
        }
        else {
            // 在父进程中等待子进程结束
            int child_status;
            waitpid(child_pid, &child_status, 0);
        }
    }

    return 0;
}*/
