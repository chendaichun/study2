#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
//#include <unistd.h>

using namespace std;

// �ָ��ַ���
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
        // ��ӡ��ʾ��
        cout << "$ ";

        // ��ȡ����
        string command_line;
        getline(cin, command_line);

        // �ָ�����
        vector<string> tokens = split(command_line, ' ');
        if (tokens.size() == 0) {
            continue;
        }

        // ��ȡ����Ͳ���
        string command = tokens[0];
        vector<char*> args;
        for (size_t i = 0; i < tokens.size(); ++i) {
            args.push_back(const_cast<char*>(tokens[i].c_str()));
        }
        args.push_back(nullptr);

        // ִ������
        pid_t child_pid = fork();
        if (child_pid == 0) {
            // ���ӽ�����ִ������
            execvp(command.c_str(), args.data());
            perror("execvp");
            exit(1);
        }
        else {
            // �ڸ������еȴ��ӽ��̽���
            int child_status;
            waitpid(child_pid, &child_status, 0);
        }
    }

    return 0;
}*/
