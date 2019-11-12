const lest::test tests[] = {
    CASE("small array") {
        const vector<string> words {"cape", "cake"};
        const size_t actual = findRotationPoint(words);
        const size_t expected = 1;
        EXPECT(actual == expected);
    },
    CASE("medium array") {
        const vector<string> words {"grape", "orange", "plum", "radish", "apple"};
        const size_t actual = findRotationPoint(words);
        const size_t expected = 4;
        EXPECT(actual == expected);
    },
    CASE("large array") {
        const vector<string> words {"ptolemaic", "retrograde", "supplant", "undulate",
            "xenoepist", "asymptote", "babka", "banoffee", "engender", "karpatka",
            "othellolagkage"};
        const size_t actual = findRotationPoint(words);
        const size_t expected = 5;
        EXPECT(actual == expected);
    },
    CASE("possibly missing edge case") {
        // are we missing any edge cases?

    }
};

int main(int argc, char** argv)
{
    return lest::run(tests, argc, argv);
}
