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

    const auto style = Typeface::Monospaced;

    const auto specimenText = new vector<string> {
        "sphinx of black quartz, judge my vow.\n",
    };
    
    specimenText->push_back(
        "the quick brown fox jumps over the lazy dog.\n"
    );

    // print a sentence that contains all lower-case letters.
    fprintf(stdout, "%u", style);

    return 0;
}
