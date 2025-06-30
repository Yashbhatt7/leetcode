#include<iostream>
#include<vector>
#include<algorithm>

void crt_vec(std::string &temp, int count, int op_cnt, std::vector<int> &op_count, int k, int itr) {
    /*std::cout << itr << "\n";*/

    for(int i = itr; i < temp.size(); ++i) {
        if(temp[i] == 'B') {
            ++count;
        }
        else {
            temp[i] = 'B';
            ++count;
            ++op_cnt;
        }

        if(count >= k) {
            std::cout << count << "\n";
            op_count.push_back(op_cnt);
            count = 0;
            op_cnt = 0;
            break;
        }
    }
}

/*std::vector<int> minimumRecolors(std::string block, int k) {*/
int minimumRecolors(std::string block, int k) {
    int count = 0;
    int op_cnt = 0;
    std::string temp = block;
    std::string rm_temp = block;
    std::vector<int> op_count;
    int min = 0;

    for(int i = 0; i < block.size(); ++i) {
        if(block[i] == 'B') {
            ++count;
            if(count >= k) {
                std::cout << "\n\n\nadsfasdf\n\n\n";
                return 0;
                /*return op_count;*/
            }
        }
        else {
            count = 0;
        }
    }
    count = 0;
    op_cnt = 0;

    if(block[0] == 'B') {
        crt_vec(temp, count, op_cnt, op_count, k, 0);
        temp = block;
    }

    int last_w_index = block.rfind('W');
    for(int i = 0; i < block.size(); ++i) {
        crt_vec(temp, count, op_cnt, op_count, k, i);
        temp = block;

        if(i == last_w_index) {
            break;
        }
    }

    int res = 0;
    if(!op_count.empty()) {
        auto min_iter = std::min_element(op_count.begin(), op_count.end());
        res = *min_iter;
    }

    return res;
    /*return op_count;*/
}

int main() {
    std::string block = "WWBBBWBBBBBWWBWWWB";
    /*std::string block = "WBBWWWWBBWWBBBBWWBBWWBBBWWBBBWWWBWBWW";*/
    /*std::string block = "BWWWBB";*/
    int k = 16;
    /*int k = 6;*/
    /*int k = 15;*/

    std::cout << minimumRecolors(block, k);

    /*std::vector<int> res = minimumRecolors(block, k);*/
    /*for(int x : res) {*/
    /*    std::cout << x << " ";*/
    /*}*/

    std::cin.get();
}



