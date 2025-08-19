#include <iostream>

namespace A { int val() { return 2; } }
namespace B { int val() { return 5; } }

int main() {
    using A::val;   // bring A::val into this scope
    using B::val;   // bring B::val into this scope

    // Now you can call val(), but this causes ambiguity—because there are two `val()` overloads (from A and B) with identical signatures.
    // To resolve, you must disambiguate manually or avoid overlapping overloads.

    return 0;
}
