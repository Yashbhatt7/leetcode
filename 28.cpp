#include<iostream>
#include<string>

int strStr(std::string haystack, std::string needle) {

    int idx = haystack.find(needle);

    return idx;
}

int main() {
    std::string hs = "sadbutsad";
    std::string nd = "ret";

    std::cout << strStr(hs, nd);

    std::cin.get();
}
