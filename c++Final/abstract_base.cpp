#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
class A
{
protected:
    string title;
    float rating;

public:
    A(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()=0;
};
class video : public A
{
    float vlength;

public:
    video(string s, float r, float vl) : A(s, r)
    {
        vlength = vl;
    }
    void display()
    {
        cout << "This is beautiful video :" << title << endl;
        cout << "Ratings : " << rating << endl;
        cout << "Length of this video is :" << vlength << endl;
    }
};
class text : public A
{
    int words;

public:
    text(string s, float r, int wc) : A(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an beautiful paragraph :" << title << endl;
        cout << "Rating for text :" << rating << endl;
        cout << "Words in this text is : " << words << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    // for video

    cout << endl;
    title = "Code with codeforces";
    vlen = 10.89;
    rating = 10;
    video codeforces_video(title, rating, vlen);

    // for word
    
    title = "Codeforces paragraph";
    words = 100;
    rating = 9;
    text codeforces_text(title, rating, words);
    A *art[2];
    art[0] = &codeforces_video;
    art[1] = &codeforces_text;
    art[0]->display();
    art[1]->display();
    return 0;
}