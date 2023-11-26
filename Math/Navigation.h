#pragma once

#include <string>
#include <vector>

class Navigation final
{
public:
	Navigation() : pos_(0), pos_detail_(0), at_topic_(true), at_func_(false) { init(); };

	void back();
	void forward();

	void downTopic();
	void upTopic();
	void downDetail();
	void upDetail();

	bool is_at_topic() { return at_topic_; }
	bool is_at_func() { return at_func_; }
	
private:
	void init();
	void drawTopics();
	void drawTopicsDetail();

	unsigned short pos_;
	unsigned short pos_detail_;
	std::vector<std::string> topics_;
	std::vector<std::vector<std::string>> topics_detail_;
	bool at_topic_;
	bool at_func_;
};