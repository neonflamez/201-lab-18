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

void addTail(Review*& head, float rating, const string& comments){
    Review* newReview = new Review{rating, comments, nullptr};
    if(head == nullptr){
        head = newReview;
    }
    else{
        Review* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newReview;
    }
}

void displayInformation(Review* head){
    Review* temp = head;
    int count = 0;
    float totalRating = 0.0;

    cout << "Outputting all reviews:\n";
    while (temp != nullptr)
    {
        count++;
        cout << "   > Review #" << count << ": " << temp->rating << ": " << temp->comments << '\n';
        totalRating += temp->rating;
        temp = temp->next;
    }
    
}