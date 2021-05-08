#include <gtest/gtest.h>
#include "../src/board.cpp"

TEST(BoardTest, HelloWorld)
{
    ASSERT_EQ("Hello world","Hello world");
}

TEST(BoardTest, InputWithinBoard_1)
{
    Board board;
    bool a=board.MakeMove(0,0);
    ASSERT_EQ(false,a);
}

TEST(BoardTest, InputWithinBoard_2)
{
    Board board;
    board.MakeMove(0,0);
    auto val=board.GetBoard();
    int tab[9]{0};
    tab[0]=1;
    ASSERT_EQ(tab,val);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}