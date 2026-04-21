#pragma once
#include <iostream>
using namespace std;

int strLength(const char* arr)
{
	int i = 0;

	while (*(arr+i) != '\0')
	{
		i++;
	}
	return i;
}

class user
{
private:
	string userId;
	string name;
public:

};


class page
{
private:
	string postID;
	user owner;
	string title;
	post* postArr;
	int pageLikes;
public:

};



class post { //make a date class or smth to store dates and time
private:
	string postID;
	string text;
	int postLikes;
	string* comments;
	int commentCount;
	activity type;
public:
};

class activity {
	int typeNumber;
	string typeDescription;
	string value;
private:

};