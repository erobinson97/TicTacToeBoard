/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, unitTestName)
{
	ASSERT_TRUE(true);
}
*/

TEST(TicTacToeBoardTest, toggleTurn){
	TicTacToeBoard boarddd;
	Piece turnIs = boarddd.toggleTurn();
	ASSERT_EQ(turnIs, O);
}

TEST(TicTacToeBoardTest, toggleTurnTwice){
	TicTacToeBoard boarddd;
	boarddd.toggleTurn();
	Piece turnIs = boarddd.toggleTurn();
	ASSERT_EQ(turnIs, X);
}

TEST(TicTacToeBoardTest, turnOneGet){
	TicTacToeBoard boarddd;
	Piece Get =  boarddd.getPiece(1,1);
	ASSERT_EQ(Get, Blank);
}

TEST(TicTacToeBoardTest, turnOnePlace){
	TicTacToeBoard boarddd;
	Piece placeOne =  boarddd.placePiece(1,1);
	ASSERT_EQ(placeOne, X);
}