#include<iostream>
#include<string>
#include<map>
#include<vector>

int countCharacters(std::vector<std::string>& words, std::string chars) {
    std::map<char, int> charCount;
    bool check = true;
    int sum = 0;
    // std::unordered_map<char, int> charCount;

    for(const auto& c : chars) {
        ++charCount[c];
    }

    for(const auto& word : words) {
        std::map<char, int> wordCount;

        for(const auto& ch : word) {
            ++wordCount[ch];
        }

        check = true;
        for(const auto& [ch, count] : wordCount) {
            if(charCount[ch] < count) {
                check = false;
                break;
            }
        }

        if(check) {
            sum += word.size();
        }
    }

    return sum;
}

int main() {
    std::vector<std::string> words = { "cat","bt","hat","tree" };
    std::string chars = "atach";
    // std::vector<std::string> words = {
    //     "dyiclysmffuhibgfvapygkorkqllqlvokosagyelotobicwcmebnpznjbirzrzsrtzjxhsfpiwyfhzyonmuabtlwin",
    //     "ndqeyhhcquplmznwslewjzuyfgklssvkqxmqjpwhrshycmvrb",
    //     "ulrrbpspyudncdlbkxkrqpivfftrggemkpyjl",
    //     "boygirdlggnh",
    //     "xmqohbyqwagkjzpyawsydmdaattthmuvjbzwpyopyafphx",
    //     "nulvimegcsiwvhwuiyednoxpugfeimnnyeoczuzxgxbqjvegcxeqnjbwnbvowastqhojepisusvsidhqmszbrnynkyop",
    //     "hiefuovybkpgzygprmndrkyspoiyapdwkxebgsmodhzpx",
    //     "juldqdzeskpffaoqcyyxiqqowsalqumddcufhouhrskozhlmobiwzxnhdkidr",
    //     "lnnvsdcrvzfmrvurucrzlfyigcycffpiuoo",
    //     "oxgaskztzroxuntiwlfyufddl",
    //     "tfspedteabxatkaypitjfkhkkigdwdkctqbczcugripkgcyfezpuklfqfcsccboarbfbjfrkxp",
    //     "qnagrpfzlyrouolqquytwnwnsqnmuzphne",
    //     "eeilfdaookieawrrbvtnqfzcricvhpiv",
    //     "sisvsjzyrbdsjcwwygdnxcjhzhsxhpceqz",
    //     "yhouqhjevqxtecomahbwoptzlkyvjexhzcbccusbjjdgcfzlkoqwiwue",
    //     "hwxxighzvceaplsycajkhynkhzkwkouszwaiuzqcleyflqrxgjsvlegvupzqijbornbfwpefhxekgpuvgiyeudhncv",
    //     "cpwcjwgbcquirnsazumgjjcltitmeyfaudbnbqhflvecjsupjmgwfbjo",
    //     "teyygdmmyadppuopvqdodaczob",
    //     "qaeowuwqsqffvibrtxnjnzvzuuonrkwpysyxvkijemmpdmtnqx",
    // };
    //
    // // std::string chars = "avyteswqppomeojxoybotzriuvxolmllevluauwb";
    // std::string chars = "usdruypficfbpfbivlrhutcgvyjenlxzeovdyjtgvvfdjzcmikjraspdfp";

    std::cout << countCharacters(words, chars);

    std::cin.get();
}


