#include <bits/stdc++.h>
#include <Windows.h>
// #define system puts

const int N = 1e6 + 5;

std::string dir = "G:\\Codes\\Problems";

int len_name_oj, len_name_prob, len_name_nick;
char tmp_name_oj[N], tmp_name_prob[N], tmp_name_nick[N];
std::string name_oj, name_prob, name_nick;
std::string tmp_cmd_md, tmp_cmd_type_in, tmp_cmd_type_out, tmp_cmd_type_cpp, tmp_cmd_start;
char cmd_md[N], cmd_type_in[N], cmd_type_out[N], cmd_type_cpp[N], cmd_start[N];

void stoc(std::string S, char *T) {
    int _len = S.length();
    for(int i = 0; i < _len; ++i)
        T[i] = S[i];
    T[_len] = '\0';
}

void ctos(char *S, std::string &T) {
    int _len = strlen(S);
    for(int i = 0; i <_len; ++i)
        T.push_back(S[i]);
}

int main(int argc, char* argv[]) {

    /*
    * argv[1] = name_oj
    * argv[2] = name_prob
    * argv[3] = name_nick
    */

    len_name_oj = strlen(argv[1]);
    len_name_prob = strlen(argv[2]);
    len_name_nick = strlen(argv[3]);

    for(int i = 0; i < len_name_oj; ++i) tmp_name_oj[i] = argv[1][i];
    for(int i = 0; i < len_name_prob; ++i) tmp_name_prob[i] = argv[2][i];
    for(int i = 0; i < len_name_nick; ++i) tmp_name_nick[i] = argv[3][i];

    ctos(tmp_name_oj, name_oj);
    ctos(tmp_name_prob, name_prob);
    ctos(tmp_name_nick, name_nick);

    tmp_cmd_md = "md " + dir + "\\" + name_oj + "\\\"" + name_prob + '\"';

    // std::cerr << tmp_cmd_md << std::endl;

    tmp_cmd_type_in = "type nul>" + dir + "\\" + name_oj + "\\\"" + name_prob + "\"\\" + name_nick + ".in";
    tmp_cmd_type_out = "type nul>" + dir + "\\" + name_oj + "\\\"" + name_prob + "\"\\" + name_nick + ".out";
    tmp_cmd_type_cpp = "type nul>" + dir + "\\" + name_oj + "\\\"" + name_prob + "\"\\" + name_nick + ".cpp";

    // std::cerr << tmp_cmd_type_in << std::endl;
    // std::cerr << tmp_cmd_type_out << std::endl;
    // std::cerr << tmp_cmd_type_cpp << std::endl;

    tmp_cmd_start = "start " + dir + "\\" + name_oj;

    // std::cerr << tmp_cmd_start << std::endl;

    stoc(tmp_cmd_md, cmd_md);
    stoc(tmp_cmd_type_in, cmd_type_in);
    stoc(tmp_cmd_type_out, cmd_type_out);
    stoc(tmp_cmd_type_cpp, cmd_type_cpp);
    stoc(tmp_cmd_start, cmd_start);

    puts(cmd_md);
    puts(cmd_type_in);
    puts(cmd_type_out);
    puts(cmd_type_cpp);
    puts(cmd_start);

    system(cmd_md);
    system(cmd_type_in);
    system(cmd_type_out);
    system(cmd_type_cpp);
    system(cmd_start);

    return 0;
}
