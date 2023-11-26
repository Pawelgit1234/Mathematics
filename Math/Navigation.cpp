#include <iostream>

#include "Navigation.h"
#include "MathPrint.h"

void Navigation::init()
{
	topics_ = {
		"Linear Functions",
		"Probality",
		"Trigonometry",
		"Curvature of Light",
		"Interest Charges"
	};

	topics_detail_ = {
		{
		"Calculate 'm'",
		"Calculate 'b'",
		"Calculate Zero",
		"Find Intersection",
		},
		{
		"Laplace Probality",
		"Binomial Probability"
		},
		{
		"Sinus",
		"Cosinus",
		"Tangens",
		},
		{
		"Air -> Glass",
		"Glass -> Air",
		"Air -> Diamond",
		"Diamond -> Air",
		"Air -> Water",
		"Water -> Air",
		},
		{
		"Calculate Z",
		"Calculate P",
		"Calculate K",
		"Calculate with years",
		"Calculate with months",
		"Calculate with days",
		},
	};

	drawTopics();
}

void Navigation::drawTopics()
{
	system("cls");
	for (int i = 0; i < topics_.size(); i++)
	{
		if (pos_ == i)
		{
			std::cout << "\033[41m" << topics_[i] << "\033[0m" << std::endl;
			continue;
		}

		std::cout << topics_[i] << std::endl;
	}
}

void Navigation::drawTopicsDetail()
{
	system("cls");
	for (int i = 0; i < topics_detail_[pos_].size(); i++)
	{
		if (pos_detail_ == i)
		{
			std::cout << "\033[41m" << topics_detail_[pos_][i] << "\033[0m" << std::endl;
			continue;
		}

		std::cout << topics_detail_[pos_][i] << std::endl;
	}
}

void Navigation::back()
{
	if (!at_topic_ && !at_func_)
	{
		pos_detail_ = 0;
		at_topic_ = true;
		drawTopics();
	}
	else if (at_topic_)
	{
		drawTopics();
	}
	else
	{
		at_func_ = false;
		drawTopicsDetail();
	}
	
}

void Navigation::forward()
{
	if (at_topic_)
	{
		at_topic_ = false;
		drawTopicsDetail();
	}
	else
	{
		system("cls");
		at_func_ = true;
		MathPrint::funcs[pos_][pos_detail_]();
	}
}

void Navigation::downTopic()
{
	if (pos_ == topics_.size() - 1)
		pos_ = 0;
	else
		pos_++;
	drawTopics();
}

void Navigation::upTopic()
{
	if (pos_ == 0)
		pos_ = topics_.size() - 1;
	else
		pos_--;
	drawTopics();
}

void Navigation::downDetail()
{
	if (pos_detail_ == topics_detail_[pos_].size() - 1)
		pos_detail_ = 0;
	else
		pos_detail_++;
	drawTopicsDetail();
}

void Navigation::upDetail()
{
	if (pos_detail_ == 0)
		pos_detail_ = topics_detail_[pos_].size() - 1;
	else
		pos_detail_--;
	drawTopicsDetail();
}

