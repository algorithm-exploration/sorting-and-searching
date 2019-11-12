#define countof(a) (sizeof(a)/sizeof((a)[0]))

void smallArrayTest(Test *tc)
{
    const char *words[] = {"cape", "cake"};
    const size_t actual = findRotationPoint(words, countof(words));
    const size_t expected = 1;
    AssertSizeEquals(tc, expected, actual);
}

void mediumArrayTest(Test *tc)
{
    const char *words[] = {"grape", "orange", "plum", "radish", "apple"};
    const size_t actual = findRotationPoint(words, countof(words));
    const size_t expected = 4;
    AssertSizeEquals(tc, expected, actual);
}

void largeArrayTest(Test *tc)
{
    const char *words[] = {
        "ptolemaic", "retrograde", "supplant", "undulate", "xenoepist", "asymptote",
        "babka", "banoffee", "engender", "karpatka", "othellolagkage"
    };
    const size_t actual = findRotationPoint(words, countof(words));
    const size_t expected = 5;
    AssertSizeEquals(tc, expected, actual);
}

int main()
{
    TestSuite *tests = TestSuiteNew();

    SUITE_ADD_TEST(tests, smallArrayTest);
    SUITE_ADD_TEST(tests, mediumArrayTest);
    SUITE_ADD_TEST(tests, largeArrayTest);

    TestSuiteRun(tests);
    TestSuiteDelete(tests);

    return 0;
}
