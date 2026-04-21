#pragma once
#include <iostream>
using namespace std;



// Classes
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
	string pageID;
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
	comment details;
	activity type;
public:
};

class comment
{
private:
	string commentID;
	string text;
public:

};

class activity {
	int typeNumber;
	string typeDescription;
	string value;
private:

};