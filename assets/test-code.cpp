#include <string>
#include <iostream>

using namespace std;

typedef enum _typeface_style {
    monospaced     = 0x0,
    proportional   = 0x1,
} typeface_style;

int main() {

    const typeface_style style = monospaced;
    
    const basic_string<char> sentence[] = {
        "sphinx of black quartz, judge my vow.\n",
        "the quick brown fox jumps over the lazy dog.\n",
    };
        
    // print a sentence that contains all lower-case letters.
    fprintf(stdout, "%s", sentence[style].c_str());

    return 0;
}