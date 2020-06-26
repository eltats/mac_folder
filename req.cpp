#include <cpr/cpr.h>
#include <iostream>

int main(int argc, char** argv) {
    auto r = cpr::Get(cpr::Url{"https://www.google.com/?client=safari"});
}
