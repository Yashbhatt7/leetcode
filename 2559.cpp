#include<iostream>
#include<unordered_set>
#include<vector>
#include<string>

std::vector<int> vowelStrings(std::vector<std::string>& words, std::vector<std::vector<int>>& queries) {
    std::vector<int> count_v;
    int count = 0;
    std::unordered_set<char> targetSet = {'a', 'e', 'i', 'o', 'u'};

    for(int i = 0; i < queries.size(); ++i) {
        count = 0;
        for(int j = queries[i][0]; j <= queries[i][1]; ++j) {
            if(targetSet.count(words[j][0]) > 0 && targetSet.count(words[j].back()) > 0) {
                ++count;
            }
        }
        count_v.push_back(count);
    }

    return count_v;
}

int main() {
    /*std::vector<std::string> words {*/
    /*    "aba",*/
    /*    "bcb",*/
    /*    "ece",*/
    /*    "aa",*/
    /*    "e",*/
    /*};*/

    std::vector<std::string> words {
        "b","rmivyakd","kddwnexxssssnvrske","vceguisunlxtldqenxiyfupvnsxdubcnaucpoi","nzwdiataxfkbikbtsjvcbjxtr","wlelgybcaakrxiutsmwnkuyanvcjczenuyaiy","eueryyiayq","bghegfwmwdoayakuzavnaucpur","ukorsxjfkdojcxgjxgmxbghno","pmgbiuzcwbsakwkyspeikpzhnyiqtqtfyephqhl","gsjdpelkbsruooeffnvjwtsidzw","ugeqzndjtogxjkmhkkczdpqzwcu","ppngtecadjsirj","rvfeoxunxaqezkrlr","adkxoxycpinlmcvmq","gfjhpxlzmokcmvhjcrbrpfakspscmju","rgmzhaj","ychktzwdhfuruhpvdjwfsqjhztshcxdey","yifrzmmyzvfk","mircixfzzobcficujgbj","d","pxcmwnqknyfkmafzbyajjildngccadudfziknos","dxmlikjoivggmyasaktllgmfhqpyznc","yqdbiiqexkemebyuitve"
    };

    /*std::vector<std::vector<int>> queries {*/
    /*    {0, 2},*/
    /*    {1, 4},*/
    /*    {1, 1},*/
    /*};*/

    std::vector<std::vector<int>> queries {
        {5, 21}, {17, 22}, {19, 23}, {13, 15}, {20, 23}, {21, 23}, {6, 20}, {1, 8}, {15, 20}, {17, 22}, {6, 6}, {1, 2}, {4, 11}, {14, 23}, {7, 10}, {16, 22}, {20, 22}, {21, 22}, {15, 18}, {5, 16}, {17, 23}
    };

    std::vector<int> vec = vowelStrings(words, queries);

    for(int a : vec) {
        std::cout << a << "\n";
    }

    std::cin.get();
}



