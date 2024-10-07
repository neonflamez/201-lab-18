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

    if(count > 0){
        cout << "   > Average: " << totalRating / count << '\n';
    }
 
}

void deleteList(Review*& head){
    while(head != nullptr){
        Review* temp = head;
        head = head->next;
        delete temp;
    }
}

int main(){
    Review* head = nullptr;
    int choice;
    char anotherReview;
    float rating;
    string comments;

    cout << "Which linked list method should we use?\n";
    cout << "   [1] New nodes are added at the head of the linked list\n";
    cout << "   [2] New nodes are added at the tail of the linked list\n";
    cout << "Choice: ";
    cin >> choice;

    


}



