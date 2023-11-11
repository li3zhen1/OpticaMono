#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Typeface {
  public:
    enum TypefaceStyle {
        Monospaced = 0x0,
        Proportional = 0x1,
    };
};

int main() {

    const auto specimenText = new vector<string>{
        "sphinx of black quartz, judge my vow.",
        "the quick brown fox jumps over the lazy dog."
    };

    specimenText->push_back({
        "SPHINX OF BLACK QUARTZ, JUDGE MY VOW.",
        "THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG."
    });

    for (uint i = 0; i != specimenText->size(); ++i) {
        fprintf(stdout, "%s\n", (*specimenText)[i].c_str());
    }

    return 0;
}
