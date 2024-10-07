// COMSC 210 || Lab 18 || Shayan Khan

#include <iostream>
#include <string>

using namespace std;

struct Review{
    float rating;
    string comments;
    Review* next;
};

void addHead(Review*& head, float rating, const string& comments){
    Review* newReview = new Review{rating, comments, head};
    head = newReview;
}

void addTail(Review*& head, float rating, const string& comments)