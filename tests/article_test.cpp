#define BOOST_TEST_MODULE stringtest
#include <boost/test/included/unit_test.hpp>
#include "../Article.h"
#include "../Tag.h"

using namespace std;

BOOST_AUTO_TEST_SUITE (article_test) // name of the test suite is stringtest

BOOST_AUTO_TEST_CASE (test1)
{
    string s = "foo";
    string s1 = "bar";
    string s2 = "baz";
    Article a(s);
    Tag t1(s1);
    Tag t2(s2);
    //Tag t2(s2);
    BOOST_CHECK(a.name=="foo");
}

//BOOST_AUTO_TEST_CASE (test2)
//{
    //mystring s;
    //s.setbuffer("hello world");
    //BOOST_REQUIRE_EQUAL ('h', s[0]); // basic test
//}

BOOST_AUTO_TEST_SUITE_END( )

