#include "tqueue.h"

#include <gtest.h>

TEST(tQueue, can_create_Queue_not_parametr)
{
	ASSERT_NO_THROW(Queue<int> s);
}

TEST(tQueue, can_create_Queue_with_one_parametr)
{
	ASSERT_NO_THROW(Queue<int> s(2));
}

TEST(tQueue, can_create_Queue_with_two_parametr)
{
	ASSERT_NO_THROW(Queue<int> s(2, 0));
}

TEST(tQueue, can_create_Queue_negative_size)
{
	ASSERT_ANY_THROW(Queue<int> s(-2, 0));
}

TEST(tQueue, test_push_data)
{
	Queue<int> s(1, 0);

	s.push(3);

	EXPECT_EQ(3, s.top());
}

TEST(tQueue, test_push_top)
{
	Queue<int> s(1, 0);

	s.push(3);

	EXPECT_EQ(2, s.size());
}

TEST(tQueue, test_pop_data)
{
	Queue<int> s(1, 0);

	s.push(1);
	s.pop();

	EXPECT_EQ(1, s.top());
}

TEST(tQueue, test_pop_top)
{
	Queue<int> s;

	s.push(1);
	s.pop();

	EXPECT_EQ(0, s.size());
}

TEST(tQueue, test_pop_empty)
{
	Queue<int> s;

	ASSERT_ANY_THROW(s.pop());
}

TEST(tQueue, test_top)
{
	Queue<int> s(2, 0);

	s.push(2);

	EXPECT_EQ(2, s.top());
}

TEST(tQueue, test_top_empty)
{
	Queue<int> s;

	ASSERT_ANY_THROW(s.top());
}

TEST(tQueue, test_empty)
{
	Queue<int> s;

	EXPECT_EQ(true, s.empty());
}

TEST(tQueue, test_not_empty)
{
	Queue<int> s(1);

	EXPECT_EQ(false, s.empty());
}

TEST(tQueue, test_size)
{
	Queue<int> s(10);

	EXPECT_EQ(10, s.size());
}

TEST(tQueue, test_null_size)
{
	Queue<int> s;

	EXPECT_EQ(0, s.size());
}

TEST(tQueue, test_push_pop)
{
	Queue<int> s(2, 0);

	s.push(1);
	s.pop();
	s.push(1);
	s.push(2);
	s.push(3);
	s.pop();
	s.push(1);
	s.pop();
	s.pop();

	EXPECT_EQ(1, s.top());
}


